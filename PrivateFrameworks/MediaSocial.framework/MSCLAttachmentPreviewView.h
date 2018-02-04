/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAttachmentPreviewView : UIView {
    MSCLAttachment * _attachment;
    UIView * _childView;
    UIButton * _removeButton;
}

@property (nonatomic, readonly) MSCLAttachment *attachment;
@property (nonatomic, readonly) UIControl *removeButton;

- (void).cxx_destruct;
- (id)attachment;
- (id)initWithAttachment:(id)arg1 childView:(id)arg2;
- (id)initWithAttachment:(id)arg1 clientContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)removeButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
