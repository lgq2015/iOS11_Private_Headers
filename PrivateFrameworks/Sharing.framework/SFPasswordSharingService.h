/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPasswordSharingService : NSObject {
    bool  _activateCalled;
    <SFPasswordSharingServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    NSString * _networkName;
    SFUserNotification * _notification;
    NSUUID * _peer;
    SFPasswordSharingInfo * _promptedInfo;
    SFService * _service;
    int  _serviceState;
    NSDate * _shareClock;
    double  _shareTime;
}

@property (nonatomic) <SFPasswordSharingServiceDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSString *networkName;

+ (unsigned int)passwordSharingAvailability;

- (void).cxx_destruct;
- (bool)__activateCalled;
- (bool)__invalidateCalled;
- (void)__testReceivedObject:(id)arg1 withFlags:(unsigned int)arg2;
- (void)_cleanup;
- (void)_handleReceivedPassword:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleUserNotificationResponse:(int)arg1;
- (void)_passInfoToDelegate:(id)arg1;
- (void)_promptUserWithInfo:(id)arg1 message:(id)arg2;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runServiceStart;
- (void)_sendPasswordDeclinedWithError:(int)arg1;
- (void)_sendPasswordReceived;
- (void)activate;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)messageForDisplayName:(id)arg1 deviceName:(id)arg2 info:(id)arg3;
- (id)networkName;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setNetworkName:(id)arg1;

@end
