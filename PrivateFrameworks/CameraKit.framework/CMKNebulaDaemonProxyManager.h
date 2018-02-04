/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKNebulaDaemonProxyManager : NSObject <CMKNebulaDaemonClientProtocol, CMKNebulaDaemonProtocol> {
    NSXPCConnection * __connection;
    long long  __connectionCount;
    NSObject<OS_dispatch_queue> * __queue;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly) long long _connectionCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_closeConnectionToDaemon;
- (id)_connection;
- (long long)_connectionCount;
- (void)_ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(id /* block */)arg1;
- (id)_queue;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (id)init;
- (void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(bool)arg1;
- (void)performIrisCrashRecovery;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;

@end
