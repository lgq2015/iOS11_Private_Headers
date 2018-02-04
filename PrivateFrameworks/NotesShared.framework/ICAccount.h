/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccount : ICNoteContainer <ICCloudObject> {
    ICAccountProxy * _accountProxy;
    ICFolder * _defaultFolder;
    bool  _didAddObservers;
    bool  _didAddTrashObservers;
    ICFolder * _trashFolder;
    ICSelectorDelayer * _trashFolderHiddenSelectorDelayer;
}

@property (nonatomic, retain) ICAccountProxy *accountProxy;
@property (nonatomic) int accountType;
@property (nonatomic, retain) NSData *cryptoVerifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) ICFolder *defaultFolder;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *deviceMigrationStates;
@property (nonatomic) bool didAddObservers;
@property (nonatomic) bool didAddTrashObservers;
@property (nonatomic) bool didChooseToMigrate;
@property (nonatomic) bool didFinishMigration;
@property (nonatomic) bool didMigrateOnMac;
@property (nonatomic, retain) NSSet *folders;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *legacyTombstones;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, retain) NSSet *ownerInverse;
@property (nonatomic, retain) NSSet *serverChangeTokens;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICFolder *trashFolder;
@property (nonatomic, retain) ICSelectorDelayer *trashFolderHiddenSelectorDelayer;
@property (nonatomic, retain) NSString *userRecordName;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)accountWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)accountsWithAccountType:(int)arg1 context:(id)arg2;
+ (id)allAccountsInContext:(id)arg1;
+ (id)allActiveAccountsInContext:(id)arg1;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (bool)clearAccountForAppleCloudKitTable;
+ (id)cloudKitAccountInContext:(id)arg1;
+ (id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg1;
+ (id)defaultAccountInContext:(id)arg1;
+ (void)deleteAccount:(id)arg1;
+ (void)deleteAccountWithBatchDelete:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (void)initialize;
+ (void)initializeLocalAccountNamesInBackground;
+ (bool)isCloudKitAccountAvailable;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingLocalizedName;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localAccountInContext:(id)arg1;
+ (void)localeDidChange:(id)arg1;
+ (id)localizedLocalAccountName;
+ (id)localizedLocalAccountNameMidSentence;
+ (id)newAccountWithIdentifier:(id)arg1 type:(int)arg2 context:(id)arg3;
+ (id)newLocalAccountInContext:(id)arg1;
+ (id)standardFolderIdentifierWithPrefix:(id)arg1 accountIdentifier:(id)arg2 accountType:(int)arg3;

- (void).cxx_destruct;
- (id)accountName;
- (id)accountProxy;
- (void)addTrashObserversIfNecessary;
- (id)allChildObjects;
- (id)allItemsFolderLocalizedTitle;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)canBeSharedViaICloud;
- (bool)canPasswordProtectNotes;
- (long long)compare:(id)arg1;
- (unsigned long long)countOfVisibleFolders;
- (void)createDefaultFolder;
- (void)createStandardFolders;
- (void)createTrashFolder;
- (id)cryptoPassphraseVerifier;
- (void)dealloc;
- (id)defaultFolder;
- (id)defaultFolderIdentifier;
- (bool)didAddObservers;
- (bool)didAddTrashObservers;
- (id)folderWithIdentifier:(id)arg1;
- (bool)hasAnyCustomFolders;
- (bool)hasSameCryptoKeyAsAccount:(id)arg1;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (bool)isDeletable;
- (bool)isInICloudAccount;
- (bool)isLeaf;
- (id)localizedName;
- (id)localizedNameMidSentence;
- (void)mergeDataFromRecord:(id)arg1;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBePushedToCloud;
- (id)newlyCreatedRecord;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)noteWillBeDeletedOrUndeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passwordProtectedNotes;
- (id)predicateForAttachmentsInAccount;
- (id)predicateForFolders;
- (id)predicateForNotesInAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleFolders;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesIncludingTrash;
- (void)prepareForDeletion;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)removeAllObserversIfNecessary;
- (void)removeTrashObserversIfNecessary;
- (id)reservedAccountFolderTitles;
- (void)setAccountProxy:(id)arg1;
- (void)setAccountType:(int)arg1;
- (void)setDefaultFolder:(id)arg1;
- (void)setDidAddObservers:(bool)arg1;
- (void)setDidAddTrashObservers:(bool)arg1;
- (void)setDidChooseToMigrate:(bool)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTrashFolder:(id)arg1;
- (void)setTrashFolderHiddenSelectorDelayer:(id)arg1;
- (bool)shouldBeDeletedFromLocalDatabase;
- (bool)shouldExcludeFilesFromBackup;
- (id)standardFolderIdentifierWithPrefix:(id)arg1;
- (bool)supportsEditingNotes;
- (bool)supportsLegacyTombstones;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)trashFolder;
- (id)trashFolderHiddenSelectorDelayer;
- (id)trashFolderIdentifier;
- (void)updateAccountNameForAccountListSorting;
- (void)updateTrashFolderHiddenNoteContainerState;
- (id)visibleFolders;
- (id)visibleFoldersWithParent:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNoteContainers;
- (id)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (unsigned long long)visibleNotesIncludingTrashCount;
- (bool)visibleRootFoldersContainFolderWithTitle:(id)arg1;
- (void)willTurnIntoFault;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)localizedLocalAccountNameMidSentence:(bool)arg1;

@end
