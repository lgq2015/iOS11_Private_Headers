/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUser : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _currentUser;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMHomeAccessControl * _homeAccessControl;
    NSString * _name;
    HMThreadSafeMutableArrayCollection * _pendingAccessoryInvitations;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=isCurrentUser, nonatomic) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, retain) HMHomeAccessControl *homeAccessControl;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_unconfigure;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)homeAccessControl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 owner:(bool)arg5 administrator:(bool)arg6;
- (bool)isCurrentUser;
- (bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (id)name;
- (id)pendingAccessoryInvitations;
- (id)propertyQueue;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentUser:(bool)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeAccessControl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateHomeAccessControl:(bool)arg1 remoteAccess:(bool)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)userID;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
