/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperUserDefaultsDataStore : NSObject <BSDescriptionProviding, SBFWallpaperDataStore> {
    SBWallpaperDefaults * _userDefaults;
    SBFWallpaperDefaults * _wallpaperOptionsDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWallpaperDefaults *userDefaults;
@property (nonatomic, readonly) SBFWallpaperDefaults *wallpaperOptionsDefaults;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasWallpaperImageForVariant:(long long)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2;
- (bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (bool)setVideoURL:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2;
- (bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unverifiedVideoURLForVariant:(long long)arg1;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)arg1 options:(id)arg2 forVariant:(long long)arg3;
- (id)userDefaults;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1;
- (id)verifiedVideoURLForVariant:(long long)arg1;
- (id)wallpaperColorForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1;
- (id)wallpaperOptionsDefaults;
- (id)wallpaperOptionsForVariant:(long long)arg1;
- (id)wallpaperOriginalImageForVariant:(long long)arg1;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1;

@end
