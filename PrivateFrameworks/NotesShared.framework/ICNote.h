/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNote : ICCloudSyncingObject <ICCloudObject, ICNoteUI, ICSearchIndexableNote, NSTextStorageDelegate, TTMergeableStringDelegate> {
    TTMergeableStringVersionedDocument * _document;
    TTVectorMultiTimestamp * _lastNotifiedTimestamp;
    TTVectorMultiTimestamp * _lastViewedTimestamp;
    NSUUID * _replicaIDOverride;
    ICMergableDictionary * _replicaIDToUserIDDict;
    id  _reservedForCollaborationColorManager;
    id  _reservedForTextStorage;
    NSUUID * _uuid;
    TTVectorMultiTimestamp * archivedTimestamp;
    NSData * decryptedData;
    <ICNoteMergeabilityDelegate> * mergeabilityDelegate;
    bool  needsRefresh;
    bool  needsToSaveLastViewedTimestamp;
    bool  preventReleasingTextStorage;
    bool  shouldAddMediaAsynchronously;
}

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, copy) TTVectorMultiTimestamp *archivedTimestamp;
@property (nonatomic, readonly) NSArray *attachmentActivityItemsForSharing;
@property (nonatomic) short attachmentViewType;
@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic, readonly, retain) ICCollaborationColorManager *collaborationColorManager;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSData *decryptedData;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TTMergeableStringVersionedDocument *document;
@property (nonatomic, readonly) TTMergeableStringVersionedDocument *documentWithoutCreating;
@property (nonatomic, retain) ICFolder *folder;
@property (nonatomic, retain) NSDate *folderModificationDate;
@property (getter=isHandwritingRecognitionEnabled, nonatomic) bool handwritingRecognitionEnabled;
@property (nonatomic, readonly) bool hasUnreadChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isModernNote;
@property (nonatomic) bool isPinned;
@property (nonatomic, retain) NSDate *lastNotifiedDate;
@property (nonatomic, copy) TTVectorMultiTimestamp *lastNotifiedTimestamp;
@property (nonatomic, retain) NSData *lastNotifiedTimestampData;
@property (nonatomic, retain) NSDate *lastViewedModificationDate;
@property (nonatomic, copy) TTVectorMultiTimestamp *lastViewedTimestamp;
@property (nonatomic, retain) NSData *lastViewedTimestampData;
@property (nonatomic, retain) NSString *legacyContentHashAtImport;
@property (nonatomic, retain) NSString *legacyImportDeviceIdentifier;
@property (nonatomic, retain) NSString *legacyManagedObjectIDURIRepresentation;
@property (nonatomic, retain) NSDate *legacyModificationDateAtImport;
@property (nonatomic, retain) NSNumber *legacyNoteWasPlainText;
@property (nonatomic) <ICNoteMergeabilityDelegate> *mergeabilityDelegate;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) bool needsRefresh;
@property (nonatomic) bool needsToSaveLastViewedTimestamp;
@property (nonatomic, retain) ICNoteData *noteData;
@property (nonatomic, retain) NSNumber *noteHasChanges;
@property (nonatomic) short paperStyleType;
@property (nonatomic) bool preventReleasingTextStorage;
@property (nonatomic, readonly) long long primaryWritingDirection;
@property (nonatomic, retain) ICFolder *primitiveFolder;
@property (nonatomic, retain) NSUUID *replicaIDOverride;
@property (nonatomic, readonly, retain) ICMergableDictionary *replicaIDToUserIDDict;
@property (nonatomic, retain) NSData *replicaIDToUserIDDictData;
@property (nonatomic, retain) id reservedForCollaborationColorManager;
@property (nonatomic, retain) id reservedForTextStorage;
@property (nonatomic, copy) PKInk *selectedInk;
@property (nonatomic, retain) NSString *selectedInkColorString;
@property (nonatomic, retain) NSString *selectedInkIdentifier;
@property (nonatomic) bool shouldAddMediaAsynchronously;
@property (nonatomic) bool shouldShowHighlights;
@property (nonatomic, retain) NSString *snippet;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TTTextStorage *textStorage;
@property (nonatomic, readonly) TTTextStorage *textStorageWithoutCreating;
@property (nonatomic, retain) NSString *thumbnailAttachmentIdentifier;
@property (nonatomic, readonly) TTVectorMultiTimestamp *timestamp;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) ICAttachment *titleSourceAttachment;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allNotesInContext:(id)arg1;
+ (unsigned long long)countOfAllNotesInContext:(id)arg1;
+ (unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfVisibleNotesInContext:(id)arg1;
+ (id)createNoteFromNote:(id)arg1 inFolder:(id)arg2 isPasswordProtected:(bool)arg3 removingOriginalNote:(bool)arg4;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(bool)arg2 removingOriginalNote:(bool)arg3;
+ (id)defaultTitleForEmptyNote;
+ (void)deleteEmptyNote:(id)arg1;
+ (void)deleteNote:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingHasUnreadChanges;
+ (id)keyPathsForValuesAffectingIsEditable;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (unsigned long long)maxNoteAttachments;
+ (unsigned long long)maxNoteTextLength;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteInContext:(id)arg1;
+ (id)newEmptyNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteWithUUID:(id)arg1 context:(id)arg2;
+ (id)newFetchRequestForNotes;
+ (id)newNoteWithoutIdentifierInContext:(id)arg1;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(bool)arg2 context:(id)arg3;
+ (id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2;
+ (id)noteWithUUID:(id)arg1 context:(id)arg2;
+ (id)notesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)predicateForNote:(id)arg1;
+ (id)predicateForPinnedNotes;
+ (id)predicateForSearchableNotes;
+ (id)predicateForVisibleNotes;
+ (id)predicateForVisibleNotesIncludingTrash:(bool)arg1;
+ (void)purgeAllNotesInContext:(id)arg1;
+ (void)purgeNote:(id)arg1;
+ (void)redactNote:(id)arg1;
+ (id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)snippetForPasswordProtectedNote:(id)arg1;
+ (bool)supportsUserSpecificRecords;
+ (id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)visibleNotesInContext:(id)arg1;

- (void).cxx_destruct;
- (id)accountName;
- (id)addAttachment;
- (id)addAttachmentWithData:(id)arg1 filename:(id)arg2;
- (id)addAttachmentWithFileURL:(id)arg1;
- (id)addAttachmentWithFileURL:(id)arg1 updateFileBasedAttributes:(bool)arg2;
- (id)addAttachmentWithFileWrapper:(id)arg1;
- (id)addAttachmentWithIdentifier:(id)arg1;
- (id)addAttachmentWithRemoteFileURL:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 updateFileBasedAttributes:(bool)arg4;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filenameExtension:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 updateFileBasedAttributes:(bool)arg3;
- (id)addGalleryAttachment;
- (void)addMediaToAttachment:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addReplicaID:(id)arg1 forUserID:(id)arg2;
- (void)addShareParticipantsToAttributeSet:(id)arg1;
- (id)addTableAttachment;
- (id)addTableAttachmentWithRows:(id)arg1;
- (id)addTableAttachmentWithTableData:(id)arg1;
- (id)addTableAttachmentWithText:(id)arg1;
- (id)addURLAttachmentWithURL:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (bool)allowsNewTextLength:(unsigned long long)arg1;
- (id)archivedTimestamp;
- (bool)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1;
- (id)attachmentForWebThumbnail;
- (id)attachmentWithIdentifier:(id)arg1;
- (id)attachmentsInOrder;
- (id)attributedString;
- (id)authorsExcludingCurrentUser;
- (void)awakeFromFetch;
- (void)beginEditing;
- (bool)canAddAttachment;
- (bool)canAddAttachments:(unsigned long long)arg1;
- (bool)canBeRootShareObject;
- (bool)canBeSharedViaICloud;
- (id)childCloudObjects;
- (id)cloudAccount;
- (bool)containsAttachmentsUnsupportedInPasswordProtection;
- (id)contentInfoText;
- (id)dateForCurrentSortType;
- (void)dealloc;
- (void)decrypt;
- (id)decryptedData;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (void)deleteFromLocalDatabase;
- (void)didAcceptShare:(id)arg1;
- (void)didChangeNoteText;
- (void)didRefresh:(bool)arg1;
- (id)document;
- (id)documentWithoutCreating;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)endEditing;
- (void)enumerateAttachmentsInOrderUsingBlock:(id /* block */)arg1;
- (void)fixBrokenReferences;
- (id)folderName;
- (bool)hasAllMandatoryFields;
- (bool)hasLoadedDocument;
- (bool)hasThumbnailImage;
- (bool)hasUnreadChanges;
- (id)ic_loggingValues;
- (bool)isDeletedOrInTrash;
- (bool)isEditable;
- (bool)isEmpty;
- (bool)isHiddenFromSearch;
- (bool)isInICloudAccount;
- (bool)isModernNote;
- (bool)isSharedViaICloud;
- (bool)isVisible;
- (id)lastNotifiedTimestamp;
- (id)lastViewedTimestamp;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 withMergePolicy:(long long)arg2;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeFoldersFromRecord:(id)arg1;
- (void)mergeNotePrimitiveData;
- (long long)mergePolicyForRecord:(id)arg1;
- (void)mergeReplicaAndUserIDsFromDictionary:(id)arg1;
- (void)mergeTextData:(id)arg1 record:(id)arg2 mergePolicy:(long long)arg3;
- (void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachments;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachmentsInBackground;
- (unsigned long long)mergeWithNoteData:(id)arg1;
- (unsigned long long)mergeWithNoteDocument:(id)arg1;
- (id)mergeabilityDelegate;
- (id)mergeableString;
- (bool)needsRefresh;
- (bool)needsToDeleteShare;
- (bool)needsToFetchAfterServerRecordChanged:(id)arg1;
- (bool)needsToSaveLastViewedTimestamp;
- (id)newlyCreatedRecord;
- (id)newlyCreatedUserSpecificRecord;
- (id)noteAsPlainText;
- (id)noteAsPlainTextWithoutTitle;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (bool)populateReplicaIDToUserIDDictIfNecessary;
- (bool)preventReleasingTextStorage;
- (id)quotedTitle;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForAttachment:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSnippet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForTitle:(bool*)arg1;
- (id)recordType;
- (id)recordZoneName;
- (void)refreshNoteTextFromDataStore;
- (void)regenerateTitle:(bool)arg1 snippet:(bool)arg2;
- (void)regenerateTitleAndSnippetIfNecessaryForEdit:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)replaceWithDocument:(id)arg1;
- (id)replicaID;
- (id)replicaIDOverride;
- (id)replicaIDToUserIDDict;
- (bool)requiresLegacyTombstoneAfterDeletion;
- (id)reservedForCollaborationColorManager;
- (id)reservedForTextStorage;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveNoteData;
- (id)searchDomainIdentifier;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultType;
- (unsigned long long)searchResultsSection;
- (id)searchableContentKeyPaths;
- (id)searchableItemAttributeSet;
- (id)searchableItemIdentifier;
- (id)searchableString;
- (void)setAccount:(id)arg1;
- (void)setArchivedTimestamp:(id)arg1;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setDecryptedData:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setLastNotifiedTimestamp:(id)arg1;
- (void)setLastViewedTimestamp:(id)arg1;
- (void)setLegacyManagedObjectID:(id)arg1;
- (void)setMergeabilityDelegate:(id)arg1;
- (void)setNeedsInitialFetchFromCloud:(bool)arg1;
- (void)setNeedsRefresh:(bool)arg1;
- (void)setNeedsToSaveLastViewedTimestamp:(bool)arg1;
- (void)setPreventReleasingTextStorage:(bool)arg1;
- (void)setReplicaIDOverride:(id)arg1;
- (void)setReservedForCollaborationColorManager:(id)arg1;
- (void)setReservedForTextStorage:(id)arg1;
- (void)setShouldAddMediaAsynchronously:(bool)arg1;
- (void)setShouldShowHighlights:(bool)arg1;
- (id)shareTitle;
- (id)shareType;
- (bool)shouldAddMediaAsynchronously;
- (bool)shouldReleaseDocumentWhenTurningIntoFault;
- (bool)shouldShowHighlights;
- (bool)supportsDeletionByTTL;
- (bool)supportsEncryptedValuesDictionary;
- (id)textDataDecryptedIfNecessary;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeForSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSearchableString:(id)arg2;
- (id)timestamp;
- (id)trimmedTitle;
- (void)unmarkForDeletion;
- (void)updateChangeCount;
- (bool)updateLastViewedTimestampWithCurrentTimestamp;
- (void)updateTimestampWithUnserializedChanges;
- (id)uuid;
- (long long)visibilityTestingType;
- (id)visibleAttachments;
- (id)visibleTopLevelAttachments;
- (bool)wantsUndoCommands;
- (void)willAddOrRemovePassword;
- (void)willRefresh:(bool)arg1;
- (void)willTurnIntoFault;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)attributedStringFromHTMLString:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (id)hexStringForColor:(struct UIColor { Class x1; }*)arg1;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (bool)isDefaultColor:(struct UIColor { Class x1; }*)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(id /* block */)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;

- (void)announceAccessibilitySelectionChangedByMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (id)attachmentActivityItemsForSharing;
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(bool)arg2;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromTableData:(id)arg1;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)collaborationColorManager;
- (void)createMissingAttachmentsInTextStorage;
- (id)dataForTypeIdentifier:(id)arg1;
- (void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
- (void)fetchThumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)htmlString;
- (id)htmlStringWithAttachmentConversionHandler:(id /* block */)arg1;
- (id)htmlStringWithAttachments:(bool)arg1;
- (id)htmlStringWithHTMLAttachments;
- (bool)isHandwritingRecognitionEnabled;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (void)notifyTextViewsNoteDidMerge;
- (void)notifyTextViewsNoteWillMerge;
- (long long)primaryWritingDirection;
- (void)save;
- (void)saveAfterDelay;
- (id)selectedInk;
- (void)setHandwritingRecognitionEnabled:(bool)arg1;
- (void)setSelectedInk:(id)arg1;
- (bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (id)textStorage;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)textStorageDidChange:(id)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorageWillChange:(id)arg1;
- (void)textStorageWillProcessEditing:(id)arg1;
- (id)textStorageWithoutCreating;
- (struct UIImage { Class x1; }*)thumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 imageScaling:(unsigned long long*)arg3 showAsFileIcon:(bool*)arg4 isMovie:(bool*)arg5 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (id)uiAttributedString;
- (void)updateModificationDateAndChangeCount;
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(bool)arg1;
- (void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;

@end
