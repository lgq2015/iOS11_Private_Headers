/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPageController : NSObject <AKHighlightColorEditorControllerDelegate, AKNoteEditorControllerDelegate> {
    AKController * _controller;
    AKGeometryHelper * _geometryHelper;
    AKHighlightColorEditorController * _highlightColorEditorController;
    id  _inkOverlayDrawingUndoTarget;
    AKInkPageOverlayController * _inkPageOverlayController;
    AKLayerPresentationManager * _layerPresentationManager;
    NSMutableDictionary * _noteEditors;
    UIView * _overlayView;
    unsigned long long  _pageIndex;
    AKPageModelController * _pageModelController;
    bool  _shouldPixelate;
    bool  _superviewDependentThingsWereSetUp;
}

@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <AKControllerDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AKGeometryHelper *geometryHelper;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AKHighlightColorEditorController *highlightColorEditorController;
@property (nonatomic, retain) id inkOverlayDrawingUndoTarget;
@property (nonatomic, retain) AKInkPageOverlayController *inkPageOverlayController;
@property (nonatomic, retain) AKLayerPresentationManager *layerPresentationManager;
@property (retain) NSMutableDictionary *noteEditors;
@property (nonatomic, retain) UIView *overlayView;
@property unsigned long long pageIndex;
@property (retain) AKPageModelController *pageModelController;
@property bool shouldPixelate;
@property (readonly) Class superclass;
@property bool superviewDependentThingsWereSetUp;

+ (id)pageControllerWithController:(id)arg1 andPageModelController:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithController:(id)arg1 andPageModelController:(id)arg2;
- (id)_popoverPresentingViewController;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(bool)arg2;
- (id)annotationsBeneathLoupe:(id)arg1;
- (id)controller;
- (struct CGPoint { double x1; double x2; })convertPointFromModelToOverlay:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromOverlayToModel:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)currentModelToScreenExifOrientation;
- (double)currentModelToScreenScaleFactor;
- (id)delegate;
- (unsigned long long)edgeForNoteEditor:(id)arg1;
- (void)editorController:(id)arg1 deleteAnnotation:(id)arg2;
- (void)editorController:(id)arg1 editNote:(id)arg2;
- (bool)editorController:(id)arg1 isRightArrowEnabledForAnnotation:(id)arg2;
- (void)editorController:(id)arg1 setTheme:(id)arg2 forAnnotation:(id)arg3;
- (void)editorController:(id)arg1 showEditMenuForAnnotation:(id)arg2;
- (id)geometryHelper;
- (bool)handleEditAnnotation:(id)arg1;
- (id)highlightColorEditorController;
- (id)initForTesting;
- (id)inkOverlayDrawingUndoTarget;
- (id)inkPageOverlayController;
- (id)layerPresentationManager;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRect;
- (double)modelBaseScaleFactor;
- (id)newContentSnapshotPDFDataAtScale:(double)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forLoupeAnnotation:(id)arg3;
- (void)noteEditorDidBeginEditing:(id)arg1;
- (void)noteEditorDidFinishEditing:(id)arg1;
- (void)noteEditorWillDismissFromFullScreen:(id)arg1;
- (void)noteEditorWillPresentFullScreen:(id)arg1;
- (id)noteEditors;
- (void)openPopoverForHighlightAnnotation:(id)arg1;
- (void)openPopupAnnotation:(id)arg1;
- (id)overlayView;
- (void)overlayWasAddedToSuperview;
- (unsigned long long)pageIndex;
- (id)pageModelController;
- (id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
- (void)releaseRelinquishables;
- (bool)relinquishablesAreLoaded;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)setController:(id)arg1;
- (void)setGeometryHelper:(id)arg1;
- (void)setInkOverlayDrawingUndoTarget:(id)arg1;
- (void)setInkPageOverlayController:(id)arg1;
- (void)setLayerPresentationManager:(id)arg1;
- (void)setNoteEditors:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPageModelController:(id)arg1;
- (void)setShouldPixelate:(bool)arg1;
- (void)setSuperviewDependentThingsWereSetUp:(bool)arg1;
- (void)setupRelinquishables;
- (bool)shouldPixelate;
- (id)stickyContainerForNoteEditor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stickyViewFrameForNoteEditor:(id)arg1;
- (bool)superviewDependentThingsWereSetUp;
- (void)teardown;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(bool)arg2 forceUpdate:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectOfOverlay;

@end
