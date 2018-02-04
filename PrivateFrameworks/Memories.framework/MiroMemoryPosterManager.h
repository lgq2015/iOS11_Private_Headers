/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryPosterManager : NSObject {
    NSObject<OS_dispatch_queue> * _decodeSerializationQueue;
    MiroMemoryPosterGenerator * _generator;
    MiroMemoryPosterStore * _storage;
    NSObject<OS_dispatch_queue> * _storageSerializationQueue;
}

+ (id)bestImageGenerationInfoSearch;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_bestPosterExists:(id)arg1 isActualPoster:(bool*)arg2;
- (void)_clearOldPosters:(id)arg1;
- (void)_forceJPEGDecode:(id)arg1 callUserHandler:(id /* block */)arg2 withMemory:(id)arg3 finishOnStorageSerialization:(id /* block */)arg4;
- (id)_getBestPoster:(id)arg1 isActualPoster:(bool*)arg2;
- (void)_requestPosterGeneration:(id)arg1 schedulingPriority:(long long)arg2 managerCompletionHandler:(id /* block */)arg3 options:(id)arg4;
- (void)_runCompletionHandlerMainThread:(id /* block */)arg1 withPoster:(id)arg2 forMemory:(id)arg3 finishOnStorageSerialization:(id /* block */)arg4;
- (void)_savePosterToDisk:(id)arg1 memory:(id)arg2 generationInfo:(id)arg3;
- (void)cancelAllGenerationRequests;
- (void)cancelRequestsForMemory:(id)arg1 forAllRequests:(bool)arg2;
- (void)cleanCaches;
- (void)deletePosterStoreForMemory:(id)arg1;
- (id)encodePosterImageToJPEG:(id)arg1;
- (bool)generatorIsBusy;
- (id)init;
- (id)loadPosterImageForMemory:(id)arg1;
- (void)posterForMemory:(id)arg1 options:(id)arg2 schedulingPriority:(long long)arg3 completionHandler:(id /* block */)arg4;
- (bool)posterImageExists:(id)arg1;
- (void)posterImageForTitle:(id)arg1 subtitle:(id)arg2 effectID:(id)arg3 parametersDictionary:(id)arg4 moodID:(id)arg5 inputImage:(id)arg6 outputSize:(struct CGSize { double x1; double x2; })arg7 completionHandler:(id /* block */)arg8;
- (void)preloadTitleEffectPool;
- (id)prepPosterInputForKeyAsset:(id)arg1;
- (void)resumePosterGenerator;
- (void)suspendPosterGenerator;

@end
