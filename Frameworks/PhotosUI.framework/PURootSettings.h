/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURootSettings : PXSettings {
    PUAirPlaySettings * _airPlaySettings;
    PUAlbumListSettings * _albumListSettings;
    bool  _allowIrisUI;
    bool  _enforceDisableIrisUI;
    PUFeedSettings * _feedSettings;
    bool  _forcePlacesMapDisplay;
    Class  _interfaceThemeClass;
    PUIrisSettings * _irisSettings;
    PUMedusaSettings * _medusaSettings;
    PUMemoriesSettings * _memoriesSettings;
    PUMomentsSettings * _momentsSettings;
    PUOneUpSettings * _oneUpSettings;
    Class  _orbInterfaceThemeClass;
    PUPerformanceDiagnosticsSettings * _performanceDiagnosticsSettings;
    PUPhotoEditProtoSettings * _photoEditingSettings;
    PUPhotosGridSettings * _photosGridSettings;
    PUSceneSettings * _sceneSettings;
    PUSlideshowSettings * _slideshowSettings;
    PUTilingViewSettings * _tilingViewSettings;
    PUWelcomeSettings * _welcomeSettings;
    PUWorkaroundSettings * _workaroundSettings;
}

@property (nonatomic, retain) PUAirPlaySettings *airPlaySettings;
@property (nonatomic, retain) PUAlbumListSettings *albumListSettings;
@property (nonatomic) bool allowIrisUI;
@property (nonatomic, retain) PUFeedSettings *feedSettings;
@property (nonatomic) bool forcePlacesMapDisplay;
@property (nonatomic, retain) Class interfaceThemeClass;
@property (nonatomic, retain) PUIrisSettings *irisSettings;
@property (nonatomic, retain) PUMedusaSettings *medusaSettings;
@property (nonatomic, retain) PUMemoriesSettings *memoriesSettings;
@property (nonatomic, retain) PUMomentsSettings *momentsSettings;
@property (nonatomic, retain) PUOneUpSettings *oneUpSettings;
@property (nonatomic, retain) Class orbInterfaceThemeClass;
@property (nonatomic, retain) PUPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;
@property (nonatomic, retain) PUPhotoEditProtoSettings *photoEditingSettings;
@property (nonatomic, retain) PUPhotosGridSettings *photosGridSettings;
@property (nonatomic, retain) PUSceneSettings *sceneSettings;
@property (nonatomic, retain) PUSlideshowSettings *slideshowSettings;
@property (nonatomic, retain) PUTilingViewSettings *tilingViewSettings;
@property (nonatomic, retain) PUWelcomeSettings *welcomeSettings;
@property (nonatomic, retain) PUWorkaroundSettings *workaroundSettings;

+ (id)_debugRowsForViewControllerStack:(id)arg1;
+ (void)_deleteAllDiagnosticFiles;
+ (id)_memoriesRelatedSettings;
+ (id)_photoKitSettings;
+ (id)_photosUICoreSettings;
+ (void)_setCurrentAsset:(id)arg1;
+ (void)_setDebugRows:(id)arg1;
+ (id)currentAsset;
+ (void)dismissSettingsController:(id)arg1;
+ (id)photosUITesterRootViewController;
+ (void)presentSettingsController;
+ (id)settingsControllerModule;
+ (void)setupStatusBarDoubleTapOnInternalDevices;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)airPlaySettings;
- (id)albumListSettings;
- (bool)allowIrisUI;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)feedSettings;
- (bool)forcePlacesMapDisplay;
- (Class)interfaceThemeClass;
- (id)irisSettings;
- (bool)irisUIEnabled;
- (id)medusaSettings;
- (id)memoriesSettings;
- (id)momentsSettings;
- (id)oneUpSettings;
- (Class)orbInterfaceThemeClass;
- (id)parentSettings;
- (id)performanceDiagnosticsSettings;
- (id)photoEditingSettings;
- (id)photosGridSettings;
- (void)restoreDefaultValues;
- (id)sceneSettings;
- (void)setAirPlaySettings:(id)arg1;
- (void)setAlbumListSettings:(id)arg1;
- (void)setAllowIrisUI:(bool)arg1;
- (void)setDefaultValues;
- (void)setEnforceDisableIrisUI:(bool)arg1;
- (void)setFeedSettings:(id)arg1;
- (void)setForcePlacesMapDisplay:(bool)arg1;
- (void)setInterfaceThemeClass:(Class)arg1;
- (void)setIrisSettings:(id)arg1;
- (void)setMedusaSettings:(id)arg1;
- (void)setMemoriesSettings:(id)arg1;
- (void)setMomentsSettings:(id)arg1;
- (void)setOneUpSettings:(id)arg1;
- (void)setOrbInterfaceThemeClass:(Class)arg1;
- (void)setPerformanceDiagnosticsSettings:(id)arg1;
- (void)setPhotoEditingSettings:(id)arg1;
- (void)setPhotosGridSettings:(id)arg1;
- (void)setSceneSettings:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTilingViewSettings:(id)arg1;
- (void)setWelcomeSettings:(id)arg1;
- (void)setWorkaroundSettings:(id)arg1;
- (id)slideshowSettings;
- (id)tilingViewSettings;
- (id)welcomeSettings;
- (id)workaroundSettings;

@end
