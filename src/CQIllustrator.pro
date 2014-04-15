TEMPLATE = app

TARGET = CQIllustrator

DEPENDPATH += .

QT += widgets

CONFIG += debug

# Input
SOURCES += \
CArcToBezier.cpp \
CAxis2D.cpp \
CBezierToLine.cpp \
CDelaunay.cpp \
CEncode64.cpp \
CCSS.cpp \
CGenPoly.cpp \
CGiftWrap.cpp \
CHull3D.cpp \
CKuhnMunkres.cpp \
CLog.cpp \
CMathGeom2D.cpp \
CPathShape.cpp \
CQAccelerate.cpp \
CQAlphaButton.cpp \
CQAngleSpinBox.cpp \
CQColorChooser.cpp \
CQFillOption.cpp \
CQFontChooser.cpp \
CQFontOption.cpp \
CQGradientStopList.cpp \
CQIllustratorAlignMode.cpp \
CQIllustratorCanvas.cpp \
CQIllustratorCmd.cpp \
CQIllustrator.cpp \
CQIllustratorCreateEllipseMode.cpp \
CQIllustratorCreatePathMode.cpp \
CQIllustratorCreatePolygonMode.cpp \
CQIllustratorCreateRectMode.cpp \
CQIllustratorCreateStarMode.cpp \
CQIllustratorCreateTextMode.cpp \
CQIllustratorData.cpp \
CQIllustratorHandle.cpp \
CQIllustratorInfo.cpp \
CQIllustratorLayer.cpp \
CQIllustratorMode.cpp \
CQIllustratorOffsetPathMode.cpp \
CQIllustratorPanMode.cpp \
CQIllustratorPointSelectMode.cpp \
CQIllustratorPreference.cpp \
CQIllustratorSandbox.cpp \
CQIllustratorSelection.cpp \
CQIllustratorSelectMode.cpp \
CQIllustratorSetAnchorObjectMode.cpp \
CQIllustratorSetAnchorPositionMode.cpp \
CQIllustratorSetImageMode.cpp \
CQIllustratorSetLGradientMode.cpp \
CQIllustratorSetRGradientMode.cpp \
CQIllustratorShape.cpp \
CQIllustratorShapeDrawer.cpp \
CQIllustratorSizer.cpp \
CQIllustratorSliceMode.cpp \
CQIllustratorSnap.cpp \
CQIllustratorToolbar.cpp \
CQIllustratorTransformMode.cpp \
CQIllustratorUndo.cpp \
CQIllustratorUndoDock.cpp \
CQIllustratorZoomMode.cpp \
CQImageButton.cpp \
CQImagePreview.cpp \
CQIntegerEdit.cpp \
CQLayerOption.cpp \
CQLineCap.cpp \
CQLineDash.cpp \
CQLineJoin.cpp \
CQMatrix2D.cpp \
CQObjectOption.cpp \
CQOptionToolSet.cpp \
CQPointEdit.cpp \
CQPropertiesOption.cpp \
CQRadioButtons.cpp \
CQRealEdit.cpp \
CQScrollArea.cpp \
CQStrokeOption.cpp \
CQSwatch.cpp \
CQTableWidget.cpp \
CQWinWidget.cpp \
CTriangulate2D.cpp \

HEADERS += \
CAxis2D.h \
CBooleanOp.h \
CCSS.h \
CDelaunay.h \
CEncode64.h \
CGaussianBlur.h \
CGenPoly.h \
CGiftWrap.h \
CHull3D.h \
CKuhnMunkres.h \
CListLink.h \
CLog.h \
CMathGeom2D.h \
CPathPartType.h \
CPathShape.h \
CQAccelerate.h \
CQAlphaButton.h \
CQAngleSpinBox.h \
CQColorChooser.h \
CQDockWidget.h \
CQFillOption.h \
CQFontChooser.h \
CQFontOption.h \
CQGradientStopList.h \
CQIllustratorAlignMode.h \
CQIllustratorCanvas.h \
CQIllustratorCmd.h \
CQIllustratorCreateEllipseMode.h \
CQIllustratorCreatePathMode.h \
CQIllustratorCreatePolygonMode.h \
CQIllustratorCreateRectMode.h \
CQIllustratorCreateStarMode.h \
CQIllustratorCreateTextMode.h \
CQIllustratorData.h \
CQIllustrator.h \
CQIllustratorHandle.h \
CQIllustratorInfo.h \
CQIllustratorInfoTip.h \
CQIllustratorLayer.h \
CQIllustratorMode.h \
CQIllustratorOffsetPathMode.h \
CQIllustratorPanMode.h \
CQIllustratorPointSelectMode.h \
CQIllustratorPreference.h \
CQIllustratorSandbox.h \
CQIllustratorSaveData.h \
CQIllustratorSelection.h \
CQIllustratorSelectMode.h \
CQIllustratorSetAnchorObjectMode.h \
CQIllustratorSetAnchorPositionMode.h \
CQIllustratorSetImageMode.h \
CQIllustratorSetLGradientMode.h \
CQIllustratorSetRGradientMode.h \
CQIllustratorShapeDrawer.h \
CQIllustratorShape.h \
CQIllustratorSizer.h \
CQIllustratorSliceMode.h \
CQIllustratorSnap.h \
CQIllustratorToolbar.h \
CQIllustratorTransformMode.h \
CQIllustratorUndoDock.h \
CQIllustratorUndo.h \
CQIllustratorZoomMode.h \
CQImageButton.h \
CQImageGaussianBlur.h \
CQImagePreview.h \
CQIntegerEdit.h \
CQLayerOption.h \
CQLineCap.h \
CQLineDash.h \
CQLineJoin.h \
CQMatrix2D.h \
CQObjectOption.h \
CQOptionToolSet.h \
CQPointEdit.h \
CQPropertiesOption.h \
CQRadioButtons.h \
CQRealEdit.h \
CQScrollArea.h \
CQStrokeOption.h \
CQSwatch.h \
CQTableWidget.h \
CQToolBar.h \
CQuadTree.h \
CQWinWidget.h \
CStack.h \
CStateIterator.h \
CTriangulate2D.h \

DESTDIR     = ../bin
OBJECTS_DIR = ../obj
LIB_DIR     = ../lib

INCLUDEPATH += \
../include \
../../CSVG/include \
../../CQUtil/include \
../../CImageLib/include \
../../CConfig/include \
../../CArgs/include \
../../CFile/include \
../../CFont/include \
../../CRegExp/include \
../../CStrUtil/include \
../../COS/include \
../../CMath/include \
../../CRGBName/include \
../../CUndo/include \
../../CUtil/include \
.

unix:LIBS += \
-L$$LIB_DIR \
-L../../CSVG/lib \
-L../../CQUtil/lib \
-L../../CXML/lib \
-L../../CImageLib/lib \
-L../../CArgs/lib \
-L../../CConfig/lib \
-L../../CFont/lib \
-L../../CRegExp/lib \
-L../../CFile/lib \
-L../../CMath/lib \
-L../../CStrUtil/lib \
-L../../CRGBName/lib \
-L../../CUndo/lib \
-L../../CUtil/lib \
-L../../COS/lib \
-lCSVG \
-lCXML \
-lCQUtil \
-lCImageLib \
-lCFont \
-lCArgs \
-lCConfig \
-lCUndo \
-lCFile \
-lCRGBName \
-lCUtil \
-lCOS \
-lCRegExp \
-lCStrUtil \
-ljpeg -lpng -ltre
