/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPassbookMediaObject : CKMediaObject {
    UIImage * _icon;
    PKPass * _pass;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) PKPass *pass;

+ (id)UTITypes;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;

- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { double x1; double x2; })arg1 contentAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)icon;
- (id)initWithTransfer:(id)arg1;
- (int)mediaType;
- (id)pass;
- (id)passView;
- (void)setIcon:(id)arg1;
- (void)setPass:(id)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldShowDisclosure;
- (bool)shouldShowViewer;
- (id)subtitle;
- (id)title;

@end
