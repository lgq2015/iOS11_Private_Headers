/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSubBatchLayoutTilingOperation : FCOperation {
    NFLFeedSettings * _feedSettings;
    struct { 
        long long typeACellType; 
        long long typeAColumnSpan; 
        long long typeARowSpan; 
        long long typeBCellType; 
        long long typeBColumnSpan; 
        long long typeBRowSpan; 
        long long typeCCellType; 
        long long typeCColumnSpan; 
        long long typeCRowSpan; 
    }  _layoutSeed;
    NFLRankedLayoutSource * _rankedLayoutSource;
    NFLSubBatchLayout * _result;
    bool  _showingAccessoryText;
    NSArray * _tileInfos;
    double  _tileProminenceScoreBalanceValue;
    id /* block */  _tilingCompletionBlock;
}

@property (copy) NFLFeedSettings *feedSettings;
@property (nonatomic) struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; } layoutSeed;
@property (retain) NFLRankedLayoutSource *rankedLayoutSource;
@property (nonatomic, copy) NFLSubBatchLayout *result;
@property (getter=isShowingAccessoryText, nonatomic) bool showingAccessoryText;
@property (copy) NSArray *tileInfos;
@property double tileProminenceScoreBalanceValue;
@property (copy) id /* block */ tilingCompletionBlock;

+ (bool)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg2;
+ (bool)tileInfosHaveValidType:(id)arg1;
+ (unsigned long long)tileInfosUsedCount;
+ (bool)validTileInfoType:(id)arg1;

- (void).cxx_destruct;
- (id)feedSettings;
- (id)init;
- (id)initWithTileInfos:(id)arg1 feedSettings:(id)arg2 rankedLayoutSource:(id)arg3 tileProminenceScoreBalanceValue:(double)arg4 layoutSeed:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg5 showingAccessoryText:(bool)arg6;
- (bool)isReliable;
- (bool)isShowingAccessoryText;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })layoutSeed;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)rankedLayoutRequests;
- (id)rankedLayoutSource;
- (id)result;
- (void)setFeedSettings:(id)arg1;
- (void)setLayoutSeed:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg1;
- (void)setRankedLayoutSource:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setShowingAccessoryText:(bool)arg1;
- (void)setTileInfos:(id)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (void)setTilingCompletionBlock:(id /* block */)arg1;
- (id)tileInfos;
- (double)tileProminenceScoreBalanceValue;
- (id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1;
- (id /* block */)tilingCompletionBlock;

@end
