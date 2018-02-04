/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceInformation : HMFObject {
    NSMutableArray * _confirmationHandlers;
    HMDDevice * _device;
    NSMutableSet * _pendingPingIdentifiers;
    bool  _pingConfirmed;
    bool  _pinging;
    bool  _reachable;
    HMFTimer * _retryTimer;
    bool  _shouldConfirm;
}

@property (nonatomic, readonly) NSMutableArray *confirmationHandlers;
@property (nonatomic, readonly) HMDDevice *device;
@property (nonatomic, readonly) NSMutableSet *pendingPingIdentifiers;
@property (getter=isPingConfirmed, nonatomic) bool pingConfirmed;
@property (getter=isPinging, nonatomic) bool pinging;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, retain) HMFTimer *retryTimer;
@property (nonatomic) bool shouldConfirm;

- (void).cxx_destruct;
- (void)completeConfirmationsWithError:(id)arg1;
- (id)confirmationHandlers;
- (id)description;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (bool)isPingConfirmed;
- (bool)isPinging;
- (bool)isReachable;
- (id)pendingPingIdentifiers;
- (void)queueConfirmationHandler:(id /* block */)arg1 timeout:(double)arg2;
- (id)retryTimer;
- (void)setPingConfirmed:(bool)arg1;
- (void)setPinging:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setShouldConfirm:(bool)arg1;
- (bool)shouldConfirm;

@end
