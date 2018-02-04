/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFlintResourceManager : NSObject {
    <FCContentContext> * _context;
}

@property (nonatomic, readonly) <FCContentContext> *context;

- (void).cxx_destruct;
- (id)cachedResourcesWithIdentifiers:(id)arg1;
- (id)context;
- (id)fetchFontResourcesWithIdentifiers:(id)arg1 downloadAssets:(bool)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(bool)arg2 cacheLifetimeHint:(long long)arg3 relativePriority:(long long)arg4 callBackQueue:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)fetchResourcesWithIdentifiers:(id)arg1 downloadAssets:(bool)arg2 relativePriority:(long long)arg3 callBackQueue:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (id)initWithContext:(id)arg1;

@end
