/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentTableModel : ICAttachmentModel {
    ICTableVersionedDocument * _tableDocument;
}

@property (nonatomic, readonly) ICTable *table;
@property (nonatomic, retain) ICTableVersionedDocument *tableDocument;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(bool)arg1;
- (void)attachmentWillRefresh:(bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (bool)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackTitle;
- (void)mergeTablePrimitiveData;
- (bool)mergeWithMergeableData:(id)arg1;
- (void)noteWillAddOrRemovePassword;
- (bool)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (id)searchableTextContentInNote;
- (void)setTableDocument:(id)arg1;
- (id)table;
- (id)tableDocument;
- (id)textContentInNote;
- (void)updateAttachmentByMergingWithTableDoc:(id)arg1;
- (void)willMarkAttachmentForDeletion;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)htmlString;

@end
