/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKInkSignatureView : UIView <PKCanvasViewDelegate> {
    PKCanvasView * _canvasView;
    bool  _hasStrokes;
    PKInk * _ink;
    PKDrawing * _latestDrawing;
    UIColor * _strokeColor;
}

@property (retain) PKCanvasView *canvasView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasStrokes;
@property (readonly) unsigned long long hash;
@property (copy) PKInk *ink;
@property (retain) PKDrawing *latestDrawing;
@property (nonatomic, retain) UIColor *strokeColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateInk;
- (id)canvasView;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)clear;
- (struct CGPath { }*)copyPotracedPathAndReturnDrawing:(id*)arg1;
- (bool)hasStrokes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)ink;
- (id)latestDrawing;
- (void)layoutSubviews;
- (void)setCanvasView:(id)arg1;
- (void)setHasStrokes:(bool)arg1;
- (void)setInk:(id)arg1;
- (void)setLatestDrawing:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)teardown;

@end
