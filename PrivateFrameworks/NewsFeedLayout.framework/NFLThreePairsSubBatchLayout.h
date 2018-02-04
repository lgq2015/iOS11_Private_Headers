/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout {
    NFLPairSubBatchLayout * _centerPairComponent;
    NFLPairSubBatchLayout * _leftPairComponent;
    NFLPairSubBatchLayout * _rightPairComponent;
}

@property (nonatomic, retain) NFLPairSubBatchLayout *centerPairComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *leftPairComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *rightPairComponent;

- (void).cxx_destruct;
- (id)centerPairComponent;
- (bool)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)leftPairComponent;
- (double)rank;
- (id)rightPairComponent;
- (unsigned long long)rowSpan;
- (void)setCenterPairComponent:(id)arg1;
- (void)setLeftPairComponent:(id)arg1;
- (void)setRightPairComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end
