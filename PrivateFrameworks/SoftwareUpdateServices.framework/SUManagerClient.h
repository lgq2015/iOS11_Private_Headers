/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUManagerClient : NSObject <SUInstallationConstraintObserverDelegate, SUManagerClientInterface> {
    int  _clientType;
    bool  _connected;
    <SUManagerClientDelegate> * _delegate;
    SUDescriptor * _installDescriptor;
    NSMutableDictionary * _installOperationIDsToOperationHandler;
    NSMutableSet * _installationConstraintObservers;
    bool  _installing;
    SUDescriptor * _scanDescriptor;
    NSXPCConnection * _serverConnection;
    bool  _serverIsExiting;
}

@property (nonatomic) int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUManagerClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUDescriptor *installDescriptor;
@property (nonatomic, retain) SUDescriptor *scanDescriptor;
@property (readonly) Class superclass;

+ (bool)_isMultiUserAppleId;
+ (bool)_shouldDisallowAvailabilityNotifications;

- (void).cxx_destruct;
- (void)_cancelAutoInstallOperation:(id)arg1 withResult:(id /* block */)arg2;
- (void)_consentAutoInstallOperation:(id)arg1 withResult:(id /* block */)arg2;
- (id)_getExistingAutoInstallOperationFromModel:(id)arg1;
- (void)_invalidateAllInstallationConstraintObserversForDownload;
- (void)_invalidateConnection;
- (void)_invalidateConstraintObserver:(id)arg1 withError:(id)arg2;
- (void)_registerAutoInstallOperationClientHandler:(id)arg1;
- (id)_remoteInterface;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)arg1 connectIfNecessary:(bool)arg2;
- (id)_remoteSynchronousInterfaceWithErrorHandler:(id /* block */)arg1 connectIfNecessary:(bool)arg2;
- (void)_setClientType;
- (void)_unregisterAutoInstallOperationClientHandler:(id)arg1;
- (void)autoInstallOperationDidConsent:(id)arg1;
- (void)autoInstallOperationDidExpire:(id)arg1;
- (void)autoInstallOperationIsReadyToInstall:(id)arg1 withResult:(id /* block */)arg2;
- (void)autoInstallOperationWasCancelled:(id)arg1;
- (void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg1 withError:(id)arg2;
- (void)cancelDownload:(id /* block */)arg1;
- (int)clientType;
- (void)connectToServerIfNecessary;
- (bool)createInstallationKeybag:(id)arg1;
- (bool)createInstallationKeybag:(id)arg1 forUnattendedInstall:(bool)arg2;
- (void)currentAutoInstallOperation:(bool)arg1 withResult:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deviceHasSufficientSpaceForDownload:(id /* block */)arg1;
- (void)download:(id /* block */)arg1;
- (void)downloadAndInstallState:(id /* block */)arg1;
- (void)downloadDidFail:(id)arg1 withError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (void)downloadDidFinish:(id)arg1 withInstallPolicy:(id)arg2;
- (void)downloadDidStart:(id)arg1;
- (void)downloadProgressDidChange:(id)arg1;
- (void)downloadWasInvalidatedForNewUpdateAvailable:(id)arg1;
- (void)extraSpaceNeededForDownloadWithoutAppPurging:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)installDescriptor;
- (void)installDidFail:(id)arg1 withError:(id)arg2;
- (void)installDidFinish:(id)arg1;
- (void)installDidStart:(id)arg1;
- (void)installPolicyDidChange:(id)arg1;
- (void)installUpdate:(id /* block */)arg1;
- (void)installUpdateWithOptions:(id)arg1 withResult:(id /* block */)arg2;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (void)installationConstraintObserverDidRemoveAllObserverBlocks:(id)arg1;
- (void)invalidate;
- (void)isDownloading:(id /* block */)arg1;
- (bool)isInstallationKeybagRequired;
- (void)isScanning:(id /* block */)arg1;
- (void)isUpdateReadyForInstallation:(id /* block */)arg1;
- (void)noteConnectionDropped;
- (void)noteServerExiting;
- (id)observeInstallationConstraintChangesForDownload:(id)arg1 observer:(id /* block */)arg2;
- (void)pauseDownload:(id /* block */)arg1;
- (void)purgeDownload:(id /* block */)arg1;
- (void)resumeDownload:(id /* block */)arg1;
- (id)scanDescriptor;
- (void)scanDidCompleteWithNewUpdateAvailable:(id)arg1 error:(id)arg2;
- (void)scanForUpdates:(id)arg1 withResult:(id /* block */)arg2;
- (void)scanRequestDidFinishForOptions:(id)arg1 update:(id)arg2 error:(id)arg3;
- (void)scanRequestDidStartForOptions:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstallDescriptor:(id)arg1;
- (void)setScanDescriptor:(id)arg1;
- (void)slaVersion:(id /* block */)arg1;
- (void)startDownload:(id /* block */)arg1;
- (void)startDownloadWithMetadata:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned long long)totalPurgeableSpace;
- (void)updateDownloadMetadata:(id)arg1 withResult:(id /* block */)arg2;

@end
