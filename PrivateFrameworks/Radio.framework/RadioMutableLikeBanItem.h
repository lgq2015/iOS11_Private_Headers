/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableLikeBanItem : RadioLikeBanItem {
    long long  _itemID;
}

@property (nonatomic) long long albumID;
@property (nonatomic, retain) RadioArtworkCollection *artworkCollection;
@property (nonatomic) bool isSeed;
@property (nonatomic) long long itemID;
@property (nonatomic, copy) RadioSeedMetadata *seedMetadata;
@property (nonatomic) long long storeID;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)itemID;
- (void)setAlbumID:(long long)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setIsSeed:(bool)arg1;
- (void)setItemID:(long long)arg1;
- (void)setSeedMetadata:(id)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setType:(long long)arg1;

@end
