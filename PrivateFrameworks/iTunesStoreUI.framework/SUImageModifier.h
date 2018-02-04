/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUImageModifier : NSObject

@property (nonatomic, readonly) bool scalesImage;

- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })finalSizeForSize:(struct CGSize { double x1; double x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (id)newImageForImage:(id)arg1;
- (bool)scalesImage;

@end
