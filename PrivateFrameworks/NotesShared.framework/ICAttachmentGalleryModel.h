/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentGalleryModel : ICAttachmentModel {
    ICCRDTIdentifierOrderedSetVersionedDocument * _attachmentIdentifiersOrderedSetDocument;
}

@property (nonatomic, readonly) CROrderedSet *attachmentIdentifiersOrderedSet;
@property (nonatomic, retain) ICCRDTIdentifierOrderedSetVersionedDocument *attachmentIdentifiersOrderedSetDocument;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addSubAttachment:(id)arg1;
- (void)attachmentDidRefresh:(bool)arg1;
- (bool)attachmentHasMergeableData;
- (id)attachmentIdentifiersOrderedSet;
- (id)attachmentIdentifiersOrderedSetDocument;
- (void)attachmentWillRefresh:(bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (bool)canSaveURL;
- (bool)canSaveURLWithOtherAttachments;
- (void)enumerateSubAttachmentsWithBlock:(id /* block */)arg1;
- (id)firstSubAttachment;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (unsigned long long)indexOfSubAttachmentWithIdentifier:(id)arg1;
- (void)insertSubAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)previewImageTypeUTI;
- (void)removeSubAttachment:(id)arg1;
- (short)sectionForSubAttachments;
- (void)setAttachmentIdentifiersOrderedSetDocument:(id)arg1;
- (bool)shouldGeneratePreviewAfterChangeInSubAttachmentWithIdentifier:(id)arg1;
- (bool)showThumbnailInNoteList;
- (id)singleSubAttachmentAtIndex:(unsigned long long)arg1;
- (id)subAttachmentIdentifierAtIndex:(unsigned long long)arg1;
- (id)subAttachmentIdentifiers;
- (unsigned long long)subAttachmentsCount;
- (id)titleForSubAttachment:(id)arg1;
- (void)undeleteSubAttachments;
- (void)updateAfterLoadWithSubAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentMarkedForDeletionStateAttachmentIsInNote:(bool)arg1;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;
- (id)providerFileTypes;
- (id)quicklookPreviewItems;

@end
