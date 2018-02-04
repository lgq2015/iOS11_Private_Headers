/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {
    bool  _allAttachmentsAreImages;
    CALayer * _frameLayer;
    NSMutableArray * _frameViews;
    CALayer * _glossLayer;
    UILabel * _imageCountLabel;
    long long  _imageQuantity;
    long long  _numPreviewImagesAdded;
}

+ (unsigned long long)displayedFrameMaximum;

- (void).cxx_destruct;
- (id)_itemCountString;
- (bool)_shouldDisplayImageCountLabel;
- (void)addPreviewImage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)initWithPrincipalAttachments:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setItemCountString:(id)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)sizeToFit;
- (void)traitCollectionDidChange:(id)arg1;

@end
