/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKLegacyDoodleController : NSObject <AKShapeDetectionControllerDelegate, AKSmoothPathViewDelegate> {
    AKAnnotation * _coalescedAnnotation;
    bool  _coalescesDoodles;
    AKController * _controller;
    bool  _ignoreAnnotationAndSelectionKVO;
    AKSmoothPathView * _intelligentSketchOverlayView;
    bool  _isShowingOverlay;
    bool  _isWaitingToCoalesceStrokes;
    id /* block */  _performRecognitionBlock;
    bool  _preferDoodle;
    bool  _pressureSensitiveDoodleMode;
    NSMutableArray * _recentDoodlePaths;
    NSMutableArray * _recentDoodlesAnnotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _recentDrawingBoundsInInputView;
    bool  _selectNewlyCreatedAnnotations;
    AKShapeDetectionController * _shapeDetectionController;
    bool  _shapeDetectionEnabled;
}

@property (retain) AKAnnotation *coalescedAnnotation;
@property (nonatomic) bool coalescesDoodles;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreAnnotationAndSelectionKVO;
@property (nonatomic, retain) AKSmoothPathView *intelligentSketchOverlayView;
@property bool isShowingOverlay;
@property bool isWaitingToCoalesceStrokes;
@property (nonatomic, copy) id /* block */ performRecognitionBlock;
@property (nonatomic) bool preferDoodle;
@property bool pressureSensitiveDoodleMode;
@property (retain) NSMutableArray *recentDoodlePaths;
@property (retain) NSMutableArray *recentDoodlesAnnotations;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } recentDrawingBoundsInInputView;
@property (nonatomic) bool selectNewlyCreatedAnnotations;
@property (nonatomic, retain) AKShapeDetectionController *shapeDetectionController;
@property (getter=shapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAnnotationImmediatelyFor:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2 drawingBoundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 pathIsPrestroked:(bool)arg4 isSingelDot:(bool)arg5 fromInputView:(id)arg6;
- (void)_beginOrExtendCoalescingTimer;
- (void)_clearCoalescingState;
- (void)_coalesceDrawingsCancelled;
- (void)_coalesceRecentDrawings;
- (void)_executeDeferredRecognition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForOurOverlayInHostingView:(id)arg1;
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2 isPrestroked:(bool)arg3;
- (void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2;
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath { }*)arg2 boundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 isPrestroked:(bool)arg5;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (id)coalescedAnnotation;
- (bool)coalescesDoodles;
- (id)controller;
- (id)createDoodleAnnotationWithPath:(struct CGPath { }*)arg1 drawingBoundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawingCenter:(struct CGPoint { double x1; double x2; })arg3 pathIsPrestroked:(bool)arg4 shouldGoToPageController:(id*)arg5;
- (void)dealloc;
- (void)dismissCandidatePicker;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (bool)ignoreAnnotationAndSelectionKVO;
- (id)initWithController:(id)arg1;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2;
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath { }*)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (id)intelligentSketchOverlayView;
- (bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (bool)isShowingCandidatePicker;
- (bool)isShowingOverlay;
- (bool)isWaitingToCoalesceStrokes;
- (id)overlayView:(id)arg1;
- (id /* block */)performRecognitionBlock;
- (bool)preferDoodle;
- (bool)pressureSensitiveDoodleMode;
- (id)recentDoodlePaths;
- (id)recentDoodlesAnnotations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })recentDrawingBoundsInInputView;
- (void)removeOverlay;
- (bool)selectNewlyCreatedAnnotations;
- (void)setCoalescedAnnotation:(id)arg1;
- (void)setCoalescesDoodles:(bool)arg1;
- (void)setController:(id)arg1;
- (void)setIgnoreAnnotationAndSelectionKVO:(bool)arg1;
- (void)setIntelligentSketchOverlayView:(id)arg1;
- (void)setIsShowingOverlay:(bool)arg1;
- (void)setIsWaitingToCoalesceStrokes:(bool)arg1;
- (void)setPerformRecognitionBlock:(id /* block */)arg1;
- (void)setPreferDoodle:(bool)arg1;
- (void)setPressureSensitiveDoodleMode:(bool)arg1;
- (void)setRecentDoodlePaths:(id)arg1;
- (void)setRecentDoodlesAnnotations:(id)arg1;
- (void)setRecentDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectNewlyCreatedAnnotations:(bool)arg1;
- (void)setShapeDetectionController:(id)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (id)shapeDetectionController;
- (bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(bool)arg2;
- (bool)shapeDetectionEnabled;
- (void)showOverlay;
- (void)toolbarNotification:(id)arg1;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)updateStrokeAttributes;

@end
