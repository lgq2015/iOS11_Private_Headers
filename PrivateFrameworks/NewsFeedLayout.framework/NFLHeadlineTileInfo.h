/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHeadlineTileInfo : NSObject <NFLFeedTileInfo> {
    NSString * _groupIdentifier;
    NSObject<FCHeadlineProviding> * _headline;
    NSString * _namespacedIdentifier;
}

@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) bool bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSObject<FCHeadlineProviding> *headline;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *namespacedIdentifier;
@property (nonatomic, readonly) bool pageable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;

- (void).cxx_destruct;
- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)headline;
- (id)identifier;
- (id)init;
- (id)initWithHeadline:(id)arg1 groupIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)namespacedIdentifier;
- (bool)pageable;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setNamespacedIdentifier:(id)arg1;
- (unsigned long long)tileInfoType;
- (id)underlyingFeedElements;

@end
