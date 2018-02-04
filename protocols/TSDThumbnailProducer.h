/* made by EzioChiu.
 */

@protocol TSDThumbnailProducer <NSObject>

@required

- (NSArray *)rootInfosForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (struct CGSize { double x1; double x2; })thumbnailSizeForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRectForIdentifier:(id <TSDThumbnailIdentifier>)arg1;

@optional

- (void)configureImager:(TSDImager *)arg1 forIdentifier:(id <TSDThumbnailIdentifier>)arg2;
- (bool)distortedToMatch;
- (bool)reuseThumbnailerUntilIdleForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (bool)shouldReuseBitmapContext;
- (bool)suppressOverlayLayerForIdentifier:(id <TSDThumbnailIdentifier>)arg1;

@end
