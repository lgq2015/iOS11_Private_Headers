/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFContactController : NSObject {
    <HFContactControllerDelegate> * _delegate;
    NSArray * _descriptors;
    NSMutableArray * _familyMemberCallbacks;
    NSDictionary * _familyMemberDsidToContact;
    NSArray * _familyMembers;
    unsigned long long  _familyMembersState;
    NSMutableDictionary * _recipientAvailabilities;
}

@property (nonatomic) <HFContactControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *descriptors;
@property (nonatomic, retain) NSMutableArray *familyMemberCallbacks;
@property (nonatomic, copy) NSDictionary *familyMemberDsidToContact;
@property (nonatomic, copy) NSArray *familyMembers;
@property (nonatomic) unsigned long long familyMembersState;
@property (nonatomic, readonly, copy) NSArray *pendingDestinations;
@property (nonatomic, retain) NSMutableDictionary *recipientAvailabilities;

+ (id)contactForEmailAddress:(id)arg1 keyDescriptors:(id)arg2;
+ (id)contactForPhoneNumber:(id)arg1 keyDescriptors:(id)arg2;
+ (id)stringForRecipientStatus:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_contactForFamilyMember:(id)arg1;
- (void)_downloadFamilyMemberPhotos;
- (void)_loadFamilyMembersWithCompletion:(id /* block */)arg1;
- (id)contactForFamilyMemberWithDsid:(id)arg1;
- (id)delegate;
- (id)descriptors;
- (void)entriesUpdated:(id)arg1;
- (id)familyMemberCallbacks;
- (id)familyMemberDsidToContact;
- (id)familyMembers;
- (unsigned long long)familyMembersState;
- (void)fetchFamilyMembersWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithKeyDescriptors:(id)arg1;
- (void)markDestinationsPending:(id)arg1;
- (id)pendingDestinations;
- (id)recipientAvailabilities;
- (void)setDelegate:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setFamilyMemberCallbacks:(id)arg1;
- (void)setFamilyMemberDsidToContact:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilyMembersState:(unsigned long long)arg1;
- (void)setRecipientAvailabilities:(id)arg1;
- (unsigned long long)statusForDestination:(id)arg1;

@end
