#include "mapmarker.h"
#include "ui_mapmarker.h"
#include "clickableLabel.h"

MapMarker::MapMarker(QWidget *parent) : QMainWindow(parent), ui(new Ui::MapMarker) {
    ui->setupUi(this);

    QString url = R"(/home/viki/git/ESA-PROJ/map-marker/maps/legomap3-cropped.pgm)";
    QPixmap img(url);
    ClickableLabel *label = new ClickableLabel(this);
    QPoint p(0,0);
    label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    label->setGeometry(QRect(0,0,992,992));
    label->setPixmap(img);
}

MapMarker::~MapMarker() {
    delete ui;
}

QPoint MapMarker::GetCurrentMousePos() {
    //QPoint p = widget->mapFromGlobal(QCursor::pos());
}
