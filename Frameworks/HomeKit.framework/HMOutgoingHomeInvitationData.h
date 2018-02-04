/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {
    NSString * _inviteeName;
    NSUUID * _inviteeUUID;
    NSString * _inviteeUserID;
}

@property (nonatomic, copy) NSString *inviteeName;
@property (nonatomic, readonly, copy) NSUUID *inviteeUUID;
@property (nonatomic, readonly, copy) NSString *inviteeUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 inviteeUserID:(id)arg2 inviteeName:(id)arg3 invitationState:(long long)arg4 expiryDate:(id)arg5;
- (id)inviteeName;
- (id)inviteeUUID;
- (id)inviteeUserID;
- (void)setInviteeName:(id)arg1;

@end
