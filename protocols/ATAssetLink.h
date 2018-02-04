/* made by EzioChiu.
 */

@protocol ATAssetLink <NSObject>

@required

- (bool)canEnqueueAsset:(ATAsset *)arg1;
- (void)cancelAssets:(NSArray *)arg1;
- (void)close;
- (<ATAssetLinkDelegate> *)delegate;
- (NSArray *)enqueueAssets:(NSArray *)arg1 force:(bool)arg2;
- (bool)isOpen;
- (bool)linkIsReady;
- (unsigned long long)maximumBatchSize;
- (bool)open;
- (void)prioritizeAsset:(ATAsset *)arg1;
- (unsigned long long)priority;
- (void)setDelegate:(id <ATAssetLinkDelegate>)arg1;

@end
