/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSingleComponentLayout : NSObject <NFLFeedComponentLayout> {
    NFLRankedLayout * _rankedLayout;
    NSObject<NFLFeedTileInfo> * _tileInfo;
}

@property (nonatomic, readonly) unsigned long long columnSpan;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NFLFeedCollectionViewLayoutAttributes *layoutAttributes;
@property (nonatomic, readonly) double rank;
@property (nonatomic, retain) NFLRankedLayout *rankedLayout;
@property (nonatomic, readonly) unsigned long long rowSpan;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<NFLFeedTileInfo> *tileInfo;
@property (nonatomic, readonly, copy) NSArray *tileInfosUsed;

+ (id)singleComponentLayoutWithRankedLayout:(id)arg1 tileInfo:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)columnSpan;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)layoutAttributes;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (id)rankedLayout;
- (unsigned long long)rowSpan;
- (void)setRankedLayout:(id)arg1;
- (void)setTileInfo:(id)arg1;
- (id)tileInfo;
- (id)tileInfosUsed;
- (unsigned long long)tileInfosUsedCount;

@end
