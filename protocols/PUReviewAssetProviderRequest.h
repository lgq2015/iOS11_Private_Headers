/* made by EzioChiu.
 */

@protocol PUReviewAssetProviderRequest <NSProgressReporting>

@required

- (void)cancelReviewAssetRequest;
- (void)requestReviewAssetWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, PUReviewAsset *, void*
- (<PUDisplayAsset> *)sourceAsset;

@end
