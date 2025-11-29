#ifndef FAKE_QVIDEOWIDGET_H
#define FAKE_QVIDEOWIDGET_H

#include <qwidget.h>

class QVideoWidget
: public QWidget
{
  Q_OBJECT

public:
  QVideoWidget (QWidget *parent = nullptr);

protected:
  void
  paintEvent (QPaintEvent *event) override;
};

#endif
