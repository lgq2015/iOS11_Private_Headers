/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedInvitationCell : PUFeedCell <UITextViewDelegate> {
    UIButton * __acceptButon;
    UIView * __bottomSeparatorView;
    UIButton * __declineButton;
    UITextView * __textView;
    NSString * _inviteeDisplayName;
    NSString * _inviterDisplayName;
    bool  _offerToReportAsJunk;
    NSString * _title;
}

@property (setter=_setAcceptButton:, nonatomic, retain) UIButton *_acceptButon;
@property (setter=_setBottomSeparatorView:, nonatomic, retain) UIView *_bottomSeparatorView;
@property (setter=_setDeclineButton:, nonatomic, retain) UIButton *_declineButton;
@property (setter=_setTextView:, nonatomic, retain) UITextView *_textView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_acceptButon;
- (id)_bottomSeparatorView;
- (id)_declineButton;
- (id)_delegate;
- (void)_replyButtonAction:(id)arg1;
- (void)_reportJunkButtonAction:(id)arg1;
- (void)_setAcceptButton:(id)arg1;
- (void)_setBottomSeparatorView:(id)arg1;
- (void)_setDeclineButton:(id)arg1;
- (void)_setTextView:(id)arg1;
- (id)_textView;
- (void)_updateTextView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 inviterDisplayName:(id)arg2 inviteeDisplayName:(id)arg3 offerToReportAsJunk:(bool)arg4;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
