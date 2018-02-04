/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupBaselineVisualization : CHStrokeGroupBasedVisualization

- (void)_getOrientedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 length:(double*)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelBoundsForAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPath { }*)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(struct CGPoint { double x1; double x2; }*)arg2 strokeProvider:(id)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_orientationTransformForStrokeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRectForStrokeGroup:(id)arg1;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)layeringPriority;

@end
