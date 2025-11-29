#ifndef QVIDEOWIDGET_PLUGIN_H
#define QVIDEOWIDGET_PLUGIN_H

#include <customwidget.h>
#include <qobject.h>

class QWidget;

class QVideoWidgetPlugin
: public QObject
, public QDesignerCustomWidgetInterface
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface")
  Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
  QVideoWidgetPlugin (QObject *parent = nullptr);

  QString
  name () const override;

  QString
  includeFile () const override;

  QString
  group () const override;

  bool
  isContainer () const override;

  QWidget *
  createWidget (QWidget *parent) override;

  bool
  isInitialized () const override;

  void
  initialize (QDesignerFormEditorInterface *core) override;

  QString
  toolTip () const override;

  QString
  whatsThis () const override;

  QIcon
  icon () const override;

private:
  bool m_initialized;
};

#endif
