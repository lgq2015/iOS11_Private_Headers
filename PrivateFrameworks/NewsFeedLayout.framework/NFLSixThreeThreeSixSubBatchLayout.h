/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSixThreeThreeSixSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _largeComponent;
    NFLPairSubBatchLayout * _leftBottomPairComponent;
    NFLPairSubBatchLayout * _leftTopPairComponent;
    NFLPairSubBatchLayout * _rightBottomPairComponent;
    NFLPairSubBatchLayout * _rightTopPairComponent;
}

@property (nonatomic, retain) NFLSingleComponentLayout *largeComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *leftBottomPairComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *leftTopPairComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *rightBottomPairComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *rightTopPairComponent;

- (void).cxx_destruct;
- (unsigned long long)columnSpan;
- (bool)isValid;
- (id)largeComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)leftBottomPairComponent;
- (id)leftTopPairComponent;
- (double)rank;
- (id)rightBottomPairComponent;
- (id)rightTopPairComponent;
- (unsigned long long)rowSpan;
- (void)setLargeComponent:(id)arg1;
- (void)setLeftBottomPairComponent:(id)arg1;
- (void)setLeftTopPairComponent:(id)arg1;
- (void)setRightBottomPairComponent:(id)arg1;
- (void)setRightTopPairComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end
