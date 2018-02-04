/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _applicationRegistryQueue;
    NSURL * _archiveFileURL;
    NSObject<OS_dispatch_semaphore> * _archiveSemaphore;
    NSMutableSet * _registeredBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_requestArchiveToDisk;
- (void)_validateRegisteredApplications;
- (bool)applicationIsRegisteredWithBundleIdentifier:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)initWithArchiveFileURL:(id)arg1;
- (bool)registerApplicationWithBundeIdentifier:(id)arg1;

@end
