/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPhotoEffectsModel : NSObject {
    NSMutableDictionary * _adjustments;
    NSDictionary * _analysis;
    int  _effectGroupIndex;
    float  _effectValue;
    bool  _hasAdjustments;
    BLPEModel * _model;
}

- (void).cxx_destruct;
- (bool)canRenderCI;
- (id)ciImageWithPhotoEffectsForCIImage:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPadding:(double)arg3;
- (id)ciImageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPadding:(double)arg3;
- (bool)hasEdgeEffects;
- (bool)hasFastDownstreamEffects;
- (bool)hasInkEffects;
- (bool)hasPhotoEffects;
- (id)imageWithPhotoEffectsForImage:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPadding:(double)arg3;
- (id)imageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPadding:(double)arg3;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ignoreEdgeEffects:(bool)arg3;
- (bool)needsPadding;
- (double)paddingForSize:(struct CGSize { double x1; double x2; })arg1;

@end
