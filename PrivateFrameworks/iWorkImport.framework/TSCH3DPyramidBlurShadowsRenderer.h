/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {
    TSCH3DPyramidBlurFBOResource * mFinalShadowResource;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mInitialSize;
    NSArray * mPyramidResources;
    int  mRequestedSize;
    float  mTargetRadiusFactor;
}

- (id).cxx_construct;
- (float)blurSlackForQuality:(float)arg1;
- (void)dealloc;
- (id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2;
- (void)invalidate;
- (id)p_allResources;
- (void)p_setupResourcesForSize:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(id /* block */)arg3;
- (id)shadowsFBOForContext:(id)arg1;
- (void)unprotectShadowInSession:(id)arg1;

@end
