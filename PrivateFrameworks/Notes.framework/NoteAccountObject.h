/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAccountObject : NoteCollectionObject <ICLegacyAccount> {
    NSDictionary * _constraints;
    NSNumber * _preventMovingNotesToOtherAccounts;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) int accountType;
@property (nonatomic, retain) NSDictionary *constraints;
@property (nonatomic, retain) NSString *constraintsPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NoteStoreObject *defaultStore;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didChooseToMigrate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *pathToConstraintsPlist;
@property (nonatomic, readonly) bool preventMovingNotesToOtherAccounts;
@property (nonatomic, retain) NSSet *stores;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *type;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (void).cxx_destruct;
- (int)accountType;
- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)constraints;
- (void)didTurnIntoFault;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)pathToConstraintsPlist;
- (id)predicateForNotes;
- (bool)preventMovingNotesToOtherAccounts;
- (void)setAccountType:(int)arg1;
- (void)setConstraints:(id)arg1;
- (void)setPathToConstraintsPlist:(id)arg1;
- (bool)shouldMarkNotesAsDeleted;
- (id)storeForExternalId:(id)arg1;
- (bool)validateDefaultStore:(id*)arg1 error:(id*)arg2;
- (void)willSave;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)defaultFolder;
- (id)emailAddress;
- (id)folders;
- (id)objectIdentifier;
- (bool)supportsAttachments;

@end