/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;

+ (struct CGSize { double x1; double x2; })_imageSize;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (id)imageProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setImageProvider:(id)arg1;

@end
