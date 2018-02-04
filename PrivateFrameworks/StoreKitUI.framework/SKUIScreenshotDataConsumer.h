/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer {
    bool  _forcesPortrait;
}

@property (nonatomic) bool forcesPortrait;

+ (id)consumer;
+ (id)consumerWithScreenshotSize:(struct CGSize { double x1; double x2; })arg1;

- (bool)forcesPortrait;
- (id)imageForColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)imageForImage:(id)arg1;
- (void)setForcesPortrait:(bool)arg1;

@end
