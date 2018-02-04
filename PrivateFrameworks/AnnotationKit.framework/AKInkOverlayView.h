/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSizeInPKDrawingSpace;
    PKCanvasView * _canvasView;
    <AKInkOverlayViewDelegate> * _delegate;
    id  _drawingUndoTarget;
    PKInk * _ink;
    AKPageController * _pageController;
    NSHashTable * _reportedStrokes;
}

@property struct CGSize { double x1; double x2; } canvasSizeInPKDrawingSpace;
@property (retain) PKCanvasView *canvasView;
@property (readonly, copy) NSString *debugDescription;
@property <AKInkOverlayViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property id drawingUndoTarget;
@property (readonly) unsigned long long hash;
@property (copy) PKInk *ink;
@property AKPageController *pageController;
@property (nonatomic, readonly) UIGestureRecognizer *pinchGestureRecognizer;
@property (readonly) Class superclass;

+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
+ (id)newDrawingUndoTargetWithPageController:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateFixedPixelSize:(struct CGSize { double x1; double x2; }*)arg1 drawingScale:(double*)arg2;
- (void)_updateCanvasViewInk;
- (void)awakeFromNib;
- (struct CGSize { double x1; double x2; })canvasSizeInPKDrawingSpace;
- (id)canvasView;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (bool)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)canvasViewDidBeginNewStroke:(id)arg1;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)commonInit;
- (void)commonPostInit;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)drawingGestureRecognizer;
- (id)drawingUndoTarget;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
- (id)ink;
- (void)layoutSubviews;
- (id)pageController;
- (id)pinchGestureRecognizer;
- (void)removeStrokesFromDrawing:(id)arg1;
- (void)setCanvasSizeInPKDrawingSpace:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingUndoTarget:(id)arg1;
- (void)setInk:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setupInkView;
- (void)teardown;
- (void)willMoveToSuperview:(id)arg1;

@end
