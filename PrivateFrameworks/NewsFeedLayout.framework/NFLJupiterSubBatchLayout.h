/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLJupiterSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _bottomSixComponent;
    NFLSingleComponentLayout * _largeSixComponent;
    int  _layoutType;
    NFLSingleComponentLayout * _leftThreeComponent;
    NFLSingleComponentLayout * _rightThreeComponent;
    NFLSingleComponentLayout * _topSixComponent;
}

@property (nonatomic, retain) NFLSingleComponentLayout *bottomSixComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *largeSixComponent;
@property (nonatomic) int layoutType;
@property (nonatomic, retain) NFLSingleComponentLayout *leftThreeComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *rightThreeComponent;
@property (nonatomic, retain) NFLSingleComponentLayout *topSixComponent;

- (void).cxx_destruct;
- (id)bottomSixComponent;
- (id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2;
- (bool)isValid;
- (id)largeSixComponent;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (int)layoutType;
- (id)leftThreeComponent;
- (double)rank;
- (id)rightThreeComponent;
- (unsigned long long)rowSpan;
- (void)setBottomSixComponent:(id)arg1;
- (void)setLargeSixComponent:(id)arg1;
- (void)setLayoutType:(int)arg1;
- (void)setLeftThreeComponent:(id)arg1;
- (void)setRightThreeComponent:(id)arg1;
- (void)setTopSixComponent:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (id)topSixComponent;

@end
