/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailRenderingController : NSObject {
    NSMutableDictionary * _cachedThumbnails;
    NSMapTable * _contextObjectToContextMap;
    NSMapTable * _contextObjectToOperationMap;
    UIImage * _genericThumbnailImage;
    NSOperationQueue * _sharedOperationQueue;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_cancelOperationForContext:(id)arg1;
- (id)_initInternal;
- (bool)_isOperationScheduledForContext:(id)arg1;
- (void)_scheduleOperationForContext:(id)arg1;
- (id)cachedThumbnailForPage:(id)arg1;
- (void)clearCache;
- (id)init;
- (void)registerThumbnailBlock:(id /* block */)arg1 withPreferredSize:(unsigned long long)arg2 forPage:(id)arg3 context:(id)arg4 withPlaceholder:(bool)arg5 orClearFirst:(bool)arg6;
- (id)thumbnailOfSize:(unsigned long long)arg1 forPage:(id)arg2;
- (void)unregisterThumbnailBlockForContext:(id)arg1;
- (void)updatePreferredSize:(unsigned long long)arg1 forContext:(id)arg2;

@end
