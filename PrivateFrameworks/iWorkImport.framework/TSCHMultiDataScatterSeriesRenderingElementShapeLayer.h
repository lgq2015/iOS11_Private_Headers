/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>

- (bool)aboveIntercept;
- (id)chartRep;
- (id)currentValueLayer;
- (void)p_addAnimationsForUpdatingImage:(struct CGImage { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toAnimationInfo:(id)arg3;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;

@end
