/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasBorderedImageView : UIImageView {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _deferredTransform;
    bool  _shouldDeferSettingTransform;
    bool  _shouldSkipImageWhenReplicatingState;
    bool  _shouldUseTransformWhenReplicatingState;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } deferredTransform;
@property (nonatomic) bool shouldDeferSettingTransform;
@property (nonatomic) bool shouldSkipImageWhenReplicatingState;
@property (nonatomic) bool shouldUseTransformWhenReplicatingState;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)borderColor;
- (double)borderWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDeferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setShouldDeferSettingTransform:(bool)arg1;
- (void)setShouldSkipImageWhenReplicatingState:(bool)arg1;
- (void)setShouldUseTransformWhenReplicatingState:(bool)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)shouldDeferSettingTransform;
- (bool)shouldSkipImageWhenReplicatingState;
- (bool)shouldUseTransformWhenReplicatingState;

@end
