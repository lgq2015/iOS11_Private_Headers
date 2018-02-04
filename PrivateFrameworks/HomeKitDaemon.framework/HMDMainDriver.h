/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMainDriver : NSObject {
    HMDAccessoryBrowser * _accessoryBrowser;
    HMDCloudManager * _cloudDataSyncManager;
    HMDHomeManager * _homeManager;
    HMDRemoteIdentityRegistry * _identityRegistry;
    HMDCentralMessageDispatcher * _messageDispatcher;
    HMDMessageFilterChain * _msgFilterChain;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDXpcServer * _xpcServer;
}

@property (nonatomic, retain) HMDAccessoryBrowser *accessoryBrowser;
@property (nonatomic, retain) HMDCloudManager *cloudDataSyncManager;
@property (nonatomic, retain) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDRemoteIdentityRegistry *identityRegistry;
@property (nonatomic, retain) HMDCentralMessageDispatcher *messageDispatcher;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) HMDXpcServer *xpcServer;

+ (id)driver;

- (void).cxx_destruct;
- (id)accessoryBrowser;
- (id)cloudDataSyncManager;
- (void)executeBTAJob:(const char *)arg1 withXPCDict:(id)arg2;
- (id)homeManager;
- (id)identityRegistry;
- (id)init;
- (void)initBackgroundTaskAgent;
- (void)localeChanged;
- (void)logError:(id)arg1 component:(id)arg2;
- (id)messageDispatcher;
- (id)msgFilterChain;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcServer:(id)arg1;
- (void)start;
- (id)workQueue;
- (id)xpcServer;

@end
