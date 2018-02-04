/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization

- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(struct CGContext { }*)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (void)_drawGroupBrackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForInputDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 referenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRectForStrokeGroup:(id)arg1;
- (void)drawInputDrawing:(id)arg1 inContext:(struct CGContext { }*)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)layeringPriority;
- (bool)shouldDrawStrokeGroup:(id)arg1;
- (bool)wantsInputDrawings;

@end
