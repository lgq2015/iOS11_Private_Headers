/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticManager : NSObject <DATestViewOperationDelegate, DKAssetResponder, DKBrightnessResponder, DKRequestViewControllerDelegate, DKVolumeHUDResponder> {
    <DKAssetResponder> * _assetResponder;
    <DKBrightnessResponder> * _brightnessResponder;
    struct NSString { Class x1; } * _bundleIdentifier;
    DATestViewOperation * _currentLegacyDiagnostic;
    NSObject<OS_dispatch_queue> * _diagnosticListQueue;
    NSObject<OS_dispatch_queue> * _diagnosticsManagerQueue;
    DKExtensionDiscovery * _discovery;
    DKDiagnosticRegistry * _registry;
    <DKViewControllerDelegate> * _viewControllerDelegate;
    <DKVolumeHUDResponder> * _volumeHUDResponder;
}

@property (nonatomic) <DKAssetResponder> *assetResponder;
@property (nonatomic) <DKBrightnessResponder> *brightnessResponder;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) DATestViewOperation *currentLegacyDiagnostic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *diagnosticListQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *diagnosticsManagerQueue;
@property (nonatomic, retain) DKExtensionDiscovery *discovery;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DKDiagnosticRegistry *registry;
@property (readonly) Class superclass;
@property (nonatomic) <DKViewControllerDelegate> *viewControllerDelegate;
@property (nonatomic) <DKVolumeHUDResponder> *volumeHUDResponder;

- (void).cxx_destruct;
- (bool)_checkPrerequisitesForDiagnostic:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (bool)_freeSpaceAvailable:(id)arg1;
- (bool)_isDeviceLocked;
- (id)adapterForIdentifier:(id)arg1;
- (id)assetResponder;
- (id)attributesForIdentifier:(id)arg1;
- (void)beginDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 completion:(id /* block */)arg3;
- (id)brightnessResponder;
- (struct NSString { Class x1; }*)bundleIdentifier;
- (void)cancelAllDiagnostics;
- (id)currentLegacyDiagnostic;
- (id)diagnosticListQueue;
- (id)diagnosticsManagerQueue;
- (void)diagnosticsWithCompletion:(id /* block */)arg1;
- (id)discovery;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithBundleIdentifier:(struct NSString { Class x1; }*)arg1;
- (void)operation:(id)arg1 dismissViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)operation:(id)arg1 presentViewController:(id)arg2 completion:(id /* block */)arg3;
- (id)registry;
- (void)request:(id)arg1 dismissViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)request:(id)arg1 presentViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)setAssetResponder:(id)arg1;
- (void)setBrightnessResponder:(id)arg1;
- (void)setBundleIdentifier:(struct NSString { Class x1; }*)arg1;
- (void)setCurrentLegacyDiagnostic:(id)arg1;
- (void)setDiagnosticListQueue:(id)arg1;
- (void)setDiagnosticsManagerQueue:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setRegistry:(id)arg1;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)setViewControllerDelegate:(id)arg1;
- (void)setVolumeHUDResponder:(id)arg1;
- (id)viewControllerDelegate;
- (id)volumeHUDResponder;

@end
