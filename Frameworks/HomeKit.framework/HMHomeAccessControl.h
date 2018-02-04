/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeAccessControl : NSObject {
    bool  _administrator;
    bool  _owner;
    HMUserPresenceAuthorization * _presenceAuthStatus;
    HMUserPresenceCompute * _presenceComputeStatus;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _remoteAccessAllowed;
    HMUser * _user;
}

@property (getter=isAdministrator, nonatomic) bool administrator;
@property (getter=isOwner) bool owner;
@property (nonatomic, retain) HMUserPresenceAuthorization *presenceAuthStatus;
@property (nonatomic, retain) HMUserPresenceCompute *presenceComputeStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isRemoteAccessAllowed) bool remoteAccessAllowed;
@property HMUser *user;

- (void).cxx_destruct;
- (id)initWithUser:(id)arg1 owner:(bool)arg2 administratorPrivilege:(bool)arg3 remoteAccess:(bool)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6;
- (bool)isAdministrator;
- (bool)isOwner;
- (bool)isRemoteAccessAllowed;
- (id)presenceAuthStatus;
- (unsigned long long)presenceAuthorizationStatus;
- (unsigned long long)presenceComputationStatus;
- (id)presenceComputeStatus;
- (id)propertyQueue;
- (void)setAdministrator:(bool)arg1;
- (void)setOwner:(bool)arg1;
- (void)setPresenceAuthStatus:(id)arg1;
- (void)setPresenceComputeStatus:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setRemoteAccessAllowed:(bool)arg1;
- (void)setUser:(id)arg1;
- (void)updateAdministratorAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRemoteAccess:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)user;

@end
