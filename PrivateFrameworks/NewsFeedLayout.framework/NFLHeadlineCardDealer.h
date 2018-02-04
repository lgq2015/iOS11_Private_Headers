/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHeadlineCardDealer : NSObject <CALayerDelegate, NFLPipelayerDelegate, NFLRankedLayoutSourceDelegate> {
    <NFLFeedLayoutSearchConfiguration> * _feedLayoutSearchConfiguration;
    NFLFeedSettings * _feedSettings;
    long long  _qualityOfService;
    NFLRankedLayoutSource * _rankedLayoutSource;
    double  _tileProminenceScoreBalanceValue;
    NSOperationQueue * _tilingOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <NFLFeedLayoutSearchConfiguration> *feedLayoutSearchConfiguration;
@property (nonatomic, copy) NFLFeedSettings *feedSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NFLRankedLayoutSource *rankedLayoutSource;
@property (readonly) Class superclass;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic, retain) NSOperationQueue *tilingOperationQueue;

- (void).cxx_destruct;
- (id /* block */)_segmentTypeDescriptionProvider;
- (void)_validateFeedLayout;
- (id)batchesForTileInfos:(id)arg1 previousBatchContext:(id)arg2 nextBatchContext:(id)arg3;
- (id)batchesFromPipeSegments:(id)arg1 tileInfos:(id)arg2;
- (id)feedLayoutSearchConfiguration;
- (id)feedSettings;
- (id)init;
- (id)initWithFeedSettings:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 tileProminenceScoreBalanceValue:(double)arg3 qualityOfService:(long long)arg4;
- (id)pipelayer:(id)arg1 descriptionForSegmentType:(unsigned long long)arg2;
- (bool)pipelayer:(id)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(id)arg3;
- (id)pipelayer:(id)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
- (unsigned long long)pipelayer:(id)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
- (double)pipelayer:(id)arg1 secondaryScoreOfPath:(id)arg2 units:(id)arg3;
- (void)pipelayer:(id)arg1 segmentForUnits:(id)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (double)pipelayer:(id)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;
- (long long)qualityOfService;
- (id)rankedLayoutSource;
- (Class)rankedLayoutSource:(id)arg1 rankedLayoutGenerationOperationClassForRequest:(id)arg2;
- (void)setFeedLayoutSearchConfiguration:(id)arg1;
- (void)setFeedSettings:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRankedLayoutSource:(id)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (void)setTilingOperationQueue:(id)arg1;
- (double)tileProminenceScoreBalanceValue;
- (id)tilingOperationQueue;

@end
