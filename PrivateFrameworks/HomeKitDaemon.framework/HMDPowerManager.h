/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPowerManager : HMFObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _networkAccessRequired;
    bool  _networkInterfaceActive;
    unsigned int  _powerAssertion;
    void * _scContext;
    struct __SCDynamicStore { } * _scStore;
    bool  _started;
}

@property (getter=isNetworkAccessRequired, nonatomic) bool networkAccessRequired;

- (void).cxx_destruct;
- (int)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (void)_update;
- (void)dealloc;
- (id)init;
- (bool)isNetworkAccessRequired;
- (void)setNetworkAccessRequired:(bool)arg1;
- (void)start;
- (void)stop;

@end
