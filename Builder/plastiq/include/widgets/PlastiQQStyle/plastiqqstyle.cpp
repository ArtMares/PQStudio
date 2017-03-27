#include "plastiqmethod.h"
#include "plastiqqstyle.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QStyle> 
#include <QPainter>
#include <QRect>
#include <QPixmap>
#include <QPalette>
#include <QString>
#include <QFontMetrics>
#include <QWidget>
#include <QApplication>
#include <QSize>
#include <QIcon>
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQStyle::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyle::plastiqMethods = {
    { "combinedLayoutSpacing(enum,enum,enum)", { "combinedLayoutSpacing", "QSizePolicy::ControlTypes,QSizePolicy::ControlTypes,Qt::Orientation", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "combinedLayoutSpacing(enum,enum,enum,QStyleOption*)", { "combinedLayoutSpacing", "QSizePolicy::ControlTypes,QSizePolicy::ControlTypes,Qt::Orientation,QStyleOption*", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "combinedLayoutSpacing(enum,enum,enum,QStyleOption*,QWidget*)", { "combinedLayoutSpacing", "QSizePolicy::ControlTypes,QSizePolicy::ControlTypes,Qt::Orientation,QStyleOption*,QWidget*", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawComplexControl(enum,const QStyleOptionComplex*,QPainter*)", { "drawComplexControl", "ComplexControl,QStyleOptionComplex*,QPainter*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawComplexControl(enum,const QStyleOptionComplex*,QPainter*,const QWidget*)", { "drawComplexControl", "ComplexControl,QStyleOptionComplex*,QPainter*,QWidget*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawControl(enum,const QStyleOption*,QPainter*)", { "drawControl", "ControlElement,QStyleOption*,QPainter*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawControl(enum,const QStyleOption*,QPainter*,const QWidget*)", { "drawControl", "ControlElement,QStyleOption*,QPainter*,QWidget*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemPixmap(QPainter*,QRect&,int,QPixmap&)", { "drawItemPixmap", "QPainter*,QRect&,int,QPixmap&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemText(QPainter*,QRect&,int,QPalette&,bool,QString)", { "drawItemText", "QPainter*,QRect&,int,QPalette&,bool,QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawItemText(QPainter*,QRect&,int,QPalette&,bool,QString,enum)", { "drawItemText", "QPainter*,QRect&,int,QPalette&,bool,QString&,QPalette::ColorRole", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPrimitive(enum,const QStyleOption*,QPainter*)", { "drawPrimitive", "PrimitiveElement,QStyleOption*,QPainter*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawPrimitive(enum,const QStyleOption*,QPainter*,const QWidget*)", { "drawPrimitive", "PrimitiveElement,QStyleOption*,QPainter*,QWidget*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "generatedIconPixmap(enum,QPixmap&,const QStyleOption*)", { "generatedIconPixmap", "QIcon::Mode,QPixmap&,QStyleOption*", "QPixmap", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hitTestComplexControl(enum,const QStyleOptionComplex*,QPoint&)", { "hitTestComplexControl", "ComplexControl,QStyleOptionComplex*,QPoint&", "SubControl", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hitTestComplexControl(enum,const QStyleOptionComplex*,QPoint&,const QWidget*)", { "hitTestComplexControl", "ComplexControl,QStyleOptionComplex*,QPoint&,QWidget*", "SubControl", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemPixmapRect(QRect&,int,QPixmap&)", { "itemPixmapRect", "QRect&,int,QPixmap&", "QRect", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemTextRect(QFontMetrics&,QRect&,int,bool,QString)", { "itemTextRect", "QFontMetrics&,QRect&,int,bool,QString&", "QRect", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutSpacing(enum,enum,enum)", { "layoutSpacing", "QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutSpacing(enum,enum,enum,const QStyleOption*)", { "layoutSpacing", "QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,QStyleOption*", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutSpacing(enum,enum,enum,const QStyleOption*,const QWidget*)", { "layoutSpacing", "QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,QStyleOption*,QWidget*", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelMetric(enum)", { "pixelMetric", "PixelMetric", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelMetric(enum,const QStyleOption*)", { "pixelMetric", "PixelMetric,QStyleOption*", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelMetric(enum,const QStyleOption*,const QWidget*)", { "pixelMetric", "PixelMetric,QStyleOption*,QWidget*", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "polish(QWidget*)", { "polish", "QWidget*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "polish(QApplication*)", { "polish", "QApplication*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "polish(QPalette&)", { "polish", "QPalette&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proxy()", { "proxy", "", "const QStyle*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeFromContents(enum,const QStyleOption*,QSize&)", { "sizeFromContents", "ContentsType,QStyleOption*,QSize&", "QSize", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeFromContents(enum,const QStyleOption*,QSize&,const QWidget*)", { "sizeFromContents", "ContentsType,QStyleOption*,QSize&,QWidget*", "QSize", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardIcon(enum)", { "standardIcon", "StandardPixmap", "QIcon", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardIcon(enum,const QStyleOption*)", { "standardIcon", "StandardPixmap,QStyleOption*", "QIcon", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardIcon(enum,const QStyleOption*,const QWidget*)", { "standardIcon", "StandardPixmap,QStyleOption*,QWidget*", "QIcon", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "standardPalette()", { "standardPalette", "", "QPalette", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint(enum)", { "styleHint", "StyleHint", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint(enum,const QStyleOption*)", { "styleHint", "StyleHint,QStyleOption*", "int", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint(enum,const QStyleOption*,const QWidget*)", { "styleHint", "StyleHint,QStyleOption*,QWidget*", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint(enum,const QStyleOption*,const QWidget*,QStyleHintReturn*)", { "styleHint", "StyleHint,QStyleOption*,QWidget*,QStyleHintReturn*", "int", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subControlRect(enum,const QStyleOptionComplex*,enum)", { "subControlRect", "ComplexControl,QStyleOptionComplex*,SubControl", "QRect", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subControlRect(enum,const QStyleOptionComplex*,enum,const QWidget*)", { "subControlRect", "ComplexControl,QStyleOptionComplex*,SubControl,QWidget*", "QRect", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subElementRect(enum,const QStyleOption*)", { "subElementRect", "SubElement,QStyleOption*", "QRect", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subElementRect(enum,const QStyleOption*,const QWidget*)", { "subElementRect", "SubElement,QStyleOption*,QWidget*", "QRect", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unpolish(QWidget*)", { "unpolish", "QWidget*", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unpolish(QApplication*)", { "unpolish", "QApplication*", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alignedRect(enum,enum,QSize&,QRect&)", { "alignedRect", "Qt::LayoutDirection,Qt::Alignment,QSize&,QRect&", "QRect", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sliderPositionFromValue(int,int,int,int)", { "sliderPositionFromValue", "int,int,int,int", "int", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sliderPositionFromValue(int,int,int,int,bool)", { "sliderPositionFromValue", "int,int,int,int,bool", "int", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sliderValueFromPosition(int,int,int,int)", { "sliderValueFromPosition", "int,int,int,int", "int", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sliderValueFromPosition(int,int,int,int,bool)", { "sliderValueFromPosition", "int,int,int,int,bool", "int", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "visualAlignment(enum,enum)", { "visualAlignment", "Qt::LayoutDirection,Qt::Alignment", "Qt::Alignment", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "visualPos(enum,QRect&,QPoint&)", { "visualPos", "Qt::LayoutDirection,QRect&,QPoint&", "QPoint", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "visualRect(enum,QRect&,QRect&)", { "visualRect", "Qt::LayoutDirection,QRect&,QRect&", "QRect", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyle::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyle::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyle::plastiqConstants = {

    /* QStyle::ComplexControl */
   { "CC_SpinBox", QStyle::CC_SpinBox },
   { "CC_ComboBox", QStyle::CC_ComboBox },
   { "CC_ScrollBar", QStyle::CC_ScrollBar },
   { "CC_Slider", QStyle::CC_Slider },
   { "CC_ToolButton", QStyle::CC_ToolButton },
   { "CC_TitleBar", QStyle::CC_TitleBar },
   { "CC_Dial", QStyle::CC_Dial },
   { "CC_GroupBox", QStyle::CC_GroupBox },
   { "CC_MdiControls", QStyle::CC_MdiControls },
   { "CC_CustomBase", QStyle::CC_CustomBase },

    /* QStyle::ContentsType */
   { "CT_PushButton", QStyle::CT_PushButton },
   { "CT_CheckBox", QStyle::CT_CheckBox },
   { "CT_RadioButton", QStyle::CT_RadioButton },
   { "CT_ToolButton", QStyle::CT_ToolButton },
   { "CT_ComboBox", QStyle::CT_ComboBox },
   { "CT_Splitter", QStyle::CT_Splitter },
   { "CT_ProgressBar", QStyle::CT_ProgressBar },
   { "CT_MenuItem", QStyle::CT_MenuItem },
   { "CT_MenuBarItem", QStyle::CT_MenuBarItem },
   { "CT_MenuBar", QStyle::CT_MenuBar },
   { "CT_Menu", QStyle::CT_Menu },
   { "CT_TabBarTab", QStyle::CT_TabBarTab },
   { "CT_Slider", QStyle::CT_Slider },
   { "CT_ScrollBar", QStyle::CT_ScrollBar },
   { "CT_LineEdit", QStyle::CT_LineEdit },
   { "CT_SpinBox", QStyle::CT_SpinBox },
   { "CT_SizeGrip", QStyle::CT_SizeGrip },
   { "CT_TabWidget", QStyle::CT_TabWidget },
   { "CT_DialogButtons", QStyle::CT_DialogButtons },
   { "CT_HeaderSection", QStyle::CT_HeaderSection },
   { "CT_GroupBox", QStyle::CT_GroupBox },
   { "CT_MdiControls", QStyle::CT_MdiControls },
   { "CT_ItemViewItem", QStyle::CT_ItemViewItem },
   { "CT_CustomBase", QStyle::CT_CustomBase },

    /* QStyle::ControlElement */
   { "CE_PushButton", QStyle::CE_PushButton },
   { "CE_PushButtonBevel", QStyle::CE_PushButtonBevel },
   { "CE_PushButtonLabel", QStyle::CE_PushButtonLabel },
   { "CE_CheckBox", QStyle::CE_CheckBox },
   { "CE_CheckBoxLabel", QStyle::CE_CheckBoxLabel },
   { "CE_RadioButton", QStyle::CE_RadioButton },
   { "CE_RadioButtonLabel", QStyle::CE_RadioButtonLabel },
   { "CE_TabBarTab", QStyle::CE_TabBarTab },
   { "CE_TabBarTabShape", QStyle::CE_TabBarTabShape },
   { "CE_TabBarTabLabel", QStyle::CE_TabBarTabLabel },
   { "CE_ProgressBar", QStyle::CE_ProgressBar },
   { "CE_ProgressBarGroove", QStyle::CE_ProgressBarGroove },
   { "CE_ProgressBarContents", QStyle::CE_ProgressBarContents },
   { "CE_ProgressBarLabel", QStyle::CE_ProgressBarLabel },
   { "CE_MenuItem", QStyle::CE_MenuItem },
   { "CE_MenuScroller", QStyle::CE_MenuScroller },
   { "CE_MenuVMargin", QStyle::CE_MenuVMargin },
   { "CE_MenuHMargin", QStyle::CE_MenuHMargin },
   { "CE_MenuTearoff", QStyle::CE_MenuTearoff },
   { "CE_MenuEmptyArea", QStyle::CE_MenuEmptyArea },
   { "CE_MenuBarItem", QStyle::CE_MenuBarItem },
   { "CE_MenuBarEmptyArea", QStyle::CE_MenuBarEmptyArea },
   { "CE_ToolButtonLabel", QStyle::CE_ToolButtonLabel },
   { "CE_Header", QStyle::CE_Header },
   { "CE_HeaderSection", QStyle::CE_HeaderSection },
   { "CE_HeaderLabel", QStyle::CE_HeaderLabel },
   { "CE_ToolBoxTab", QStyle::CE_ToolBoxTab },
   { "CE_SizeGrip", QStyle::CE_SizeGrip },
   { "CE_Splitter", QStyle::CE_Splitter },
   { "CE_RubberBand", QStyle::CE_RubberBand },
   { "CE_DockWidgetTitle", QStyle::CE_DockWidgetTitle },
   { "CE_ScrollBarAddLine", QStyle::CE_ScrollBarAddLine },
   { "CE_ScrollBarSubLine", QStyle::CE_ScrollBarSubLine },
   { "CE_ScrollBarAddPage", QStyle::CE_ScrollBarAddPage },
   { "CE_ScrollBarSubPage", QStyle::CE_ScrollBarSubPage },
   { "CE_ScrollBarSlider", QStyle::CE_ScrollBarSlider },
   { "CE_ScrollBarFirst", QStyle::CE_ScrollBarFirst },
   { "CE_ScrollBarLast", QStyle::CE_ScrollBarLast },
   { "CE_FocusFrame", QStyle::CE_FocusFrame },
   { "CE_ComboBoxLabel", QStyle::CE_ComboBoxLabel },
   { "CE_ToolBar", QStyle::CE_ToolBar },
   { "CE_ToolBoxTabShape", QStyle::CE_ToolBoxTabShape },
   { "CE_ToolBoxTabLabel", QStyle::CE_ToolBoxTabLabel },
   { "CE_HeaderEmptyArea", QStyle::CE_HeaderEmptyArea },
   { "CE_ColumnViewGrip", QStyle::CE_ColumnViewGrip },
   { "CE_ItemViewItem", QStyle::CE_ItemViewItem },
   { "CE_ShapedFrame", QStyle::CE_ShapedFrame },
   { "CE_CustomBase", QStyle::CE_CustomBase },

    /* QStyle::PixelMetric */
   { "PM_ButtonMargin", QStyle::PM_ButtonMargin },
   { "PM_ButtonDefaultIndicator", QStyle::PM_ButtonDefaultIndicator },
   { "PM_MenuButtonIndicator", QStyle::PM_MenuButtonIndicator },
   { "PM_ButtonShiftHorizontal", QStyle::PM_ButtonShiftHorizontal },
   { "PM_ButtonShiftVertical", QStyle::PM_ButtonShiftVertical },
   { "PM_DefaultFrameWidth", QStyle::PM_DefaultFrameWidth },
   { "PM_SpinBoxFrameWidth", QStyle::PM_SpinBoxFrameWidth },
   { "PM_ComboBoxFrameWidth", QStyle::PM_ComboBoxFrameWidth },
   { "PM_MaximumDragDistance", QStyle::PM_MaximumDragDistance },
   { "PM_ScrollBarExtent", QStyle::PM_ScrollBarExtent },
   { "PM_ScrollBarSliderMin", QStyle::PM_ScrollBarSliderMin },
   { "PM_SliderThickness", QStyle::PM_SliderThickness },
   { "PM_SliderControlThickness", QStyle::PM_SliderControlThickness },
   { "PM_SliderLength", QStyle::PM_SliderLength },
   { "PM_SliderTickmarkOffset", QStyle::PM_SliderTickmarkOffset },
   { "PM_SliderSpaceAvailable", QStyle::PM_SliderSpaceAvailable },
   { "PM_DockWidgetSeparatorExtent", QStyle::PM_DockWidgetSeparatorExtent },
   { "PM_DockWidgetHandleExtent", QStyle::PM_DockWidgetHandleExtent },
   { "PM_DockWidgetFrameWidth", QStyle::PM_DockWidgetFrameWidth },
   { "PM_TabBarTabOverlap", QStyle::PM_TabBarTabOverlap },
   { "PM_TabBarTabHSpace", QStyle::PM_TabBarTabHSpace },
   { "PM_TabBarTabVSpace", QStyle::PM_TabBarTabVSpace },
   { "PM_TabBarBaseHeight", QStyle::PM_TabBarBaseHeight },
   { "PM_TabBarBaseOverlap", QStyle::PM_TabBarBaseOverlap },
   { "PM_ProgressBarChunkWidth", QStyle::PM_ProgressBarChunkWidth },
   { "PM_SplitterWidth", QStyle::PM_SplitterWidth },
   { "PM_TitleBarHeight", QStyle::PM_TitleBarHeight },
   { "PM_MenuScrollerHeight", QStyle::PM_MenuScrollerHeight },
   { "PM_MenuHMargin", QStyle::PM_MenuHMargin },
   { "PM_MenuVMargin", QStyle::PM_MenuVMargin },
   { "PM_MenuPanelWidth", QStyle::PM_MenuPanelWidth },
   { "PM_MenuTearoffHeight", QStyle::PM_MenuTearoffHeight },
   { "PM_MenuDesktopFrameWidth", QStyle::PM_MenuDesktopFrameWidth },
   { "PM_MenuBarPanelWidth", QStyle::PM_MenuBarPanelWidth },
   { "PM_MenuBarItemSpacing", QStyle::PM_MenuBarItemSpacing },
   { "PM_MenuBarVMargin", QStyle::PM_MenuBarVMargin },
   { "PM_MenuBarHMargin", QStyle::PM_MenuBarHMargin },
   { "PM_IndicatorWidth", QStyle::PM_IndicatorWidth },
   { "PM_IndicatorHeight", QStyle::PM_IndicatorHeight },
   { "PM_ExclusiveIndicatorWidth", QStyle::PM_ExclusiveIndicatorWidth },
   { "PM_ExclusiveIndicatorHeight", QStyle::PM_ExclusiveIndicatorHeight },
   { "PM_DialogButtonsSeparator", QStyle::PM_DialogButtonsSeparator },
   { "PM_DialogButtonsButtonWidth", QStyle::PM_DialogButtonsButtonWidth },
   { "PM_DialogButtonsButtonHeight", QStyle::PM_DialogButtonsButtonHeight },
   { "PM_MdiSubWindowFrameWidth", QStyle::PM_MdiSubWindowFrameWidth },
   { "PM_MDIFrameWidth", QStyle::PM_MDIFrameWidth },
   { "PM_MdiSubWindowMinimizedWidth", QStyle::PM_MdiSubWindowMinimizedWidth },
   { "PM_MDIMinimizedWidth", QStyle::PM_MDIMinimizedWidth },
   { "PM_HeaderMargin", QStyle::PM_HeaderMargin },
   { "PM_HeaderMarkSize", QStyle::PM_HeaderMarkSize },
   { "PM_HeaderGripMargin", QStyle::PM_HeaderGripMargin },
   { "PM_TabBarTabShiftHorizontal", QStyle::PM_TabBarTabShiftHorizontal },
   { "PM_TabBarTabShiftVertical", QStyle::PM_TabBarTabShiftVertical },
   { "PM_TabBarScrollButtonWidth", QStyle::PM_TabBarScrollButtonWidth },
   { "PM_ToolBarFrameWidth", QStyle::PM_ToolBarFrameWidth },
   { "PM_ToolBarHandleExtent", QStyle::PM_ToolBarHandleExtent },
   { "PM_ToolBarItemSpacing", QStyle::PM_ToolBarItemSpacing },
   { "PM_ToolBarItemMargin", QStyle::PM_ToolBarItemMargin },
   { "PM_ToolBarSeparatorExtent", QStyle::PM_ToolBarSeparatorExtent },
   { "PM_ToolBarExtensionExtent", QStyle::PM_ToolBarExtensionExtent },
   { "PM_SpinBoxSliderHeight", QStyle::PM_SpinBoxSliderHeight },
   { "PM_DefaultTopLevelMargin", QStyle::PM_DefaultTopLevelMargin },
   { "PM_DefaultChildMargin", QStyle::PM_DefaultChildMargin },
   { "PM_DefaultLayoutSpacing", QStyle::PM_DefaultLayoutSpacing },
   { "PM_ToolBarIconSize", QStyle::PM_ToolBarIconSize },
   { "PM_ListViewIconSize", QStyle::PM_ListViewIconSize },
   { "PM_IconViewIconSize", QStyle::PM_IconViewIconSize },
   { "PM_SmallIconSize", QStyle::PM_SmallIconSize },
   { "PM_LargeIconSize", QStyle::PM_LargeIconSize },
   { "PM_FocusFrameVMargin", QStyle::PM_FocusFrameVMargin },
   { "PM_FocusFrameHMargin", QStyle::PM_FocusFrameHMargin },
   { "PM_ToolTipLabelFrameWidth", QStyle::PM_ToolTipLabelFrameWidth },
   { "PM_CheckBoxLabelSpacing", QStyle::PM_CheckBoxLabelSpacing },
   { "PM_TabBarIconSize", QStyle::PM_TabBarIconSize },
   { "PM_SizeGripSize", QStyle::PM_SizeGripSize },
   { "PM_DockWidgetTitleMargin", QStyle::PM_DockWidgetTitleMargin },
   { "PM_MessageBoxIconSize", QStyle::PM_MessageBoxIconSize },
   { "PM_ButtonIconSize", QStyle::PM_ButtonIconSize },
   { "PM_DockWidgetTitleBarButtonMargin", QStyle::PM_DockWidgetTitleBarButtonMargin },
   { "PM_RadioButtonLabelSpacing", QStyle::PM_RadioButtonLabelSpacing },
   { "PM_LayoutLeftMargin", QStyle::PM_LayoutLeftMargin },
   { "PM_LayoutTopMargin", QStyle::PM_LayoutTopMargin },
   { "PM_LayoutRightMargin", QStyle::PM_LayoutRightMargin },
   { "PM_LayoutBottomMargin", QStyle::PM_LayoutBottomMargin },
   { "PM_LayoutHorizontalSpacing", QStyle::PM_LayoutHorizontalSpacing },
   { "PM_LayoutVerticalSpacing", QStyle::PM_LayoutVerticalSpacing },
   { "PM_TabBar_ScrollButtonOverlap", QStyle::PM_TabBar_ScrollButtonOverlap },
   { "PM_TextCursorWidth", QStyle::PM_TextCursorWidth },
   { "PM_TabCloseIndicatorWidth", QStyle::PM_TabCloseIndicatorWidth },
   { "PM_TabCloseIndicatorHeight", QStyle::PM_TabCloseIndicatorHeight },
   { "PM_ScrollView_ScrollBarSpacing", QStyle::PM_ScrollView_ScrollBarSpacing },
   { "PM_ScrollView_ScrollBarOverlap", QStyle::PM_ScrollView_ScrollBarOverlap },
   { "PM_SubMenuOverlap", QStyle::PM_SubMenuOverlap },
   { "PM_TreeViewIndentation", QStyle::PM_TreeViewIndentation },
   { "PM_HeaderDefaultSectionSizeHorizontal", QStyle::PM_HeaderDefaultSectionSizeHorizontal },
   { "PM_HeaderDefaultSectionSizeVertical", QStyle::PM_HeaderDefaultSectionSizeVertical },
   { "PM_TitleBarButtonIconSize", QStyle::PM_TitleBarButtonIconSize },
   { "PM_TitleBarButtonSize", QStyle::PM_TitleBarButtonSize },
   { "PM_CustomBase", QStyle::PM_CustomBase },

    /* QStyle::PrimitiveElement */
   { "PE_Frame", QStyle::PE_Frame },
   { "PE_FrameDefaultButton", QStyle::PE_FrameDefaultButton },
   { "PE_FrameDockWidget", QStyle::PE_FrameDockWidget },
   { "PE_FrameFocusRect", QStyle::PE_FrameFocusRect },
   { "PE_FrameGroupBox", QStyle::PE_FrameGroupBox },
   { "PE_FrameLineEdit", QStyle::PE_FrameLineEdit },
   { "PE_FrameMenu", QStyle::PE_FrameMenu },
   { "PE_FrameStatusBar", QStyle::PE_FrameStatusBar },
   { "PE_FrameStatusBarItem", QStyle::PE_FrameStatusBarItem },
   { "PE_FrameTabWidget", QStyle::PE_FrameTabWidget },
   { "PE_FrameWindow", QStyle::PE_FrameWindow },
   { "PE_FrameButtonBevel", QStyle::PE_FrameButtonBevel },
   { "PE_FrameButtonTool", QStyle::PE_FrameButtonTool },
   { "PE_FrameTabBarBase", QStyle::PE_FrameTabBarBase },
   { "PE_PanelButtonCommand", QStyle::PE_PanelButtonCommand },
   { "PE_PanelButtonBevel", QStyle::PE_PanelButtonBevel },
   { "PE_PanelButtonTool", QStyle::PE_PanelButtonTool },
   { "PE_PanelMenuBar", QStyle::PE_PanelMenuBar },
   { "PE_PanelToolBar", QStyle::PE_PanelToolBar },
   { "PE_PanelLineEdit", QStyle::PE_PanelLineEdit },
   { "PE_IndicatorArrowDown", QStyle::PE_IndicatorArrowDown },
   { "PE_IndicatorArrowLeft", QStyle::PE_IndicatorArrowLeft },
   { "PE_IndicatorArrowRight", QStyle::PE_IndicatorArrowRight },
   { "PE_IndicatorArrowUp", QStyle::PE_IndicatorArrowUp },
   { "PE_IndicatorBranch", QStyle::PE_IndicatorBranch },
   { "PE_IndicatorButtonDropDown", QStyle::PE_IndicatorButtonDropDown },
   { "PE_IndicatorViewItemCheck", QStyle::PE_IndicatorViewItemCheck },
   { "PE_IndicatorItemViewItemCheck", QStyle::PE_IndicatorItemViewItemCheck },
   { "PE_IndicatorCheckBox", QStyle::PE_IndicatorCheckBox },
   { "PE_IndicatorDockWidgetResizeHandle", QStyle::PE_IndicatorDockWidgetResizeHandle },
   { "PE_IndicatorHeaderArrow", QStyle::PE_IndicatorHeaderArrow },
   { "PE_IndicatorMenuCheckMark", QStyle::PE_IndicatorMenuCheckMark },
   { "PE_IndicatorProgressChunk", QStyle::PE_IndicatorProgressChunk },
   { "PE_IndicatorRadioButton", QStyle::PE_IndicatorRadioButton },
   { "PE_IndicatorSpinDown", QStyle::PE_IndicatorSpinDown },
   { "PE_IndicatorSpinMinus", QStyle::PE_IndicatorSpinMinus },
   { "PE_IndicatorSpinPlus", QStyle::PE_IndicatorSpinPlus },
   { "PE_IndicatorSpinUp", QStyle::PE_IndicatorSpinUp },
   { "PE_IndicatorToolBarHandle", QStyle::PE_IndicatorToolBarHandle },
   { "PE_IndicatorToolBarSeparator", QStyle::PE_IndicatorToolBarSeparator },
   { "PE_PanelTipLabel", QStyle::PE_PanelTipLabel },
   { "PE_IndicatorTabTear", QStyle::PE_IndicatorTabTear },
   { "PE_IndicatorTabTearLeft", QStyle::PE_IndicatorTabTearLeft },
   { "PE_PanelScrollAreaCorner", QStyle::PE_PanelScrollAreaCorner },
   { "PE_Widget", QStyle::PE_Widget },
   { "PE_IndicatorColumnViewArrow", QStyle::PE_IndicatorColumnViewArrow },
   { "PE_IndicatorItemViewItemDrop", QStyle::PE_IndicatorItemViewItemDrop },
   { "PE_PanelItemViewItem", QStyle::PE_PanelItemViewItem },
   { "PE_PanelItemViewRow", QStyle::PE_PanelItemViewRow },
   { "PE_PanelStatusBar", QStyle::PE_PanelStatusBar },
   { "PE_IndicatorTabClose", QStyle::PE_IndicatorTabClose },
   { "PE_PanelMenu", QStyle::PE_PanelMenu },
   { "PE_IndicatorTabTearRight", QStyle::PE_IndicatorTabTearRight },
   { "PE_CustomBase", QStyle::PE_CustomBase },

    /* QStyle::RequestSoftwareInputPanel */
   { "RSIP_OnMouseClickAndAlreadyFocused", QStyle::RSIP_OnMouseClickAndAlreadyFocused },
   { "RSIP_OnMouseClick", QStyle::RSIP_OnMouseClick },

    /* QStyle::StandardPixmap */
   { "SP_TitleBarMenuButton", QStyle::SP_TitleBarMenuButton },
   { "SP_TitleBarMinButton", QStyle::SP_TitleBarMinButton },
   { "SP_TitleBarMaxButton", QStyle::SP_TitleBarMaxButton },
   { "SP_TitleBarCloseButton", QStyle::SP_TitleBarCloseButton },
   { "SP_TitleBarNormalButton", QStyle::SP_TitleBarNormalButton },
   { "SP_TitleBarShadeButton", QStyle::SP_TitleBarShadeButton },
   { "SP_TitleBarUnshadeButton", QStyle::SP_TitleBarUnshadeButton },
   { "SP_TitleBarContextHelpButton", QStyle::SP_TitleBarContextHelpButton },
   { "SP_DockWidgetCloseButton", QStyle::SP_DockWidgetCloseButton },
   { "SP_MessageBoxInformation", QStyle::SP_MessageBoxInformation },
   { "SP_MessageBoxWarning", QStyle::SP_MessageBoxWarning },
   { "SP_MessageBoxCritical", QStyle::SP_MessageBoxCritical },
   { "SP_MessageBoxQuestion", QStyle::SP_MessageBoxQuestion },
   { "SP_DesktopIcon", QStyle::SP_DesktopIcon },
   { "SP_TrashIcon", QStyle::SP_TrashIcon },
   { "SP_ComputerIcon", QStyle::SP_ComputerIcon },
   { "SP_DriveFDIcon", QStyle::SP_DriveFDIcon },
   { "SP_DriveHDIcon", QStyle::SP_DriveHDIcon },
   { "SP_DriveCDIcon", QStyle::SP_DriveCDIcon },
   { "SP_DriveDVDIcon", QStyle::SP_DriveDVDIcon },
   { "SP_DriveNetIcon", QStyle::SP_DriveNetIcon },
   { "SP_DirOpenIcon", QStyle::SP_DirOpenIcon },
   { "SP_DirClosedIcon", QStyle::SP_DirClosedIcon },
   { "SP_DirLinkIcon", QStyle::SP_DirLinkIcon },
   { "SP_DirLinkOpenIcon", QStyle::SP_DirLinkOpenIcon },
   { "SP_FileIcon", QStyle::SP_FileIcon },
   { "SP_FileLinkIcon", QStyle::SP_FileLinkIcon },
   { "SP_ToolBarHorizontalExtensionButton", QStyle::SP_ToolBarHorizontalExtensionButton },
   { "SP_ToolBarVerticalExtensionButton", QStyle::SP_ToolBarVerticalExtensionButton },
   { "SP_FileDialogStart", QStyle::SP_FileDialogStart },
   { "SP_FileDialogEnd", QStyle::SP_FileDialogEnd },
   { "SP_FileDialogToParent", QStyle::SP_FileDialogToParent },
   { "SP_FileDialogNewFolder", QStyle::SP_FileDialogNewFolder },
   { "SP_FileDialogDetailedView", QStyle::SP_FileDialogDetailedView },
   { "SP_FileDialogInfoView", QStyle::SP_FileDialogInfoView },
   { "SP_FileDialogContentsView", QStyle::SP_FileDialogContentsView },
   { "SP_FileDialogListView", QStyle::SP_FileDialogListView },
   { "SP_FileDialogBack", QStyle::SP_FileDialogBack },
   { "SP_DirIcon", QStyle::SP_DirIcon },
   { "SP_DialogOkButton", QStyle::SP_DialogOkButton },
   { "SP_DialogCancelButton", QStyle::SP_DialogCancelButton },
   { "SP_DialogHelpButton", QStyle::SP_DialogHelpButton },
   { "SP_DialogOpenButton", QStyle::SP_DialogOpenButton },
   { "SP_DialogSaveButton", QStyle::SP_DialogSaveButton },
   { "SP_DialogCloseButton", QStyle::SP_DialogCloseButton },
   { "SP_DialogApplyButton", QStyle::SP_DialogApplyButton },
   { "SP_DialogResetButton", QStyle::SP_DialogResetButton },
   { "SP_DialogDiscardButton", QStyle::SP_DialogDiscardButton },
   { "SP_DialogYesButton", QStyle::SP_DialogYesButton },
   { "SP_DialogNoButton", QStyle::SP_DialogNoButton },
   { "SP_ArrowUp", QStyle::SP_ArrowUp },
   { "SP_ArrowDown", QStyle::SP_ArrowDown },
   { "SP_ArrowLeft", QStyle::SP_ArrowLeft },
   { "SP_ArrowRight", QStyle::SP_ArrowRight },
   { "SP_ArrowBack", QStyle::SP_ArrowBack },
   { "SP_ArrowForward", QStyle::SP_ArrowForward },
   { "SP_DirHomeIcon", QStyle::SP_DirHomeIcon },
   { "SP_CommandLink", QStyle::SP_CommandLink },
   { "SP_VistaShield", QStyle::SP_VistaShield },
   { "SP_BrowserReload", QStyle::SP_BrowserReload },
   { "SP_BrowserStop", QStyle::SP_BrowserStop },
   { "SP_MediaPlay", QStyle::SP_MediaPlay },
   { "SP_MediaStop", QStyle::SP_MediaStop },
   { "SP_MediaPause", QStyle::SP_MediaPause },
   { "SP_MediaSkipForward", QStyle::SP_MediaSkipForward },
   { "SP_MediaSkipBackward", QStyle::SP_MediaSkipBackward },
   { "SP_MediaSeekForward", QStyle::SP_MediaSeekForward },
   { "SP_MediaSeekBackward", QStyle::SP_MediaSeekBackward },
   { "SP_MediaVolume", QStyle::SP_MediaVolume },
   { "SP_MediaVolumeMuted", QStyle::SP_MediaVolumeMuted },
   { "SP_LineEditClearButton", QStyle::SP_LineEditClearButton },
   { "SP_CustomBase", QStyle::SP_CustomBase },

    /* QStyle::StateFlag */
   { "State_None", QStyle::State_None },
   { "State_Enabled", QStyle::State_Enabled },
   { "State_Raised", QStyle::State_Raised },
   { "State_Sunken", QStyle::State_Sunken },
   { "State_Off", QStyle::State_Off },
   { "State_NoChange", QStyle::State_NoChange },
   { "State_On", QStyle::State_On },
   { "State_DownArrow", QStyle::State_DownArrow },
   { "State_Horizontal", QStyle::State_Horizontal },
   { "State_HasFocus", QStyle::State_HasFocus },
   { "State_Top", QStyle::State_Top },
   { "State_Bottom", QStyle::State_Bottom },
   { "State_FocusAtBorder", QStyle::State_FocusAtBorder },
   { "State_AutoRaise", QStyle::State_AutoRaise },
   { "State_MouseOver", QStyle::State_MouseOver },
   { "State_UpArrow", QStyle::State_UpArrow },
   { "State_Selected", QStyle::State_Selected },
   { "State_Active", QStyle::State_Active },
   { "State_Window", QStyle::State_Window },
   { "State_Open", QStyle::State_Open },
   { "State_Children", QStyle::State_Children },
   { "State_Item", QStyle::State_Item },
   { "State_Sibling", QStyle::State_Sibling },
   { "State_Editing", QStyle::State_Editing },
   { "State_KeyboardFocusChange", QStyle::State_KeyboardFocusChange },
   { "State_ReadOnly", QStyle::State_ReadOnly },
   { "State_Small", QStyle::State_Small },
   { "State_Mini", QStyle::State_Mini },

    /* QStyle::StyleHint */
   { "SH_EtchDisabledText", QStyle::SH_EtchDisabledText },
   { "SH_DitherDisabledText", QStyle::SH_DitherDisabledText },
   { "SH_ScrollBar_MiddleClickAbsolutePosition", QStyle::SH_ScrollBar_MiddleClickAbsolutePosition },
   { "SH_ScrollBar_ScrollWhenPointerLeavesControl", QStyle::SH_ScrollBar_ScrollWhenPointerLeavesControl },
   { "SH_TabBar_SelectMouseType", QStyle::SH_TabBar_SelectMouseType },
   { "SH_TabBar_Alignment", QStyle::SH_TabBar_Alignment },
   { "SH_Header_ArrowAlignment", QStyle::SH_Header_ArrowAlignment },
   { "SH_Slider_SnapToValue", QStyle::SH_Slider_SnapToValue },
   { "SH_Slider_SloppyKeyEvents", QStyle::SH_Slider_SloppyKeyEvents },
   { "SH_ProgressDialog_CenterCancelButton", QStyle::SH_ProgressDialog_CenterCancelButton },
   { "SH_ProgressDialog_TextLabelAlignment", QStyle::SH_ProgressDialog_TextLabelAlignment },
   { "SH_PrintDialog_RightAlignButtons", QStyle::SH_PrintDialog_RightAlignButtons },
   { "SH_MainWindow_SpaceBelowMenuBar", QStyle::SH_MainWindow_SpaceBelowMenuBar },
   { "SH_FontDialog_SelectAssociatedText", QStyle::SH_FontDialog_SelectAssociatedText },
   { "SH_Menu_AllowActiveAndDisabled", QStyle::SH_Menu_AllowActiveAndDisabled },
   { "SH_Menu_SpaceActivatesItem", QStyle::SH_Menu_SpaceActivatesItem },
   { "SH_Menu_SubMenuPopupDelay", QStyle::SH_Menu_SubMenuPopupDelay },
   { "SH_ScrollView_FrameOnlyAroundContents", QStyle::SH_ScrollView_FrameOnlyAroundContents },
   { "SH_MenuBar_AltKeyNavigation", QStyle::SH_MenuBar_AltKeyNavigation },
   { "SH_ComboBox_ListMouseTracking", QStyle::SH_ComboBox_ListMouseTracking },
   { "SH_Menu_MouseTracking", QStyle::SH_Menu_MouseTracking },
   { "SH_MenuBar_MouseTracking", QStyle::SH_MenuBar_MouseTracking },
   { "SH_ItemView_ChangeHighlightOnFocus", QStyle::SH_ItemView_ChangeHighlightOnFocus },
   { "SH_Widget_ShareActivation", QStyle::SH_Widget_ShareActivation },
   { "SH_Workspace_FillSpaceOnMaximize", QStyle::SH_Workspace_FillSpaceOnMaximize },
   { "SH_ComboBox_Popup", QStyle::SH_ComboBox_Popup },
   { "SH_TitleBar_NoBorder", QStyle::SH_TitleBar_NoBorder },
   { "SH_Slider_StopMouseOverSlider", QStyle::SH_Slider_StopMouseOverSlider },
   { "SH_ScrollBar_StopMouseOverSlider", QStyle::SH_ScrollBar_StopMouseOverSlider },
   { "SH_BlinkCursorWhenTextSelected", QStyle::SH_BlinkCursorWhenTextSelected },
   { "SH_RichText_FullWidthSelection", QStyle::SH_RichText_FullWidthSelection },
   { "SH_Menu_Scrollable", QStyle::SH_Menu_Scrollable },
   { "SH_GroupBox_TextLabelVerticalAlignment", QStyle::SH_GroupBox_TextLabelVerticalAlignment },
   { "SH_GroupBox_TextLabelColor", QStyle::SH_GroupBox_TextLabelColor },
   { "SH_Menu_SloppySubMenus", QStyle::SH_Menu_SloppySubMenus },
   { "SH_Table_GridLineColor", QStyle::SH_Table_GridLineColor },
   { "SH_LineEdit_PasswordCharacter", QStyle::SH_LineEdit_PasswordCharacter },
   { "SH_DialogButtons_DefaultButton", QStyle::SH_DialogButtons_DefaultButton },
   { "SH_ToolBox_SelectedPageTitleBold", QStyle::SH_ToolBox_SelectedPageTitleBold },
   { "SH_TabBar_PreferNoArrows", QStyle::SH_TabBar_PreferNoArrows },
   { "SH_ScrollBar_LeftClickAbsolutePosition", QStyle::SH_ScrollBar_LeftClickAbsolutePosition },
   { "SH_ListViewExpand_SelectMouseType", QStyle::SH_ListViewExpand_SelectMouseType },
   { "SH_UnderlineShortcut", QStyle::SH_UnderlineShortcut },
   { "SH_SpinBox_AnimateButton", QStyle::SH_SpinBox_AnimateButton },
   { "SH_SpinBox_KeyPressAutoRepeatRate", QStyle::SH_SpinBox_KeyPressAutoRepeatRate },
   { "SH_SpinBox_ClickAutoRepeatRate", QStyle::SH_SpinBox_ClickAutoRepeatRate },
   { "SH_Menu_FillScreenWithScroll", QStyle::SH_Menu_FillScreenWithScroll },
   { "SH_ToolTipLabel_Opacity", QStyle::SH_ToolTipLabel_Opacity },
   { "SH_DrawMenuBarSeparator", QStyle::SH_DrawMenuBarSeparator },
   { "SH_TitleBar_ModifyNotification", QStyle::SH_TitleBar_ModifyNotification },
   { "SH_Button_FocusPolicy", QStyle::SH_Button_FocusPolicy },
   { "SH_MessageBox_UseBorderForButtonSpacing", QStyle::SH_MessageBox_UseBorderForButtonSpacing },
   { "SH_TitleBar_AutoRaise", QStyle::SH_TitleBar_AutoRaise },
   { "SH_ToolButton_PopupDelay", QStyle::SH_ToolButton_PopupDelay },
   { "SH_FocusFrame_Mask", QStyle::SH_FocusFrame_Mask },
   { "SH_RubberBand_Mask", QStyle::SH_RubberBand_Mask },
   { "SH_WindowFrame_Mask", QStyle::SH_WindowFrame_Mask },
   { "SH_SpinControls_DisableOnBounds", QStyle::SH_SpinControls_DisableOnBounds },
   { "SH_Dial_BackgroundRole", QStyle::SH_Dial_BackgroundRole },
   { "SH_ComboBox_LayoutDirection", QStyle::SH_ComboBox_LayoutDirection },
   { "SH_ItemView_EllipsisLocation", QStyle::SH_ItemView_EllipsisLocation },
   { "SH_ItemView_ShowDecorationSelected", QStyle::SH_ItemView_ShowDecorationSelected },
   { "SH_ItemView_ActivateItemOnSingleClick", QStyle::SH_ItemView_ActivateItemOnSingleClick },
   { "SH_ScrollBar_ContextMenu", QStyle::SH_ScrollBar_ContextMenu },
   { "SH_ScrollBar_RollBetweenButtons", QStyle::SH_ScrollBar_RollBetweenButtons },
   { "SH_Slider_AbsoluteSetButtons", QStyle::SH_Slider_AbsoluteSetButtons },
   { "SH_Slider_PageSetButtons", QStyle::SH_Slider_PageSetButtons },
   { "SH_Menu_KeyboardSearch", QStyle::SH_Menu_KeyboardSearch },
   { "SH_TabBar_ElideMode", QStyle::SH_TabBar_ElideMode },
   { "SH_DialogButtonLayout", QStyle::SH_DialogButtonLayout },
   { "SH_ComboBox_PopupFrameStyle", QStyle::SH_ComboBox_PopupFrameStyle },
   { "SH_MessageBox_TextInteractionFlags", QStyle::SH_MessageBox_TextInteractionFlags },
   { "SH_DialogButtonBox_ButtonsHaveIcons", QStyle::SH_DialogButtonBox_ButtonsHaveIcons },
   { "SH_SpellCheckUnderlineStyle", QStyle::SH_SpellCheckUnderlineStyle },
   { "SH_MessageBox_CenterButtons", QStyle::SH_MessageBox_CenterButtons },
   { "SH_Menu_SelectionWrap", QStyle::SH_Menu_SelectionWrap },
   { "SH_ItemView_MovementWithoutUpdatingSelection", QStyle::SH_ItemView_MovementWithoutUpdatingSelection },
   { "SH_ToolTip_Mask", QStyle::SH_ToolTip_Mask },
   { "SH_FocusFrame_AboveWidget", QStyle::SH_FocusFrame_AboveWidget },
   { "SH_TextControl_FocusIndicatorTextCharFormat", QStyle::SH_TextControl_FocusIndicatorTextCharFormat },
   { "SH_WizardStyle", QStyle::SH_WizardStyle },
   { "SH_ItemView_ArrowKeysNavigateIntoChildren", QStyle::SH_ItemView_ArrowKeysNavigateIntoChildren },
   { "SH_Menu_Mask", QStyle::SH_Menu_Mask },
   { "SH_Menu_FlashTriggeredItem", QStyle::SH_Menu_FlashTriggeredItem },
   { "SH_Menu_FadeOutOnHide", QStyle::SH_Menu_FadeOutOnHide },
   { "SH_SpinBox_ClickAutoRepeatThreshold", QStyle::SH_SpinBox_ClickAutoRepeatThreshold },
   { "SH_ItemView_PaintAlternatingRowColorsForEmptyArea", QStyle::SH_ItemView_PaintAlternatingRowColorsForEmptyArea },
   { "SH_FormLayoutWrapPolicy", QStyle::SH_FormLayoutWrapPolicy },
   { "SH_TabWidget_DefaultTabPosition", QStyle::SH_TabWidget_DefaultTabPosition },
   { "SH_ToolBar_Movable", QStyle::SH_ToolBar_Movable },
   { "SH_FormLayoutFieldGrowthPolicy", QStyle::SH_FormLayoutFieldGrowthPolicy },
   { "SH_FormLayoutFormAlignment", QStyle::SH_FormLayoutFormAlignment },
   { "SH_FormLayoutLabelAlignment", QStyle::SH_FormLayoutLabelAlignment },
   { "SH_ItemView_DrawDelegateFrame", QStyle::SH_ItemView_DrawDelegateFrame },
   { "SH_TabBar_CloseButtonPosition", QStyle::SH_TabBar_CloseButtonPosition },
   { "SH_DockWidget_ButtonsHaveFrame", QStyle::SH_DockWidget_ButtonsHaveFrame },
   { "SH_ToolButtonStyle", QStyle::SH_ToolButtonStyle },
   { "SH_RequestSoftwareInputPanel", QStyle::SH_RequestSoftwareInputPanel },
   { "SH_ScrollBar_Transient", QStyle::SH_ScrollBar_Transient },
   { "SH_Menu_SupportsSections", QStyle::SH_Menu_SupportsSections },
   { "SH_ToolTip_WakeUpDelay", QStyle::SH_ToolTip_WakeUpDelay },
   { "SH_ToolTip_FallAsleepDelay", QStyle::SH_ToolTip_FallAsleepDelay },
   { "SH_Widget_Animate", QStyle::SH_Widget_Animate },
   { "SH_Splitter_OpaqueResize", QStyle::SH_Splitter_OpaqueResize },
   { "SH_ComboBox_UseNativePopup", QStyle::SH_ComboBox_UseNativePopup },
   { "SH_LineEdit_PasswordMaskDelay", QStyle::SH_LineEdit_PasswordMaskDelay },
   { "SH_TabBar_ChangeCurrentDelay", QStyle::SH_TabBar_ChangeCurrentDelay },
   { "SH_Menu_SubMenuUniDirection", QStyle::SH_Menu_SubMenuUniDirection },
   { "SH_Menu_SubMenuUniDirectionFailCount", QStyle::SH_Menu_SubMenuUniDirectionFailCount },
   { "SH_Menu_SubMenuSloppySelectOtherActions", QStyle::SH_Menu_SubMenuSloppySelectOtherActions },
   { "SH_Menu_SubMenuSloppyCloseTimeout", QStyle::SH_Menu_SubMenuSloppyCloseTimeout },
   { "SH_Menu_SubMenuResetWhenReenteringParent", QStyle::SH_Menu_SubMenuResetWhenReenteringParent },
   { "SH_Menu_SubMenuDontStartSloppyOnLeave", QStyle::SH_Menu_SubMenuDontStartSloppyOnLeave },
   { "SH_ItemView_ScrollMode", QStyle::SH_ItemView_ScrollMode },
   { "SH_CustomBase", QStyle::SH_CustomBase },

    /* QStyle::SubControl */
   { "SC_None", QStyle::SC_None },
   { "SC_ScrollBarAddLine", QStyle::SC_ScrollBarAddLine },
   { "SC_ScrollBarSubLine", QStyle::SC_ScrollBarSubLine },
   { "SC_ScrollBarAddPage", QStyle::SC_ScrollBarAddPage },
   { "SC_ScrollBarSubPage", QStyle::SC_ScrollBarSubPage },
   { "SC_ScrollBarFirst", QStyle::SC_ScrollBarFirst },
   { "SC_ScrollBarLast", QStyle::SC_ScrollBarLast },
   { "SC_ScrollBarSlider", QStyle::SC_ScrollBarSlider },
   { "SC_ScrollBarGroove", QStyle::SC_ScrollBarGroove },
   { "SC_SpinBoxUp", QStyle::SC_SpinBoxUp },
   { "SC_SpinBoxDown", QStyle::SC_SpinBoxDown },
   { "SC_SpinBoxFrame", QStyle::SC_SpinBoxFrame },
   { "SC_SpinBoxEditField", QStyle::SC_SpinBoxEditField },
   { "SC_ComboBoxFrame", QStyle::SC_ComboBoxFrame },
   { "SC_ComboBoxEditField", QStyle::SC_ComboBoxEditField },
   { "SC_ComboBoxArrow", QStyle::SC_ComboBoxArrow },
   { "SC_ComboBoxListBoxPopup", QStyle::SC_ComboBoxListBoxPopup },
   { "SC_SliderGroove", QStyle::SC_SliderGroove },
   { "SC_SliderHandle", QStyle::SC_SliderHandle },
   { "SC_SliderTickmarks", QStyle::SC_SliderTickmarks },
   { "SC_ToolButton", QStyle::SC_ToolButton },
   { "SC_ToolButtonMenu", QStyle::SC_ToolButtonMenu },
   { "SC_TitleBarSysMenu", QStyle::SC_TitleBarSysMenu },
   { "SC_TitleBarMinButton", QStyle::SC_TitleBarMinButton },
   { "SC_TitleBarMaxButton", QStyle::SC_TitleBarMaxButton },
   { "SC_TitleBarCloseButton", QStyle::SC_TitleBarCloseButton },
   { "SC_TitleBarNormalButton", QStyle::SC_TitleBarNormalButton },
   { "SC_TitleBarShadeButton", QStyle::SC_TitleBarShadeButton },
   { "SC_TitleBarUnshadeButton", QStyle::SC_TitleBarUnshadeButton },
   { "SC_TitleBarContextHelpButton", QStyle::SC_TitleBarContextHelpButton },
   { "SC_TitleBarLabel", QStyle::SC_TitleBarLabel },
   { "SC_DialGroove", QStyle::SC_DialGroove },
   { "SC_DialHandle", QStyle::SC_DialHandle },
   { "SC_DialTickmarks", QStyle::SC_DialTickmarks },
   { "SC_GroupBoxCheckBox", QStyle::SC_GroupBoxCheckBox },
   { "SC_GroupBoxLabel", QStyle::SC_GroupBoxLabel },
   { "SC_GroupBoxContents", QStyle::SC_GroupBoxContents },
   { "SC_GroupBoxFrame", QStyle::SC_GroupBoxFrame },
   { "SC_MdiMinButton", QStyle::SC_MdiMinButton },
   { "SC_MdiNormalButton", QStyle::SC_MdiNormalButton },
   { "SC_MdiCloseButton", QStyle::SC_MdiCloseButton },
   { "SC_CustomBase", QStyle::SC_CustomBase },
   { "SC_All", QStyle::SC_All },

    /* QStyle::SubElement */
   { "SE_PushButtonContents", QStyle::SE_PushButtonContents },
   { "SE_PushButtonFocusRect", QStyle::SE_PushButtonFocusRect },
   { "SE_CheckBoxIndicator", QStyle::SE_CheckBoxIndicator },
   { "SE_CheckBoxContents", QStyle::SE_CheckBoxContents },
   { "SE_CheckBoxFocusRect", QStyle::SE_CheckBoxFocusRect },
   { "SE_CheckBoxClickRect", QStyle::SE_CheckBoxClickRect },
   { "SE_RadioButtonIndicator", QStyle::SE_RadioButtonIndicator },
   { "SE_RadioButtonContents", QStyle::SE_RadioButtonContents },
   { "SE_RadioButtonFocusRect", QStyle::SE_RadioButtonFocusRect },
   { "SE_RadioButtonClickRect", QStyle::SE_RadioButtonClickRect },
   { "SE_ComboBoxFocusRect", QStyle::SE_ComboBoxFocusRect },
   { "SE_SliderFocusRect", QStyle::SE_SliderFocusRect },
   { "SE_ProgressBarGroove", QStyle::SE_ProgressBarGroove },
   { "SE_ProgressBarContents", QStyle::SE_ProgressBarContents },
   { "SE_ProgressBarLabel", QStyle::SE_ProgressBarLabel },
   { "SE_ToolBoxTabContents", QStyle::SE_ToolBoxTabContents },
   { "SE_HeaderLabel", QStyle::SE_HeaderLabel },
   { "SE_HeaderArrow", QStyle::SE_HeaderArrow },
   { "SE_TabWidgetTabBar", QStyle::SE_TabWidgetTabBar },
   { "SE_TabWidgetTabPane", QStyle::SE_TabWidgetTabPane },
   { "SE_TabWidgetTabContents", QStyle::SE_TabWidgetTabContents },
   { "SE_TabWidgetLeftCorner", QStyle::SE_TabWidgetLeftCorner },
   { "SE_TabWidgetRightCorner", QStyle::SE_TabWidgetRightCorner },
   { "SE_ViewItemCheckIndicator", QStyle::SE_ViewItemCheckIndicator },
   { "SE_ItemViewItemCheckIndicator", QStyle::SE_ItemViewItemCheckIndicator },
   { "SE_TabBarTearIndicator", QStyle::SE_TabBarTearIndicator },
   { "SE_TabBarTearIndicatorLeft", QStyle::SE_TabBarTearIndicatorLeft },
   { "SE_TreeViewDisclosureItem", QStyle::SE_TreeViewDisclosureItem },
   { "SE_LineEditContents", QStyle::SE_LineEditContents },
   { "SE_FrameContents", QStyle::SE_FrameContents },
   { "SE_DockWidgetCloseButton", QStyle::SE_DockWidgetCloseButton },
   { "SE_DockWidgetFloatButton", QStyle::SE_DockWidgetFloatButton },
   { "SE_DockWidgetTitleBarText", QStyle::SE_DockWidgetTitleBarText },
   { "SE_DockWidgetIcon", QStyle::SE_DockWidgetIcon },
   { "SE_CheckBoxLayoutItem", QStyle::SE_CheckBoxLayoutItem },
   { "SE_ComboBoxLayoutItem", QStyle::SE_ComboBoxLayoutItem },
   { "SE_DateTimeEditLayoutItem", QStyle::SE_DateTimeEditLayoutItem },
   { "SE_DialogButtonBoxLayoutItem", QStyle::SE_DialogButtonBoxLayoutItem },
   { "SE_LabelLayoutItem", QStyle::SE_LabelLayoutItem },
   { "SE_ProgressBarLayoutItem", QStyle::SE_ProgressBarLayoutItem },
   { "SE_PushButtonLayoutItem", QStyle::SE_PushButtonLayoutItem },
   { "SE_RadioButtonLayoutItem", QStyle::SE_RadioButtonLayoutItem },
   { "SE_SliderLayoutItem", QStyle::SE_SliderLayoutItem },
   { "SE_SpinBoxLayoutItem", QStyle::SE_SpinBoxLayoutItem },
   { "SE_ToolButtonLayoutItem", QStyle::SE_ToolButtonLayoutItem },
   { "SE_FrameLayoutItem", QStyle::SE_FrameLayoutItem },
   { "SE_GroupBoxLayoutItem", QStyle::SE_GroupBoxLayoutItem },
   { "SE_TabWidgetLayoutItem", QStyle::SE_TabWidgetLayoutItem },
   { "SE_ItemViewItemDecoration", QStyle::SE_ItemViewItemDecoration },
   { "SE_ItemViewItemText", QStyle::SE_ItemViewItemText },
   { "SE_ItemViewItemFocusRect", QStyle::SE_ItemViewItemFocusRect },
   { "SE_TabBarTabLeftButton", QStyle::SE_TabBarTabLeftButton },
   { "SE_TabBarTabRightButton", QStyle::SE_TabBarTabRightButton },
   { "SE_TabBarTabText", QStyle::SE_TabBarTabText },
   { "SE_ShapedFrameContents", QStyle::SE_ShapedFrameContents },
   { "SE_ToolBarHandle", QStyle::SE_ToolBarHandle },
   { "SE_TabBarScrollLeftButton", QStyle::SE_TabBarScrollLeftButton },
   { "SE_TabBarScrollRightButton", QStyle::SE_TabBarScrollRightButton },
   { "SE_TabBarTearIndicatorRight", QStyle::SE_TabBarTearIndicatorRight },
   { "SE_CustomBase", QStyle::SE_CustomBase },

};

QVector<PlastiQMetaObject*> PlastiQQStyle::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyle::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStyle::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QStyle", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyle::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStyleWrapper : public QStyle {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void drawItemPixmap(QPainter *painter, const QRect &rectangle, int alignment, const QPixmap &pixmap) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawItemPixmap(QPainter*,const QRect&,int,const QPixmap&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRect(rectangle) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int = alignment;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_voidp = new QPixmap(pixmap) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QPixmap");
            stack[4].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::drawItemPixmap(painter,rectangle,alignment,pixmap);
    }

    void PlastiQParentCall_drawItemPixmap(QPainter *painter, const QRect &rectangle, int alignment, const QPixmap &pixmap) const {
        return QStyle::drawItemPixmap(painter,rectangle,alignment,pixmap);
    }

    void drawItemText(QPainter *painter, const QRect &rectangle, int alignment, const QPalette &palette, bool enabled, const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void drawItemText(QPainter*,const QRect&,int,const QPalette&,bool,const QString&,QPalette::ColorRole=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[8];
            stack[1].s_voidp = reinterpret_cast<void*>(painter);
            stack[1].name = QByteArrayLiteral("QPainter");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = new QRect(rectangle) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int = alignment;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_voidp = new QPalette(palette) /* COPY OBJECT */;
            stack[4].name = QByteArrayLiteral("QPalette");
            stack[4].type = PlastiQ::QtObject;
            stack[5].s_bool = enabled;
            stack[5].name = QByteArrayLiteral("bool");
            stack[5].type = PlastiQ::Bool;
            stack[6].s_string = const_cast<QString&>(text);
            stack[6].name = QByteArrayLiteral("QString");
            stack[6].type = PlastiQ::String;
            stack[7].s_int64 = textRole;
            stack[7].name = QByteArrayLiteral("QPalette::ColorRole");
            stack[7].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::drawItemText(painter,rectangle,alignment,palette,enabled,text,textRole);
    }

    void PlastiQParentCall_drawItemText(QPainter *painter, const QRect &rectangle, int alignment, const QPalette &palette, bool enabled, const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const {
        return QStyle::drawItemText(painter,rectangle,alignment,palette,enabled,text,textRole);
    }

    QRect itemPixmapRect(const QRect &rectangle, int alignment, const QPixmap &pixmap) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRect itemPixmapRect(const QRect&,int,const QPixmap&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_voidp = new QRect(rectangle) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QRect");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_int = alignment;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_voidp = new QPixmap(pixmap) /* COPY OBJECT */;
            stack[3].name = QByteArrayLiteral("QPixmap");
            stack[3].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRect _r = QRect(*reinterpret_cast<QRect*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QStyle::itemPixmapRect(rectangle,alignment,pixmap);
    }

    QRect PlastiQParentCall_itemPixmapRect(const QRect &rectangle, int alignment, const QPixmap &pixmap) const {
        return QStyle::itemPixmapRect(rectangle,alignment,pixmap);
    }

    QRect itemTextRect(const QFontMetrics &metrics, const QRect &rectangle, int alignment, bool enabled, const QString &text) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QRect itemTextRect(const QFontMetrics&,const QRect&,int,bool,const QString&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[6];
            stack[1].s_voidp = new QFontMetrics(metrics) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QFontMetrics");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QRect(rectangle) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QRect");
            stack[2].type = PlastiQ::QtObject;
            stack[3].s_int = alignment;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            stack[4].s_bool = enabled;
            stack[4].name = QByteArrayLiteral("bool");
            stack[4].type = PlastiQ::Bool;
            stack[5].s_string = const_cast<QString&>(text);
            stack[5].name = QByteArrayLiteral("QString");
            stack[5].type = PlastiQ::String;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QRect _r = QRect(*reinterpret_cast<QRect*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QStyle::itemTextRect(metrics,rectangle,alignment,enabled,text);
    }

    QRect PlastiQParentCall_itemTextRect(const QFontMetrics &metrics, const QRect &rectangle, int alignment, bool enabled, const QString &text) const {
        return QStyle::itemTextRect(metrics,rectangle,alignment,enabled,text);
    }

    void polish(QWidget *widget) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void polish(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(widget);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::polish(widget);
    }

    void PlastiQParentCall_polish(QWidget *widget) {
        return QStyle::polish(widget);
    }

    void polish(QApplication *application) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void polish(QApplication*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(application);
            stack[1].name = QByteArrayLiteral("QApplication");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::polish(application);
    }

    void PlastiQParentCall_polish(QApplication *application) {
        return QStyle::polish(application);
    }

    void polish(QPalette &palette) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void polish(QPalette&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPalette(palette) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPalette");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::polish(palette);
    }

    void PlastiQParentCall_polish(QPalette &palette) {
        return QStyle::polish(palette);
    }

    QPalette standardPalette() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QPalette standardPalette()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QPalette _r = QPalette(*reinterpret_cast<QPalette*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QStyle::standardPalette();
    }

    QPalette PlastiQParentCall_standardPalette() const {
        return QStyle::standardPalette();
    }

    void unpolish(QWidget *widget) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void unpolish(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(widget);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::unpolish(widget);
    }

    void PlastiQParentCall_unpolish(QWidget *widget) {
        return QStyle::unpolish(widget);
    }

    void unpolish(QApplication *application) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void unpolish(QApplication*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(application);
            stack[1].name = QByteArrayLiteral("QApplication");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::unpolish(application);
    }

    void PlastiQParentCall_unpolish(QApplication *application) {
        return QStyle::unpolish(application);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QStyle::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QStyle::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QStyle::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QStyle::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QStyle::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QStyle::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QStyle::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QStyle::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QStyle::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QStyle::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStyle::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QStyle::timerEvent(event);
    }

};

void PlastiQQStyle::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStyleWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStyle *p = new PlastiQQStyle();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyle *p = new PlastiQQStyle();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 51) {
            id -= 51;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyle *o = sc ? Q_NULLPTR : reinterpret_cast<QStyle*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->combinedLayoutSpacing(QSizePolicy::ControlTypes(stack[1].s_int64),
                    QSizePolicy::ControlTypes(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->combinedLayoutSpacing(QSizePolicy::ControlTypes(stack[1].s_int64),
                    QSizePolicy::ControlTypes(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64),
                    reinterpret_cast<QStyleOption*>(stack[4].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->combinedLayoutSpacing(QSizePolicy::ControlTypes(stack[1].s_int64),
                    QSizePolicy::ControlTypes(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64),
                    reinterpret_cast<QStyleOption*>(stack[4].s_voidp),
                    reinterpret_cast<QWidget*>(stack[5].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->drawComplexControl(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->drawComplexControl(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->drawControl(QStyle::ControlElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->drawControl(QStyle::ControlElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_drawItemPixmap(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[4].s_voidp)));
                else o->drawItemPixmap(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[4].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_drawItemText(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[4].s_voidp)),
                    stack[5].s_bool,
                    stack[6].s_string);
                else o->drawItemText(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[4].s_voidp)),
                    stack[5].s_bool,
                    stack[6].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_drawItemText(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[4].s_voidp)),
                    stack[5].s_bool,
                    stack[6].s_string,
                    QPalette::ColorRole(stack[7].s_int64));
                else o->drawItemText(reinterpret_cast<QPainter*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    (*reinterpret_cast< QPalette(*) >(stack[4].s_voidp)),
                    stack[5].s_bool,
                    stack[6].s_string,
                    QPalette::ColorRole(stack[7].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->drawPrimitive(QStyle::PrimitiveElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->drawPrimitive(QStyle::PrimitiveElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<QPainter*>(stack[3].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->generatedIconPixmap(QIcon::Mode(stack[1].s_int64),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp)),
                    reinterpret_cast<const QStyleOption*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = o->hitTestComplexControl(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp))); // HACK for SubControl 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { qint64 _r = o->hitTestComplexControl(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp)); // HACK for SubControl 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { /* COPY OBJECT */
            QRect *_r;
                if (isWrapper) _r = new QRect(((PlastiQQStyleWrapper*)o)->PlastiQParentCall_itemPixmapRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[3].s_voidp))));
                else _r = new QRect(o->itemPixmapRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    (*reinterpret_cast< QPixmap(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QRect *_r;
                if (isWrapper) _r = new QRect(((PlastiQQStyleWrapper*)o)->PlastiQParentCall_itemTextRect((*reinterpret_cast< QFontMetrics(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    stack[4].s_bool,
                    stack[5].s_string));
                else _r = new QRect(o->itemTextRect((*reinterpret_cast< QFontMetrics(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    stack[4].s_bool,
                    stack[5].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { int _r = o->layoutSpacing(QSizePolicy::ControlType(stack[1].s_int64),
                    QSizePolicy::ControlType(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->layoutSpacing(QSizePolicy::ControlType(stack[1].s_int64),
                    QSizePolicy::ControlType(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[4].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->layoutSpacing(QSizePolicy::ControlType(stack[1].s_int64),
                    QSizePolicy::ControlType(stack[2].s_int64),
                    Qt::Orientation(stack[3].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[4].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[5].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->pixelMetric(QStyle::PixelMetric(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { int _r = o->pixelMetric(QStyle::PixelMetric(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { int _r = o->pixelMetric(QStyle::PixelMetric(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_polish(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                else o->polish(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_polish(reinterpret_cast<QApplication*>(stack[1].s_voidp));
                else o->polish(reinterpret_cast<QApplication*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_polish((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                else o->polish((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: { QStyle* _r = const_cast<QStyle*>(o->proxy());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 27: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeFromContents(QStyle::ContentsType(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 28: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeFromContents(QStyle::ContentsType(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[3].s_voidp)),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->standardIcon(QStyle::StandardPixmap(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->standardIcon(QStyle::StandardPixmap(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->standardIcon(QStyle::StandardPixmap(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QPalette *_r;
                if (isWrapper) _r = new QPalette(((PlastiQQStyleWrapper*)o)->PlastiQParentCall_standardPalette());
                else _r = new QPalette(o->standardPalette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { int _r = o->styleHint(QStyle::StyleHint(stack[1].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { int _r = o->styleHint(QStyle::StyleHint(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 35: { int _r = o->styleHint(QStyle::StyleHint(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: { int _r = o->styleHint(QStyle::StyleHint(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[3].s_voidp),
                    reinterpret_cast<QStyleHintReturn*>(stack[4].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 37: { /* COPY OBJECT */
            QRect *_r = new QRect(o->subControlRect(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    QStyle::SubControl(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QRect *_r = new QRect(o->subControlRect(QStyle::ComplexControl(stack[1].s_int64),
                    reinterpret_cast<const QStyleOptionComplex*>(stack[2].s_voidp),
                    QStyle::SubControl(stack[3].s_int64),
                    reinterpret_cast<const QWidget*>(stack[4].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QRect *_r = new QRect(o->subElementRect(QStyle::SubElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { /* COPY OBJECT */
            QRect *_r = new QRect(o->subElementRect(QStyle::SubElement(stack[1].s_int64),
                    reinterpret_cast<const QStyleOption*>(stack[2].s_voidp),
                    reinterpret_cast<const QWidget*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_unpolish(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                else o->unpolish(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: if (isWrapper) ((PlastiQQStyleWrapper*)o)->PlastiQParentCall_unpolish(reinterpret_cast<QApplication*>(stack[1].s_voidp));
                else o->unpolish(reinterpret_cast<QApplication*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 43: { /* COPY OBJECT */
            QRect *_r = sc ? new QRect(QStyle::alignedRect(Qt::LayoutDirection(stack[1].s_int64),
                    Qt::Alignment(stack[2].s_int64),
                    (*reinterpret_cast< QSize(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp)))) : new QRect(o->alignedRect(Qt::LayoutDirection(stack[1].s_int64),
                    Qt::Alignment(stack[2].s_int64),
                    (*reinterpret_cast< QSize(*) >(stack[3].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[4].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { int _r = sc ? QStyle::sliderPositionFromValue(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int) : o->sliderPositionFromValue(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 45: { int _r = sc ? QStyle::sliderPositionFromValue(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_bool) : o->sliderPositionFromValue(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_bool);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 46: { int _r = sc ? QStyle::sliderValueFromPosition(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int) : o->sliderValueFromPosition(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 47: { int _r = sc ? QStyle::sliderValueFromPosition(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_bool) : o->sliderValueFromPosition(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_bool);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 48: { qint64 _r = sc ? QStyle::visualAlignment(Qt::LayoutDirection(stack[1].s_int64),
                    Qt::Alignment(stack[2].s_int64)) : o->visualAlignment(Qt::LayoutDirection(stack[1].s_int64),
                    Qt::Alignment(stack[2].s_int64)); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: { /* COPY OBJECT */
            QPoint *_r = sc ? new QPoint(QStyle::visualPos(Qt::LayoutDirection(stack[1].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp)))) : new QPoint(o->visualPos(Qt::LayoutDirection(stack[1].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 50: { /* COPY OBJECT */
            QRect *_r = sc ? new QRect(QStyle::visualRect(Qt::LayoutDirection(stack[1].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)))) : new QRect(o->visualRect(Qt::LayoutDirection(stack[1].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStyle *o = reinterpret_cast<QStyle*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStyle *o = reinterpret_cast<QStyle*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStyle *o = reinterpret_cast<QStyle*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStyle *o = reinterpret_cast<QStyle*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyle::~PlastiQQStyle() {
    QStyle* o = reinterpret_cast<QStyle*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
