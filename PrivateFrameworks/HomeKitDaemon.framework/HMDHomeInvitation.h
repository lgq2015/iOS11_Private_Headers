/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _expirationHandler;
    HMDHome * _home;
    HMHomeInvitationData * _invitationData;
    long long  _invitationState;
    NSArray * _operations;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    id /* block */  _resolutionHandler;
    HMFTimer * _timer;
}

@property (getter=isAccepted, nonatomic, readonly) bool accepted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeclined, nonatomic, readonly) bool declined;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) id /* block */ expirationHandler;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMHomeInvitationData *invitationData;
@property (nonatomic) long long invitationState;
@property (nonatomic, retain) NSArray *operations;
@property (getter=isPending, nonatomic, readonly) bool pending;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, copy) id /* block */ resolutionHandler;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_configureTimer;
- (void)_resolve:(bool)arg1;
- (void)accept;
- (id)clientQueue;
- (void)decline;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id /* block */)expirationHandler;
- (void)expire;
- (id)home;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;
- (id)invitationData;
- (long long)invitationState;
- (bool)isAccepted;
- (bool)isDeclined;
- (bool)isExpired;
- (bool)isPending;
- (id)operations;
- (id)propertyQueue;
- (bool)refreshDisplayName;
- (id /* block */)resolutionHandler;
- (void)setClientQueue:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)setInvitationState:(long long)arg1;
- (void)setOperations:(id)arg1;
- (void)setResolutionHandler:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (id)startDate;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (void)updateInvitationState:(long long)arg1;
- (void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2;

@end
