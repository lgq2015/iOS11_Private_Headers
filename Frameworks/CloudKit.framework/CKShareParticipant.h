/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareParticipant : NSObject <NSCopying, NSSecureCoding> {
    long long  _acceptanceStatus;
    bool  _acceptedInProcess;
    bool  _createdInProcess;
    NSData * _encryptedPersonalInfo;
    NSString * _inviterID;
    bool  _isCurrentUser;
    long long  _originalAcceptanceStatus;
    long long  _originalParticipantType;
    long long  _originalPermission;
    CKUserIdentity * _originalUserIdentity;
    NSString * _participantID;
    long long  _permission;
    NSData * _protectionInfo;
    CKRecordID * _shareRecordID;
    long long  _type;
    CKUserIdentity * _userIdentity;
}

@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) bool acceptedInProcess;
@property (nonatomic) bool createdInProcess;
@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, retain) NSString *inviterID;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic) long long originalAcceptanceStatus;
@property (nonatomic) long long originalParticipantType;
@property (nonatomic) long long originalPermission;
@property (nonatomic, retain) CKUserIdentity *originalUserIdentity;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic) long long permission;
@property (nonatomic, retain) NSData *protectionInfo;
@property (nonatomic, retain) CKRecordID *shareRecordID;
@property (nonatomic) long long type;
@property (nonatomic, retain) CKUserIdentity *userIdentity;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_stripPersonalInfo;
- (long long)acceptanceStatus;
- (bool)acceptedInProcess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createdInProcess;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inviterID;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (long long)originalAcceptanceStatus;
- (long long)originalParticipantType;
- (long long)originalPermission;
- (id)originalUserIdentity;
- (id)participantID;
- (long long)permission;
- (id)protectionInfo;
- (void)setAcceptanceStatus:(long long)arg1;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCreatedInProcess:(bool)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setInviterID:(id)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setOriginalAcceptanceStatus:(long long)arg1;
- (void)setOriginalParticipantType:(long long)arg1;
- (void)setOriginalPermission:(long long)arg1;
- (void)setOriginalUserIdentity:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)shareRecordID;
- (long long)type;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)userIdentity;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (bool)hasEncryptedPersonalInfo;

@end
