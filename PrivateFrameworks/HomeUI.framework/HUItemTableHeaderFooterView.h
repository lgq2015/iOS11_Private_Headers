/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView <UITextViewDelegate> {
    NSLayoutConstraint * _bottomSpacingConstraint;
    NSArray * _constraints;
    bool  _includeBottomSpacing;
    UITextView * _messageTextView;
    <HUTextInteractionHandling> * _textInteractionHandler;
}

@property (nonatomic, copy) NSAttributedString *attributedMessage;
@property (nonatomic, retain) NSLayoutConstraint *bottomSpacingConstraint;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeBottomSpacing;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) UITextView *messageTextView;
@property (nonatomic) unsigned long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic) <HUTextInteractionHandling> *textInteractionHandler;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (double)_bottomSpacing;
- (id)attributedMessage;
- (id)bottomSpacingConstraint;
- (id)constraints;
- (bool)includeBottomSpacing;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)message;
- (id)messageTextView;
- (unsigned long long)numberOfLines;
- (void)setAttributedMessage:(id)arg1;
- (void)setBottomSpacingConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIncludeBottomSpacing:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setTextInteractionHandler:(id)arg1;
- (id)textInteractionHandler;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateConstraints;

@end
