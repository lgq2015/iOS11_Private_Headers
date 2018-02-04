/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAggregateTileInfo : NSObject <NFLFeedTileInfo> {
    NSString * _groupIdentifier;
    NSString * _identifier;
    unsigned long long  _tileInfoType;
    NSArray * _underlyingTileInfos;
}

@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) bool bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool pageable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;
@property (nonatomic, readonly, copy) NSArray *underlyingTileInfos;

- (void).cxx_destruct;
- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithGroupIdentifier:(id)arg1 underlyingTileInfos:(id)arg2;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingTileInfos:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)pageable;
- (unsigned long long)tileInfoType;
- (id)underlyingFeedElements;
- (id)underlyingTileInfoForID:(id)arg1;
- (id)underlyingTileInfos;
- (bool)underlyingTileInfosContainsTileInfoForID:(id)arg1;

@end
