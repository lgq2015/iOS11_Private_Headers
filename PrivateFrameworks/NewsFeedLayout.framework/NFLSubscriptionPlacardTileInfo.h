/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSubscriptionPlacardTileInfo : NSObject <NFLFeedTileInfo>

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

- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupIdentifier;
- (id)identifier;
- (bool)pageable;
- (unsigned long long)tileInfoType;
- (id)underlyingFeedElements;

@end
