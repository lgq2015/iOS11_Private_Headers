/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    <RUITableFooterDelegate> * _delegate;
    id /* block */  _linkAction;
    RUILinkLabel * _linkLabel;
    NSURL * _linkURL;
    bool  _usesCustomTextAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUITableFooterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ linkAction;
@property (nonatomic, readonly) UIButton *linkButton;
@property (nonatomic, readonly) RUILinkLabel *linkLabel;
@property (nonatomic, retain) NSURL *linkURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (void)_linkPressed;
- (id)delegate;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)linkAction;
- (id)linkButton;
- (id)linkLabel;
- (id)linkURL;
- (void)setDelegate:(id)arg1;
- (void)setLinkAction:(id /* block */)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textLabel;

@end
