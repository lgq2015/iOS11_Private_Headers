/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
    int  _appsChangedNotifyToken;
    NSArray * _blockedApplications;
    NSArray * _configurationProfiles;
    NSArray * _enterpriseAppSigners;
    NSArray * _freeDeveloperAppSigners;
    MCProfileInfo * _mdmProfile;
    NSObject<OS_dispatch_queue> * _memberQueue;
    int  _provisioningProfileInstalledToken;
    int  _provisioningProfileRemovedToken;
    NSObject<OS_dispatch_queue> * _reloadQueue;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (nonatomic) int appsChangedNotifyToken;
@property (nonatomic, retain) NSArray *blockedApplications;
@property (nonatomic, retain) NSArray *configurationProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enterpriseAppSigners;
@property (nonatomic, retain) NSArray *freeDeveloperAppSigners;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileInfo *mdmProfile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly) Class superclass;

+ (bool)isProfileSectionRestricted;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(bool)arg1 appSigners:(bool)arg2 blockedApplications:(bool)arg3 completion:(id /* block */)arg4;
- (unsigned long long)appSignerCount;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (int)appsChangedNotifyToken;
- (id)blockedApplications;
- (id)configurationProfiles;
- (void)configurationProfilesChanged:(id)arg1;
- (id)configurationProfilesWithOutMDMProfile:(id*)arg1 outEnterpriseAppSigners:(id*)arg2 outFreeDevAppSigners:(id*)arg3 outBlockedApplications:(id*)arg4;
- (void)dealloc;
- (id)enterpriseAppSigners;
- (id)freeDeveloperAppSigners;
- (id)init;
- (bool)isProfileSectionEmpty;
- (unsigned long long)itemCount;
- (id)mdmProfile;
- (id)memberQueue;
- (unsigned long long)profileCount;
- (int)provisioningProfileInstalledToken;
- (int)provisioningProfileRemovedToken;
- (void)reloadAllDataInBackground;
- (void)reloadAllDataInBackgroundWithCompletion:(id /* block */)arg1;
- (void)reloadAppSignersAndBlockedAppsInBackground;
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(id /* block */)arg1;
- (void)reloadDataInBackgroundIncludingProfiles:(bool)arg1 appSigners:(bool)arg2 blockedApplications:(bool)arg3 completion:(id /* block */)arg4;
- (void)reloadProfilesInBackground;
- (void)reloadProfilesInBackgroundWithCompletion:(id /* block */)arg1;
- (id)reloadQueue;
- (void)setAppWorkspace:(id)arg1;
- (void)setAppsChangedNotifyToken:(int)arg1;
- (void)setBlockedApplications:(id)arg1;
- (void)setConfigurationProfiles:(id)arg1;
- (void)setEnterpriseAppSigners:(id)arg1;
- (void)setFreeDeveloperAppSigners:(id)arg1;
- (void)setMdmProfile:(id)arg1;
- (void)setMemberQueue:(id)arg1;
- (void)setProvisioningProfileInstalledToken:(int)arg1;
- (void)setProvisioningProfileRemovedToken:(int)arg1;
- (void)setReloadQueue:(id)arg1;

@end
