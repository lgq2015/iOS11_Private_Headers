/* made by EzioChiu.
 */

@protocol PUPhotoEditResourceLoaderDelegate <NSObject>

@required

- (void)photoEditResourceLoadRequest:(PUPhotoEditResourceLoadRequest *)arg1 didCompleteWithResult:(PUPhotoEditResourceLoadResult *)arg2;

@optional

- (void)photoEditResourceLoadRequest:(PUPhotoEditResourceLoadRequest *)arg1 downloadDidFailWithError:(NSError *)arg2;
- (void)photoEditResourceLoadRequest:(PUPhotoEditResourceLoadRequest *)arg1 downloadProgress:(double)arg2;
- (void)photoEditResourceLoadRequest:(PUPhotoEditResourceLoadRequest *)arg1 mediaLoadDidFailWithError:(NSError *)arg2;
- (void)photoEditResourceLoadRequestDidCompleteDownload:(PUPhotoEditResourceLoadRequest *)arg1;
- (void)photoEditResourceLoadRequestWillBeginDownload:(PUPhotoEditResourceLoadRequest *)arg1;

@end
