/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentRepElementBoundsInNaturalSpace;
- (id)p_barElementsRenderer;
- (void)p_calculateInterceptForElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 elementLayer:(id)arg2 animationInfo:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_clampRenderingElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 barElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)p_currentBarSeriesModelCache;
- (unsigned long long)p_currentGroupIndex;
- (unsigned long long)p_currentSeriesIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_renderingElementFrameForBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)p_repElementIsAboveInterceptForSeriesIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2;
- (void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1;

@end
