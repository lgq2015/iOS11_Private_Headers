/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFRoomBuilder : HFItemBuilder {
    HFMutableSetDiff * _accessoryUUIDs;
    NSString * _name;
    HFWallpaperEditCollectionBuilder * _wallpaperBuilder;
}

@property (nonatomic, readonly) NSSet *accessories;
@property (nonatomic, retain) HFMutableSetDiff *accessoryUUIDs;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, retain) HFWallpaperEditCollectionBuilder *wallpaperBuilder;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_createRoom;
- (id)_performValidation;
- (id)_updateAccessories;
- (id)_updateName;
- (id)accessories;
- (id)accessoryUUIDs;
- (void)addAccessory:(id)arg1;
- (id)commitItem;
- (id)description;
- (unsigned long long)hash;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)removeAccessory:(id)arg1;
- (id)room;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setWallpaperBuilder:(id)arg1;
- (id)wallpaperBuilder;

@end
