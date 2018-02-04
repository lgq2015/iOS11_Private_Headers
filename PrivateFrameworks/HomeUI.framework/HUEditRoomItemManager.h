/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditRoomItemManager : HFItemManager {
    HFStaticItem * _cameraItem;
    HFStaticItem * _chooseWallpaperItem;
    HFStaticItem * _nameItem;
    HFStaticItem * _removeItem;
    HFRoomBuilder * _roomBuilder;
    HFStaticItem * _wallpaperThumbnailItem;
    HFZoneModule * _zoneModule;
}

@property (nonatomic, retain) HFStaticItem *cameraItem;
@property (nonatomic, retain) HFStaticItem *chooseWallpaperItem;
@property (nonatomic, retain) HFStaticItem *nameItem;
@property (nonatomic, retain) HFStaticItem *removeItem;
@property (nonatomic, retain) HFRoomBuilder *roomBuilder;
@property (nonatomic, retain) HFStaticItem *wallpaperThumbnailItem;
@property (nonatomic, retain) HFZoneModule *zoneModule;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_canDeleteRoom;
- (id)cameraItem;
- (id)chooseWallpaperItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2;
- (id)nameItem;
- (id)removeItem;
- (id)roomBuilder;
- (void)setCameraItem:(id)arg1;
- (void)setChooseWallpaperItem:(id)arg1;
- (void)setNameItem:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (void)setRoomBuilder:(id)arg1;
- (void)setWallpaperThumbnailItem:(id)arg1;
- (void)setZoneModule:(id)arg1;
- (id)wallpaperThumbnailItem;
- (id)zoneModule;

@end
