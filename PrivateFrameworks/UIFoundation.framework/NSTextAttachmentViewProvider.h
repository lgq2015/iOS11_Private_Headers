/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAttachmentViewProvider : NSObject {
    unsigned long long  _characterIndex;
    NSLayoutManager * _layoutManager;
    NSTextAttachment * _textAttachment;
    bool  _tracksTextAttachmentViewBounds;
    UIView * _view;
}

@property (readonly) unsigned long long characterIndex;
@property NSLayoutManager *layoutManager;
@property NSTextAttachment *textAttachment;
@property bool tracksTextAttachmentViewBounds;
@property (retain) UIView *view;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (unsigned long long)characterIndex;
- (void)dealloc;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (id)layoutManager;
- (void)loadView;
- (void)removeView;
- (void)setLayoutManager:(id)arg1;
- (void)setTextAttachment:(id)arg1;
- (void)setTracksTextAttachmentViewBounds:(bool)arg1;
- (void)setView:(id)arg1;
- (id)textAttachment;
- (bool)tracksTextAttachmentViewBounds;
- (id)view;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;

@end
