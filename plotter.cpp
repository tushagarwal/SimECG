/****************************************************************************
**
** Antonio Cardoso Martins    (digiplan.pt@gmail.com)
** Paulo Dias Costa           (mestre.do.pau@gmail.com)
** João Silva Marques         (joaomiguelsilvamarques@gmail.com)
**
** Copyright (c) 2009-2014 All Rights Reserved
**
** This file is part of simECG
**
** simECG is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** simECG is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#include "plotter.h"

#include <QPainter>
#include <cmath>

using namespace std;

const QColor orange = QColor(0xFF, 0xC0, 0xC0);

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    // Defines the color palette for this widget
    QPalette myPalette;
    myPalette.setColor(QPalette::Background, Qt::white);
    setPalette(myPalette);
    setAutoFillBackground(true);

    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    setFocusPolicy(Qt::StrongFocus);

    displayGrid = true;
    displayAxes = false;
    displayData = true;

    // Prepare the heartRate QLabel display widget in the right corner
    heartRateWidget.setParent(this);
    heartRateWidget.move(width() * HEARTRATEWIDGETPOSX, height() * HEARTRATEWIDGETPOSY);
    heartRateWidget.setAlignment(Qt::AlignRight);
    heartRateWidget.setText(QString("<html><body style=\"font-size:22pt;\">\n%1</body></html>").arg(999));
    heartRateWidget.setVisible(displayData);

    // Display scrolls at interval
    // timer.setInterval(250);
    connect( &timer, SIGNAL(timeout()), this, SLOT(timeout()) );

    plotSettings = PlotSettings();
}


void Plotter::setCurveData(int id, const QVector<QPointF> &data)
{
    curveMap[id] = data;
    update();
}


//void Plotter::clearCurve(int id)
//{
//    curveMap.remove(id);
//    update();
//}


QSize Plotter::minimumSizeHint() const
{
    return QSize(6 * Margin, 4 * Margin);
}


QSize Plotter::sizeHint() const
{
    return QSize(12 * Margin, 8 * Margin);
}


void Plotter::setDisplayData(bool status)
{
    displayData = status;
    heartRateWidget.setVisible(status);
    update();
}

// This is the setter for the ECG background preference
void Plotter::setEcgBackground(const bool &status)
{
    QPalette myPalette;

    displayGrid = status;

    if (displayGrid) {
        myPalette.setColor(QPalette::Background, Qt::white);
        myPalette.setColor(QPalette::WindowText, Qt::black);
    } else {
        myPalette.setColor(QPalette::Background, Qt::black);
        myPalette.setColor(QPalette::WindowText, Qt::white);
    }
    setPalette(myPalette);
    update();
}


// This method is the access to ECG background paper preference
QString Plotter::ecgBackground()
{
    QString background;

    if (displayGrid) {
        background = "Paper";
    } else {
        background = "Monitor";
    }
    return background;
}


// Here we actually replace the current pixmap with a new one
void Plotter::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter(this);

    // Paint paper background
    if (displayGrid) {
        drawGrid(&painter);
    }

    // Paint curve and heart rate
    if (displayData) {
        drawCurves(&painter);
        // Updates the heart rate indicator
        heartRateWidget.setText(QString("<html><body style=\"font-size:22pt;\">\n%1</body></html>").arg(heartRate));
        heartRateWidget.update();
    }
}


void Plotter::resizeEvent(QResizeEvent * /* event */)
{
    heartRateWidget.move(width() * HEARTRATEWIDGETPOSX, height() * HEARTRATEWIDGETPOSY);
    update();
}


// timeout method called when the display needs to scroll
void Plotter::timeout()
{
    //TODO: NOT WORKING
    //scroll(10, 0);
    //update();
}


