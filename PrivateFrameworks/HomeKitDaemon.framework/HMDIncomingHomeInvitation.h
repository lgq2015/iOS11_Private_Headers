/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {
    NSString * _inviterControllerName;
    NSData * _inviterPublicKey;
}

@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (nonatomic, readonly, copy) NSString *inviterControllerName;
@property (nonatomic, readonly, copy) NSData *inviterPublicKey;
@property (nonatomic, readonly, copy) NSString *inviterUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)bulletinContext;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)homeName;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviterUserID:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterPublicKey:(id)arg6 inviterControllerName:(id)arg7 expiryDate:(id)arg8;
- (id)inviterControllerName;
- (id)inviterPublicKey;
- (id)inviterUserID;
- (bool)refreshDisplayName;

@end
