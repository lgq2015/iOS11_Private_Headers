/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableArray * _availableLibraries;
    long long  _browserType;
    <HSBrowserDelegate> * _delegate;
    NSString * _homeSharingGroupID;
    NSMutableArray * _librariesPendingRemoval;
    NSMutableArray * _resolvingServices;
    NSNetServiceBrowser * _serviceBrowser;
    NSObject<OS_dispatch_queue> * _serviceBrowserQueue;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSMutableArray *availableLibraries;
@property (nonatomic, readonly) long long browserType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HSBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeSharingGroupID;
@property (nonatomic, retain) NSMutableArray *librariesPendingRemoval;
@property (nonatomic, retain) NSMutableArray *resolvingServices;
@property (nonatomic, retain) NSNetServiceBrowser *serviceBrowser;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceBrowserQueue;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)homeSharingBrowserWithGroupID:(id)arg1;

- (void).cxx_destruct;
- (void)_removalTimerFired:(id)arg1;
- (id)availableLibraries;
- (long long)browserType;
- (id)delegate;
- (id)homeSharingGroupID;
- (id)initWithBrowserType:(long long)arg1 groupID:(id)arg2;
- (id)librariesPendingRemoval;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)resolvingServices;
- (id)serviceBrowser;
- (id)serviceBrowserQueue;
- (id)serviceType;
- (void)setAvailableLibraries:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLibrariesPendingRemoval:(id)arg1;
- (void)setResolvingServices:(id)arg1;
- (void)setServiceBrowser:(id)arg1;
- (void)setServiceBrowserQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
