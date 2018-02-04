/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _bottomSixComponent;
    NFLSingleComponentLayout * _leftThreeComponent;
    NFLSingleComponentLayout * _rightThreeComponent;
    NFLSingleComponentLayout * _topSixComponent;
    bool  _wideCellsOnLeft;
}

@property (nonatomic, retain) NFLSingleComponentLayout *bottomSixComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *leftThreeComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *rightThreeComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *topSixComponent;
@property (nonatomic) bool wideCellsOnLeft;

- (void).cxx_destruct;
- (id)bottomSixComponent;
- (bool)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (id)leftThreeComponent;
- (double)rank;
- (id)rightThreeComponent;
- (unsigned long long)rowSpan;
- (void)setBottomSixComponent:(id)arg1;
- (void)setLeftThreeComponent:(id)arg1;
- (void)setRightThreeComponent:(id)arg1;
- (void)setTopSixComponent:(id)arg1;
- (void)setWideCellsOnLeft:(bool)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (id)topSixComponent;
- (bool)wideCellsOnLeft;

@end
