/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLTwelveSixNoExcerptSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _bottomComponent;
    NFLPairSubBatchLayout * _bottomPairComponent;
    NFLSingleComponentLayout * _largeComponent;
    NFLPairSubBatchLayout * _topPairComponent;
}

@property (nonatomic, retain) NFLSingleComponentLayout *bottomComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *bottomPairComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *largeComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *topPairComponent;

- (void).cxx_destruct;
- (id)bottomComponent;
- (id)bottomPairComponent;
- (bool)isValid;
- (id)largeComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (void)setBottomComponent:(id)arg1;
- (void)setBottomPairComponent:(id)arg1;
- (void)setLargeComponent:(id)arg1;
- (void)setTopPairComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (id)topPairComponent;

@end
