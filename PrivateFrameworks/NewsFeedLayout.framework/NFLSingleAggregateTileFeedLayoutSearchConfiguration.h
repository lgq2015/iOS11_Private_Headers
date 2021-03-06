/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSingleAggregateTileFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {
    Class  _rankedLayoutGenerationOperationClass;
    bool  _showAccessoryText;
    Class  _subBatchLayoutTilingOperationClass;
}

@property (nonatomic, readonly) NSArray *allRowTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long preferredTileInfoBatchSize;
@property (nonatomic, retain) Class rankedLayoutGenerationOperationClass;
@property (getter=isShowingAccessoryText, nonatomic) bool showAccessoryText;
@property (nonatomic, retain) Class subBatchLayoutTilingOperationClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allRowTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (id)init;
- (id)initWithSubBatchLayoutTilingOperationClass:(Class)arg1 rankedLayoutGenerationOperationClass:(Class)arg2;
- (bool)isShowingAccessoryText;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (unsigned long long)preferredTileInfoBatchSize;
- (Class)rankedLayoutGenerationOperationClass;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (void)setRankedLayoutGenerationOperationClass:(Class)arg1;
- (void)setShowAccessoryText:(bool)arg1;
- (void)setSubBatchLayoutTilingOperationClass:(Class)arg1;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClass;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (bool)supportsTileInfoType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;

@end
