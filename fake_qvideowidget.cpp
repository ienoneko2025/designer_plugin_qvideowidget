#include <qpainter.h>

#include "fake_qvideowidget.h"

QVideoWidget::QVideoWidget (QWidget *parent)
: QWidget(parent)
{
}

void
QVideoWidget::paintEvent (QPaintEvent *event)
{
  QPainter(this).fillRect(rect(), Qt::black);
}
