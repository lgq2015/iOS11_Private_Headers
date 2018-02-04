/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentMapModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (id)MKMapItem;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)hasPreviews;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)generateAsynchronousPreviews;
- (void)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (bool)needToGeneratePreviews;
- (bool)requiresNetworkToGeneratePreview;

@end
