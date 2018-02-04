/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppInstaller : NSObject {
    ACUIAppDescription * _app;
    bool  _availableInStoreResult;
    bool  _cachedReachabilityResult;
    NSDate * _dateOfLastInstallationCheck;
    NSDate * _dateOfLastReachabilityCheck;
    <ACUIAppInstallerDelegate> * _delegate;
    bool  _needsAvailableInStoreCheck;
    NSURL * _publisherURL;
    bool  _resultOfLastInstallationCheck;
}

@property (nonatomic) <ACUIAppInstallerDelegate> *delegate;
@property (nonatomic, readonly) bool isAvailableInStore;
@property (nonatomic, readonly) bool isDownloadable;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, retain) NSURL *publisherURL;
@property (nonatomic, readonly) bool requiresReachabilityCheckToDetermineDownloadability;

+ (id)currentStoreFront;

- (void).cxx_destruct;
- (bool)_isGreenTeaAvailable;
- (void)_performAvailabilityCheck:(id /* block */)arg1;
- (void)_performReachabilityCheck:(id /* block */)arg1;
- (bool)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(bool)arg1;
- (void)_setAvailableInStoreResult:(bool)arg1;
- (void)_setCachedReachabilityResult:(bool)arg1;
- (void)checkAvailabilityInStore:(id /* block */)arg1;
- (id)delegate;
- (void)fetchDownloadability:(id /* block */)arg1;
- (id)initForAppWithDescription:(id)arg1;
- (bool)isAvailableInStore;
- (bool)isDownloadable;
- (bool)isInstalled;
- (id)publisherURL;
- (bool)requiresReachabilityCheckToDetermineDownloadability;
- (void)setDelegate:(id)arg1;
- (void)setPublisherURL:(id)arg1;
- (void)start;

@end
