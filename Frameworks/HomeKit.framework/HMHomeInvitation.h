/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    NSURL * _homeObjectURL;
    HMHomeInvitationData * _invitationData;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSURL *homeObjectURL;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMHomeInvitationData *invitationData;
@property (nonatomic, readonly) long long invitationState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateInvitationState:(long long)arg1;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (id)clientQueue;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)home;
- (id)homeObjectURL;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (id)invitationData;
- (long long)invitationState;
- (bool)isEqual:(id)arg1;
- (id)propertyQueue;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)startDate;
- (id)uniqueIdentifier;

@end