/**
  *
  * Draws the background grid as ECG paper
  *
**/
void Plotter::drawGrid(QPainter *painter)
{
    QRect rect(Margin, Margin, width() - 2 * Margin, height() - 2 * Margin);
    if (!rect.isValid()) return;

    QPen gridColor(orange , 0, Qt::DotLine, Qt::RoundCap);
    QPen axesColor(Qt::blue);

    // Draw vertical gridlines
    for (int i = 0; i <= plotSettings.numXTicks; ++i) {
        int x = rect.left() + (i * (rect.width() - 1) / plotSettings.numXTicks);
        double label = plotSettings.minX + (i * plotSettings.spanX() / plotSettings.numXTicks);
        // Draw the grid (x)
        if (!(i % 25)) {
            gridColor.setWidth(2);
        } else if (!(i % 5)) {
            gridColor.setWidth(1);
        } else {
            gridColor.setWidth(0);
        }
        painter->setPen(gridColor);
        painter->drawLine(x, rect.top(), x, rect.bottom());
        if (displayAxes) {
            // Draw vertical axes
            painter->setPen(axesColor);
            painter->drawLine(x, rect.bottom(), x, rect.bottom() + 5);
            // Draw the axes numbers
            if (!(i % 5)) {
                painter->drawText(x - 50, rect.bottom() + 5, 100, 15,
                                  Qt::AlignHCenter | Qt::AlignTop, QString::number(label));
            }
        }
    }

    // Draw horizontal gridlines
    for (int j = 0; j <= plotSettings.numYTicks; ++j) {
        int y = rect.bottom() - (j * (rect.height() - 1) / plotSettings.numYTicks);
        double label = plotSettings.minY + (j * plotSettings.spanY() / plotSettings.numYTicks);
        // Draw the grid (y)
        if (!(j % 25)) {
            gridColor.setWidth(2);
        } else if (!(j % 5)) {
            gridColor.setWidth(1);
        } else {
            gridColor.setWidth(0);
        }
       painter->setPen(gridColor);
       painter->drawLine(rect.left(), y, rect.right(), y);
        if (displayAxes) {
            // Draw the horizontal axes
            painter->setPen(axesColor);
            painter->drawLine(rect.left() - 5, y, rect.left(), y);
            // Draw the axes numbers
            if (!(j % 5)) {
                painter->drawText(rect.left() - Margin, y - 10, Margin - 5, 20,
                                  Qt::AlignRight | Qt::AlignVCenter, QString::number(label));
            }
        }
    }
    if (displayAxes) {
        // Draw outer frame
        painter->setPen(axesColor);
        painter->drawRect(rect.adjusted(0, 0, -1, -1));
    }
}



void Plotter::drawCurves(QPainter *painter)
{
    static QColor colorForIds[6] = {
        Qt::black, Qt::green, Qt::blue, Qt::cyan, Qt::magenta, Qt::yellow
    };
    // If the display type is paper, curve is shown Black. Green otherwise
    if (displayGrid) {
        colorForIds[0] = Qt::black;
    } else {
        colorForIds[0] = QColor(0x2f, 0xe2, 0x2f);  //Green
    }

    QRect rect(Margin, Margin, width() - 2 * Margin, height() - 2 * Margin);
    if (!rect.isValid()) return;

    painter->setClipRect(rect.adjusted(+1, +1, -1, -1));

    QMapIterator<int, QVector<QPointF> > i(curveMap);
    while (i.hasNext()) {
        i.next();

        int id = i.key();
        const QVector<QPointF> &data = i.value();
        QPolygonF polyline(data.count());

        for (int j = 0; j < data.count(); ++j) {
            double dx = data[j].x() - plotSettings.minX;
            double dy = data[j].y() - plotSettings.minY;
            double x = rect.left() + (dx * (rect.width() - 1) / plotSettings.spanX());
            double y = rect.bottom() - (dy * (rect.height() - 1) / plotSettings.spanY());
            polyline[j] = QPointF(x, y);
        }
        painter->setPen(colorForIds[uint(id) % 6]);
        painter->drawPolyline(polyline);
    }
}


//
// PlotSettings class
//

PlotSettings::PlotSettings()
{
    minX = 0;
    maxX = 6;
    numXTicks = 150;

    minY = -2.0;
    maxY = 2.0;
    numYTicks = 40;
}

void PlotSettings::scroll(int dx, int dy)
{
    double stepX = spanX() / numXTicks;
    minX += dx * stepX;
    maxX += dx * stepX;

    double stepY = spanY() / numYTicks;
    minY += dy * stepY;
    maxY += dy * stepY;
}

void PlotSettings::adjust()
{
    adjustAxis(minX, maxX, numXTicks);
    adjustAxis(minY, maxY, numYTicks);
}

void PlotSettings::adjustAxis(double &min, double &max, int &numTicks)
{
    const int MinTicks = 4;
    double grossStep = (max - min) / MinTicks;
    double step = pow(10.0, floor(log10(grossStep)));

    if (5 * step < grossStep) {
        step *= 5;
    } else if (2 * step < grossStep) {
        step *= 2;
    }

    numTicks = int(ceil(max / step) - floor(min / step));
    if (numTicks < MinTicks)
        numTicks = MinTicks;
    min = floor(min / step) * step;
    max = ceil(max / step) * step;
}
