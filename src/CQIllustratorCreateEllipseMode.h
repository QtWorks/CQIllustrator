#ifndef CQIllustratorCreateEllipseMode_H
#define CQIllustratorCreateEllipseMode_H

#include <CQIllustratorMode.h>
#include <CQIllustratorToolbar.h>
#include <CQIllustratorCreateEllipseMode.h>
#include <CQIllustratorEllipseShape.h>

#include <QComboBox>

class CQPointEdit;
class CQRealEdit;
class CQAngleSpinBox;
class CQIllustrator;
class CQIllustratorControlPointHandle;
class CQIllustratorCreateEllipseMode;
class CQIllustratorCreateEllipseSizer;

class CQEllipseShape2DConnectType : public QComboBox {
  Q_OBJECT

 public:
  CQEllipseShape2DConnectType(QWidget *parent=0);

  void setType(CQIllustratorEllipseShape::ConnectType value);

  CQIllustratorEllipseShape::ConnectType getType() const { return value_; }

 private slots:
  void itemSlot(const QString &name);

 signals:
  void valueChanged();

 private:
  typedef CQIllustratorEllipseShape::ConnectType ConnectType;

  typedef std::map<QString,CQIllustratorEllipseShape::ConnectType> NameValue;
  typedef std::map<CQIllustratorEllipseShape::ConnectType,QString> ValueName;

  NameValue   nameValue_;
  ValueName   valueName_;
  ConnectType value_ { ConnectType::LINE };
};

//------

class CQIllustratorCreateEllipseToolbar : public CQIllustratorToolbar {
  Q_OBJECT

 public:
  CQIllustratorCreateEllipseToolbar(CQIllustratorCreateEllipseMode *mode);

  const char *getTitle() const { return "Create Ellipse"; }

  QIcon getIcon();

  void addWidgets();

  void setSelectedShape(const CQIllustratorShape *shape);

  void setSize(const CBBox2D &bbox);

 private slots:
  void updateShape();

 private:
  CQIllustratorCreateEllipseMode *mode_ { 0 };
  CQPointEdit                    *posEdit_ { 0 };
  CQRealEdit                     *widthEdit_ { 0 };
  CQRealEdit                     *heightEdit_ { 0 };
  CQAngleSpinBox                 *angle1Edit_ { 0 };
  CQAngleSpinBox                 *angle2Edit_ { 0 };
  CQEllipseShape2DConnectType    *connectEdit_ { 0 };
};

//------

class CQIllustratorCreateEllipseSizer : public CQIllustratorModeSizer {
 public:
  CQIllustratorCreateEllipseSizer(CQIllustratorCreateEllipseMode *mode);

  void drawHandles(QPainter *painter, const CQIllustratorShape *shape);

 private:
  CQIllustratorControlPointHandle *rx_handle_ { 0 };
  CQIllustratorControlPointHandle *ry_handle_ { 0 };
  CQIllustratorControlPointHandle *a1_handle_ { 0 };
  CQIllustratorControlPointHandle *a2_handle_ { 0 };
};

//------

class CQIllustratorCreateEllipseMode : public CQIllustratorMode {
  Q_OBJECT

 public:
  CQIllustratorCreateEllipseMode(CQIllustrator *illustrator);

  const char *getTitle() const { return "Create Ellipse"; }

  CQIllustratorCreateEllipseToolbar *getToolbar() { return toolbar_; }

  CQIllustratorCreateEllipseToolbar *createToolbar();

  CQIllustratorCreateEllipseSizer *createSizer();

  CQMenuItem *createMenuItem(CQMenu *menu);

  bool isCreateMode() const { return true; }

  CQIllustratorCreateEllipseToolbar *getToolbar() const { return toolbar_; }

  void handleMouseRelease(const MouseEvent &e);
  void handleMouseDrag   (const MouseEvent &e);

  void drawOverlay(CQIllustratorShapeDrawer *drawer);

 private:
  CQIllustratorCreateEllipseToolbar *toolbar_ { 0 };
  CQIllustratorCreateEllipseSizer   *sizer_ { 0 };
  bool                               equalSize_ { false };
};

#endif
