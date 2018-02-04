/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUFrameAdjustmentImageModifier : SUImageModifier {
    bool  _shouldSizeDownToFit;
    unsigned long long  _sizingMask;
}

@property (nonatomic) bool shouldSizeDownToFit;
@property (nonatomic) unsigned long long sizingMask;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)scalesImage;
- (void)setShouldSizeDownToFit:(bool)arg1;
- (void)setSizingMask:(unsigned long long)arg1;
- (bool)shouldSizeDownToFit;
- (unsigned long long)sizingMask;

@end
