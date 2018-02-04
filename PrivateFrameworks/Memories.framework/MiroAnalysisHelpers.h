/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAnalysisHelpers : NSObject

+ (id)buildTransientAggregateRangeTreeWithPersistentRanges:(id)arg1 masterSceneType:(unsigned long long)arg2;
+ (id)sharedInstance;
+ (int)timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2;

- (void)analyzeUsingClientSideAnalyzerWithAsset:(id)arg1 performedAnalysisTypes:(unsigned long long)arg2 ranges:(id)arg3 options:(unsigned long long)arg4 relatedSortedAssets:(id)arg5 cancelGroup:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (void)cancelAllAnalysisRequests;
- (id)description;
- (void)dispatchFullOutOfProcessAnalysisForAssets:(id)arg1;
- (id)init;

@end