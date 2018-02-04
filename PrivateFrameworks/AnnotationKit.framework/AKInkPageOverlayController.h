/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate> {
    id /* block */  _delayedShapeDetectionBlock;
    bool  _ignoreAnnotationAndSelectionKVO;
    AKInkOverlayView * _inkOverlayView;
    double  _lastStrokeEndTime;
    bool  _onlyPencilDraws;
    AKPageController * _pageController;
    AKShapeDetectionController * _shapeDetectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ delayedShapeDetectionBlock;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreAnnotationAndSelectionKVO;
@property (retain) AKInkOverlayView *inkOverlayView;
@property double lastStrokeEndTime;
@property bool onlyPencilDraws;
@property AKPageController *pageController;
@property (retain) AKShapeDetectionController *shapeDetectionController;
@property (readonly) Class superclass;

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;

- (void).cxx_destruct;
- (void)_controllerWillSave:(id)arg1;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;
- (void)_enclosingScrollViewDidScroll:(id)arg1;
- (void)_fullSetup;
- (void)_inkDidChangeNotification:(id)arg1;
- (void)_partialTeardown;
- (void)_performDelayedShapeDetection;
- (void)_setupGestureDependencies;
- (void)_tearDownGestureDependencies;
- (void)_toolStatusUpdated:(id)arg1;
- (void)_updateAllowedTouchTypesAllEnabled:(bool)arg1 pencilEnabled:(bool)arg2;
- (void)_updateGestureDependencyPriority;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (id /* block */)delayedShapeDetectionBlock;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (bool)ignoreAnnotationAndSelectionKVO;
- (id)initWithPageController:(id)arg1;
- (id)inkOverlayView;
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;
- (bool)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;
- (void)inputViewDidBeginStroke:(id)arg1;
- (bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (bool)isWaitingToCoalesceStrokes;
- (double)lastStrokeEndTime;
- (bool)onlyPencilDraws;
- (id)overlayView:(id)arg1;
- (id)pageController;
- (void)setDelayedShapeDetectionBlock:(id /* block */)arg1;
- (void)setIgnoreAnnotationAndSelectionKVO:(bool)arg1;
- (void)setInkOverlayView:(id)arg1;
- (void)setLastStrokeEndTime:(double)arg1;
- (void)setOnlyPencilDraws:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)setShapeDetectionController:(id)arg1;
- (void)setup;
- (id)shapeDetectionController;
- (bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(bool)arg2;
- (void)teardown;

@end
