/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIImage : SFImage {
    SFImage * _sfImage;
    UIImage * _uiImage;
}

@property (retain) SFImage *sfImage;
@property (retain) UIImage *uiImage;

+ (id)cachedImageFromSFImage:(id)arg1;
+ (id)imageFromData:(id)arg1;
+ (id)imageWithSFImage:(id)arg1;
+ (id)templatifiedImage:(id)arg1;

- (void).cxx_destruct;
- (double)cornerRadius;
- (id)initWithImage:(id)arg1;
- (id)initWithSFImage:(id)arg1;
- (bool)isTemplate;
- (id)loadImage;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)setSfImage:(id)arg1;
- (void)setUiImage:(id)arg1;
- (id)sfImage;
- (bool)shouldCropToCircle;
- (struct CGSize { double x1; double x2; })size;
- (id)uiImage;

@end
