/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIBundleController : PSBundleController {
    bool  _isForPairedDevice;
    NPSDomainAccessor * _nanoDomainAccessor;
    PSListController * _parentController;
    PSSpecifier * _specifier;
}

@property (nonatomic) bool isForPairedDevice;
@property (nonatomic, retain) NPSDomainAccessor *nanoDomainAccessor;
@property (nonatomic) unsigned long long nanoProfileCount;
@property (nonatomic) PSListController *parentController;
@property (nonatomic, retain) PSSpecifier *specifier;

+ (id)configurationProfiles;
+ (id)provisioningProfiles;
+ (id)provisioningProfilesWithValidityCheck:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1;
- (bool)_isProfileSectionEmpty;
- (unsigned long long)_profileCount;
- (id)_profileInfoForSpecifier:(id)arg1;
- (id)_specifier;
- (void)_unpairedNotification:(id)arg1;
- (void)_updateSpecifierControllerClass;
- (void)_updateSpecifierProfileInfo;
- (void)dealloc;
- (void)decrementNanoProfileCount;
- (void)incrementNanoProfileCount;
- (id)initWithParentListController:(id)arg1 properties:(id)arg2;
- (bool)isForPairedDevice;
- (void)load;
- (id)nanoDomainAccessor;
- (unsigned long long)nanoProfileCount;
- (id)parentController;
- (void)setIsForPairedDevice:(bool)arg1;
- (void)setNanoDomainAccessor:(id)arg1;
- (void)setNanoProfileCount:(unsigned long long)arg1;
- (void)setParentController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)specifiersWithSpecifier:(id)arg1;
- (void)unload;
- (void)updateUI:(id)arg1;

@end
