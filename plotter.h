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

#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QLabel>
#include <QMap>
#include <QPixmap>
#include <QTimer>

#define HEARTRATEWIDGETPOSX 0.85
#define HEARTRATEWIDGETPOSY 0.15


//
// PlotSettings class
//

class PlotSettings
{

public:
    PlotSettings();

    void scroll(int dx, int dy);
    void adjust();
    double spanX() const { return maxX - minX; }
    double spanY() const { return maxY - minY; }

    double minX;
    double maxX;
    int numXTicks;
    double minY;
    double maxY;
    int numYTicks;

private:
    static void adjustAxis(double &min, double &max, int &numTicks);
};


//
// Plotter class
//

class Plotter : public QWidget
{
    Q_OBJECT

public:
    Plotter(QWidget *parent = 0);

    void setCurveData(int id, const QVector<QPointF> &data);
    //void clearCurve(int id);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    inline void setHeartRate(const int &rate) { heartRate = rate; }
    QString ecgBackground();

public slots:
    void setDisplayData(bool status);
    void setEcgBackground(const bool &);
    void timeout();

signals:
    void plotterChanged();

protected:
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    void drawGrid(QPainter *painter);
    void drawCurves(QPainter *painter);

    enum { Margin = 10 };

    PlotSettings plotSettings;
    QMap<int, QVector<QPointF> > curveMap;

    bool displayGrid;                   // True if ECG paper type display, vital monitor otherwise
    bool displayAxes;                   // True if grid scale is to be shown
    bool displayData;                   // True if curve data is to be displayed

    // TODO: Specific to ECG, move to ECGPlotter?
    QLabel heartRateWidget;             // The widget that shows heart rate
    int heartRate;                      // Current heart rate value
    QTimer timer;                       // Speed that display scrolls left
};


#endif
