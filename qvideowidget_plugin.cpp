#include "fake_qvideowidget.h"

#include "qvideowidget_plugin.h"

#define PRETTY_TOOLTIP_HELP_TEXT "A widget for presenting multi-media contents."

QVideoWidgetPlugin::QVideoWidgetPlugin (QObject *parent)
: QObject(parent)
, QDesignerCustomWidgetInterface()
{
  m_initialized = false;
}

QString
QVideoWidgetPlugin::name () const
{
  return QStringLiteral("QVideoWidget");
}

QString
QVideoWidgetPlugin::includeFile () const
{
  return QStringLiteral("<QtMultimediaWidgets/QVideoWidget>");
}

QString
QVideoWidgetPlugin::group () const
{
  return QStringLiteral("Display Widgets");
}

bool
QVideoWidgetPlugin::isContainer () const
{
  return false;
}

QString
QVideoWidgetPlugin::domXml () const
{
  return QStringLiteral(
    "<widget class=\"QVideoWidget\" name=\"videoWidget\">\n"
    "  <property name=\"geometry\">\n"
    "    <rect>\n"
    "      <x>0</x>\n"
    "      <y>0</y>\n"
    "      <width>300</width>\n"
    "      <height>200</height>\n"
    "    </rect>\n"
    "  </property>\n"
    "</widget>"
  );
}

QWidget *
QVideoWidgetPlugin::createWidget (QWidget *parent)
{
  return new QVideoWidget(parent);
}

void
QVideoWidgetPlugin::initialize (QDesignerFormEditorInterface *core)
{
  (void)core;

  if (m_initialized)
    return;

  m_initialized = true;
}

bool
QVideoWidgetPlugin::isInitialized () const
{
  return m_initialized;
}

QString
QVideoWidgetPlugin::toolTip () const
{
  return QStringLiteral(PRETTY_TOOLTIP_HELP_TEXT);
}

QString
QVideoWidgetPlugin::whatsThis () const
{
  return QStringLiteral(PRETTY_TOOLTIP_HELP_TEXT);
}

QIcon
QVideoWidgetPlugin::icon () const
{
  return {};
}
