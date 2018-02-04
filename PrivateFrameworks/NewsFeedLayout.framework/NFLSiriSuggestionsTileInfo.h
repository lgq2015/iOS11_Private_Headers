/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLSiriSuggestionsTileInfo : NSObject <NFLFeedTileInfo> {
    NSString * _body;
    NSString * _groupIdentifier;
    UIImage * _icon;
    NSString * _newsAndPrivacy;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly) unsigned long long bookmarkOffsetType;
@property (nonatomic, readonly) bool bookmarkable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *icon;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *newsAndPrivacy;
@property (nonatomic, readonly) bool pageable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tileInfoType;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSArray *underlyingFeedElements;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)bookmarkOffsetType;
- (bool)bookmarkable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupIdentifier;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)newsAndPrivacy;
- (bool)pageable;
- (unsigned long long)tileInfoType;
- (id)title;
- (id)underlyingFeedElements;

@end
