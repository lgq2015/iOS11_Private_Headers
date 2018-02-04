/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMiroMovieProvider : PXMovieProvider {
    MiroMovie * __miroMovie;
}

@property (setter=_setMiroMovie:, nonatomic, retain) MiroMovie *_miroMovie;
@property (nonatomic, readonly) NSSet *defaultAssets;

+ (void*)_loadMiroFrameworkIfNeeded;
+ (void)initialize;
+ (void)preloadMiroFrameworkInBackground;

- (void).cxx_destruct;
- (id)_miroMovie;
- (Class)_miroMovieClass;
- (void)_navigateToMemory:(id)arg1;
- (void)_setMiroMovie:(id)arg1;
- (bool)canPlayMovie;
- (id)defaultAssets;
- (id)diagnosticsItemProvider;
- (id)miroMovie:(id)arg1 createAndNavigateToMemoryFromCollection:(id)arg2;
- (id)movieViewController;
- (bool)ppt_runTest:(id)arg1 options:(id)arg2;

@end
