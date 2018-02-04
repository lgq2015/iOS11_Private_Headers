/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteObject : NSManagedObject <ICLegacyNote, ICSearchIndexableNote>

@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NoteBodyObject *body;
@property (nonatomic, retain) NSNumber *containsCJK;
@property (nonatomic, retain) NSString *content;
@property (nonatomic, readonly) NSString *contentAsPlainText;
@property (nonatomic, retain) NSNumber *contentType;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalContentRef;
@property (nonatomic, retain) NSNumber *externalFlags;
@property (nonatomic, retain) NSData *externalRepresentation;
@property (nonatomic, retain) NSNumber *externalSequenceNumber;
@property (nonatomic, retain) NSNumber *externalServerIntId;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly, retain) NSString *guid;
@property (nonatomic, readonly) bool hasValidServerIntId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *integerId;
@property (nonatomic, readonly) bool isBeingMarkedForDeletion;
@property (nonatomic, retain) NSNumber *isBookkeepingEntry;
@property (nonatomic, readonly) bool isMarkedForDeletion;
@property (nonatomic, readonly) bool isModernNote;
@property (nonatomic) bool isPlainText;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, readonly) NSURL *noteId;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *serverId;
@property (nonatomic) long long serverIntId;
@property (nonatomic, retain) NoteStoreObject *store;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (bool)didChooseToMigrateNote:(id)arg1 context:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg2;

- (id)accountName;
- (id)authorsExcludingCurrentUser;
- (bool)belongsToCollection:(id)arg1;
- (bool)containsAttachments;
- (id)content;
- (id)contentAsPlainText;
- (id)contentAsPlainTextPreservingNewlines;
- (id)contentInfoText;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)dateForCurrentSortType;
- (id)defaultTitleForEmptyNote;
- (id)externalContentRef;
- (id)externalRepresentation;
- (unsigned long long)flags;
- (id)folderName;
- (bool)hasValidServerIntId;
- (id)identifier;
- (bool)ignoreInSearchIndexer;
- (bool)isBeingMarkedForDeletion;
- (bool)isHiddenFromSearch;
- (bool)isMarkedForDeletion;
- (bool)isModernNote;
- (bool)isPasswordProtected;
- (bool)isPlainText;
- (bool)isSharedViaICloud;
- (void)markForDeletion;
- (id)noteAsPlainTextWithoutTitle;
- (id)noteId;
- (id)searchDomainIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableContentKeyPaths;
- (id)searchableItemAttributeSet;
- (id)searchableItemIdentifier;
- (unsigned long long)sequenceNumber;
- (long long)serverIntId;
- (void)setContent:(id)arg1;
- (void)setExternalContentRef:(id)arg1;
- (void)setExternalRepresentation:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsPlainText:(bool)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setServerIntId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)trimmedTitle;
- (long long)visibilityTestingType;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)createAttachmentWithName:(id)arg1;
- (id)folder;
- (id)htmlString;
- (void)setHtmlString:(id)arg1;

@end
