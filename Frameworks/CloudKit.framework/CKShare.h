/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShare : CKRecord <NSCopying, NSSecureCoding> {
    NSMutableSet * _addedParticipantIDs;
    NSMutableArray * _allParticipants;
    bool  _allowsReadOnlyParticipantsToSeeEachOther;
    CKContainerID * _containerID;
    NSArray * _invitedKeysToRemove;
    NSData * _invitedProtectionData;
    NSString * _invitedProtectionEtag;
    NSMutableArray * _lastFetchedParticipants;
    NSString * _previousInvitedProtectionEtag;
    NSString * _previousPublicProtectionEtag;
    long long  _publicPermission;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
    NSMutableSet * _removedParticipantIDs;
    CKRecordID * _rootRecordID;
    bool  _serializePersonalInfo;
    CKShareID * _shareID;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, retain) NSMutableSet *addedParticipantIDs;
@property (nonatomic, retain) NSMutableArray *allParticipants;
@property (nonatomic) bool allowsReadOnlyParticipantsToSeeEachOther;
@property (nonatomic, retain) CKContainerID *containerID;
@property (nonatomic, readonly) CKShareParticipant *currentUserParticipant;
@property (nonatomic, retain) NSArray *invitedKeysToRemove;
@property (nonatomic, retain) NSData *invitedProtectionData;
@property (nonatomic, retain) NSString *invitedProtectionEtag;
@property (nonatomic, retain) NSMutableArray *lastFetchedParticipants;
@property (nonatomic, copy) NSURL *mutableURL;
@property (nonatomic, readonly) CKShareParticipant *owner;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, retain) NSString *previousInvitedProtectionEtag;
@property (nonatomic, retain) NSString *previousPublicProtectionEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic, retain) NSData *publicProtectionData;
@property (nonatomic, retain) NSString *publicProtectionEtag;
@property (nonatomic, retain) NSData *publicSharingIdentity;
@property (nonatomic, retain) NSMutableSet *removedParticipantIDs;
@property (nonatomic, copy) CKRecordID *rootRecordID;
@property (nonatomic) bool serializePersonalInfo;
@property (nonatomic, copy) CKShareID *shareID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)_addOwnerParticipant;
- (void)_addParticipantBypassingChecks:(id)arg1;
- (void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(bool)arg3 inContainer:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_commonCKShareInit;
- (id)_copyWithoutPersonalInfo;
- (void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_initWithShareRecordID:(id)arg1;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (bool)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2;
- (bool)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2;
- (void)_removeAllParticipants;
- (void)_removeParticipantBypassingChecks:(id)arg1;
- (void)_removePendingPrivateParticipants;
- (void)_setPublicPermissionNoSideEffects:(long long)arg1;
- (void)_stripPersonalInfo;
- (void)addParticipant:(id)arg1;
- (id)addedParticipantIDs;
- (id)addedParticipants;
- (id)allParticipants;
- (bool)allowsReadOnlyParticipantsToSeeEachOther;
- (void)clearModifiedParticipants;
- (id)containerID;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserParticipant;
- (id)debugDescription;
- (id)description;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (bool)hasEncryptedData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootRecord:(id)arg1;
- (id)initWithRootRecord:(id)arg1 shareID:(id)arg2;
- (id)invitedKeysToRemove;
- (id)invitedProtectionData;
- (id)invitedProtectionEtag;
- (id)lastFetchedParticipants;
- (id)owner;
- (id)participants;
- (id)previousInvitedProtectionEtag;
- (id)previousPublicProtectionEtag;
- (id)privateToken;
- (long long)publicPermission;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicSharingIdentity;
- (void)registerFetchedParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (id)removedParticipantIDs;
- (id)removedParticipants;
- (void)resetFetchedParticipants;
- (id)rootRecordID;
- (bool)serializePersonalInfo;
- (void)setAddedParticipantIDs:(id)arg1;
- (void)setAllParticipants:(id)arg1;
- (void)setAllowsReadOnlyParticipantsToSeeEachOther:(bool)arg1;
- (void)setContainerID:(id)arg1;
- (void)setInvitedKeysToRemove:(id)arg1;
- (void)setInvitedProtectionData:(id)arg1;
- (void)setInvitedProtectionEtag:(id)arg1;
- (void)setLastFetchedParticipants:(id)arg1;
- (void)setPreviousInvitedProtectionEtag:(id)arg1;
- (void)setPreviousPublicProtectionEtag:(id)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicSharingIdentity:(id)arg1;
- (void)setRemovedParticipantIDs:(id)arg1;
- (void)setRootRecordID:(id)arg1;
- (void)setSerializePersonalInfo:(bool)arg1;
- (void)setShareID:(id)arg1;
- (void)setWantsPublicSharingKey:(bool)arg1;
- (id)shareID;
- (id)shareURL;
- (id)updateFromServerShare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (bool)_brc_isOwner;
- (bool)deserializeSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (bool)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 error:(id*)arg3;
- (bool)_prepPCSDataWithContext:(id)arg1 databaseScope:(long long)arg2 removeServerSpecifiedKeys:(bool)arg3 error:(id*)arg4;
- (bool)hasEncryptedPersonalInfo;
- (struct _OpaquePCSShareProtection { }*)privatePCS;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(bool)arg2;

@end
