/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFUserMediaPermissionController : NSObject {
    NSMutableDictionary * _cachedSettings;
    NSObject<OS_dispatch_queue> * _permissionAccessQueue;
    unsigned long long  _savePermissionsBackgroundTaskIdentifier;
    unsigned long long  _savedStateLoadingStatus;
    NSURL * _userMediaPermissionsFileURL;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (long long)_cameraPermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (bool)_captureDevicesAreAllAskGivenPermission:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_invalidateCachedSettingsForOriginHash:(id)arg1;
- (void)_loadSavedPermissionsIfNecessaryWithCompletion:(id /* block */)arg1;
- (long long)_microphonePermissionForOrigin:(id)arg1 topLevelOrigin:(id)arg2;
- (id)_saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3;
- (void)_setCameraPermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)_setMicrophonePermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)checkUserMediaPermissionForURL:(id)arg1 mainFrameURL:(id)arg2 frameIdentifier:(unsigned long long)arg3 decisionHandler:(id /* block */)arg4;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)arg1 fromOrigin:(id)arg2;
- (id)initWithUserMediaPermissionsFileURL:(id)arg1;
- (void)permissionsForOrigin:(id)arg1 topLevelOrigin:(id)arg2 completion:(id /* block */)arg3;
- (void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(id /* block */)arg4 dialogPresenter:(id)arg5;
- (void)resetOriginPermissions;
- (void)saltForOrigin:(id)arg1 topLevelOrigin:(id)arg2 frameIdentifier:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)savePermissionsOnSuspend;
- (void)setCameraPermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;
- (void)setMicrophonePermission:(long long)arg1 forOrigin:(id)arg2 topLevelOrigin:(id)arg3;

@end
