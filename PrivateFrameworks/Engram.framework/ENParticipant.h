/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENParticipant : NSObject <NSSecureCoding> {
    <ENAccountPublicKey> * _accountPublicKey;
    NSSet * _aliases;
    NSArray * _devices;
}

@property (nonatomic, retain) <ENAccountPublicKey> *accountPublicKey;
@property (nonatomic, retain) NSSet *aliases;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, readonly) bool supportsEngram;

// Image: /System/Library/PrivateFrameworks/Engram.framework/Engram

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountPublicKey;
- (id)aliases;
- (id)description;
- (id)deviceWithIdentifier:(id)arg1;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setAccountPublicKey:(id)arg1;
- (void)setAliases:(id)arg1;
- (void)setDevices:(id)arg1;
- (bool)supportsEngram;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)participantsByAlias:(id)arg1;
+ (id)participantsFromEndpoints:(id)arg1;

@end
