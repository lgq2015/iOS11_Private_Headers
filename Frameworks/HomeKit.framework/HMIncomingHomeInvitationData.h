/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {
    NSString * _homeName;
    NSUUID * _homeUUID;
    NSString * _inviterName;
    NSUUID * _inviterUUID;
    NSString * _inviterUserID;
}

@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (nonatomic, copy) NSString *inviterName;
@property (nonatomic, readonly, copy) NSUUID *inviterUUID;
@property (nonatomic, readonly) NSString *inviterUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeName;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 inviterName:(id)arg3 invitationState:(long long)arg4 homeName:(id)arg5 homeUUID:(id)arg6 expiryDate:(id)arg7;
- (id)inviterName;
- (id)inviterUUID;
- (id)inviterUserID;
- (void)setInviterName:(id)arg1;

@end
