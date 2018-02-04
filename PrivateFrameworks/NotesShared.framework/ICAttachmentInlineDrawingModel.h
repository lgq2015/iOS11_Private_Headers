/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (nonatomic, readonly) PKDrawing *handwritingRecognitionDrawing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property (getter=isHandwritingRecognitionEnabled, nonatomic) bool handwritingRecognitionEnabled;
@property (getter=isTitleQueryEnabled, nonatomic) bool titleQueryEnabled;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtention:(id)arg1;
- (bool)hasPreviews;
- (bool)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (bool)shouldShowInContentInfoText;
- (id)standaloneTitleForNote;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItem;
- (id)activityItems;
- (bool)actuallyMergeWithDrawing:(id)arg1;
- (void)attachmentModelDealloc;
- (bool)generatePreviewsDuringCloudActivity;
- (void)generatePreviewsInOperation:(id)arg1;
- (id)handwritingRecognitionDrawing;
- (id)handwritingRecognitionDrawingQueue;
- (struct UIImage { Class x1; }*)imageForActivityItem;
- (bool)isHandwritingRecognitionEnabled;
- (bool)isTitleQueryEnabled;
- (bool)mergeWithDrawing:(id)arg1;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)mergeableDataForCopying;
- (bool)needToGeneratePreviews;
- (id)newDrawingFromMergeableData;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
- (void)setHandwritingRecognitionEnabled:(bool)arg1;
- (void)setTitleQuery:(id)arg1;
- (void)setTitleQueryEnabled:(bool)arg1;
- (id)titleQuery;
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;

@end
