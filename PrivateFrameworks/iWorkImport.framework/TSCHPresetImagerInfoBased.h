/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerInfoBased : TSCHPresetImager {
    TSCHChartType * mChartType;
}

+ (id)presetImagerForChartType:(id)arg1;

- (void)dealloc;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(bool*)arg7;
- (id)initWithChartType:(id)arg1;
- (double)p_canvasScale;
- (id)p_chartType;
- (void)p_debugGenerateLayoutCacheWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)p_imageRectAdjustments;
- (id)p_rectAdjustmentForChartType:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_updateSwatchFrameForInwardLayoutIfNeeded:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outImageSize:(struct CGSize { double x1; double x2; }*)arg2 outImageScale:(double*)arg3 outSwatchOffset:(struct CGPoint { double x1; double x2; }*)arg4 outCanvasScale:(double*)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_updateSwatchFrameForRectAdjustmentIfNeeded:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectAdjustment:(id)arg2 outSwatchOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })swatchImageEdgeInsetsForSize:(struct CGSize { double x1; double x2; })arg1;

@end
