/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineRenderer : TSCHRenderer

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (bool)canRenderSelectionPath:(id)arg1;
- (int)chunkPlane;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_renderLabelsIntoContext:(struct CGContext { }*)arg1 forRefLineLabelsLayout:(id)arg2;
- (void)p_renderLabelsIntoContext:(struct CGContext { }*)arg1 forRefLineLabelsLayout:(id)arg2 forSelection:(id)arg3;
- (void)p_renderLinesIntoContext:(struct CGContext { }*)arg1 linesToRender:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;

@end
