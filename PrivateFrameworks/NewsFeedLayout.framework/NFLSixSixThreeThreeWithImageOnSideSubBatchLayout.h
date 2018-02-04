/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _bottomImageOnSideComponent;
    NFLSingleComponentLayout * _leftSixImageOnTopComponent;
    NFLSingleComponentLayout * _rightSixImageOnTopComponent;
    NFLPairSubBatchLayout * _topPairComponent;
}

@property (nonatomic, retain) NFLSingleComponentLayout *bottomImageOnSideComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *leftSixImageOnTopComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *rightSixImageOnTopComponent;
@property (nonatomic, retain) NFLPairSubBatchLayout *topPairComponent;

- (void).cxx_destruct;
- (id)bottomImageOnSideComponent;
- (unsigned long long)columnSpan;
- (bool)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)leftSixImageOnTopComponent;
- (double)rank;
- (id)rightSixImageOnTopComponent;
- (unsigned long long)rowSpan;
- (void)setBottomImageOnSideComponent:(id)arg1;
- (void)setLeftSixImageOnTopComponent:(id)arg1;
- (void)setRightSixImageOnTopComponent:(id)arg1;
- (void)setTopPairComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (id)topPairComponent;

@end
