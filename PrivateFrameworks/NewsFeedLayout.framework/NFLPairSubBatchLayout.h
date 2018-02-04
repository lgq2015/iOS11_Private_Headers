/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLPairSubBatchLayout : NFLSubBatchLayout {
    NFLSingleComponentLayout * _componentOne;
    NFLSingleComponentLayout * _componentTwo;
}

@property (nonatomic, retain) NFLSingleComponentLayout *componentOne;
@property (nonatomic, retain) NFLSingleComponentLayout *componentTwo;

+ (id)pairComponentFeedSetting:(id)arg1 componentOne:(id)arg2 componentTwo:(id)arg3;

- (void).cxx_destruct;
- (bool)_isHorizontal;
- (unsigned long long)columnSpan;
- (id)componentOne;
- (id)componentTwo;
- (bool)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (void)setComponentOne:(id)arg1;
- (void)setComponentTwo:(id)arg1;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end
