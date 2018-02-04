/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLTileInfoTree : NSObject {
    NSMutableArray * _allRankedLayouts;
    long long  _maximumRowSpan;
    long long  _minimumRowSpan;
    <NFLFeedTileInfo> * _tileInfo;
    struct __CFDictionary { } * _values;
}

@property (nonatomic, retain) NSMutableArray *allRankedLayouts;
@property (nonatomic) long long maximumRowSpan;
@property (nonatomic) long long minimumRowSpan;
@property (nonatomic, retain) <NFLFeedTileInfo> *tileInfo;
@property (nonatomic) struct __CFDictionary { }*values;

- (void).cxx_destruct;
- (id)allRankedLayouts;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTileInfo:(id)arg1;
- (void)insertRankedLayout:(id)arg1;
- (long long)maximumRowSpan;
- (long long)minimumRowSpan;
- (id)rankedLayoutWithRowSpan:(long long)arg1 columnSpan:(long long)arg2 cellType:(long long)arg3;
- (void)setAllRankedLayouts:(id)arg1;
- (void)setMaximumRowSpan:(long long)arg1;
- (void)setMinimumRowSpan:(long long)arg1;
- (void)setTileInfo:(id)arg1;
- (void)setValues:(struct __CFDictionary { }*)arg1;
- (id)tileInfo;
- (struct __CFDictionary { }*)values;

@end
