/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer {
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    UIColor * _tintColor;
    bool  _usesSaturationFilter;
}

@property (nonatomic) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic) bool usesSaturationFilter;

- (void).cxx_destruct;
- (id)_saturationBackgroundImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageForImage:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSize;
- (void)setOutputSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (void)setUsesSaturationFilter:(bool)arg1;
- (id)tintColor;
- (bool)usesSaturationFilter;

@end
