/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBarElementsRenderer : TSCHRenderer {
    double  mHitFudgeOffset;
    unsigned long long  mHitSeriesIndex;
    unsigned long long  mHitValueIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLastDrawRect;
    bool  mResizeIsOutsideBody;
    bool  mTouchInBody;
    bool  mTouchInResize;
    bool  mVertical;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barElementFrameForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (int)chunkPlane;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (void)p_drawBars:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_drawLabels:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct { double x1; double x2; double x3; double x4; })p_valueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingElementFrameForBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 groupIndex:(unsigned long long)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg6 returningFillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7 strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg8;
- (bool)supportsSeparateLabelsRenderPass;

@end
