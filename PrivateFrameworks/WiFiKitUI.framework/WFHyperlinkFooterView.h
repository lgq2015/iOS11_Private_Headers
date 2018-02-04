/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFHyperlinkFooterView : UIView <UITextViewDelegate> {
    NSURL * _URL;
    SEL  _action;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _linkRange;
    id  _target;
    NSString * _text;
    UITextView * _textView;
}

@property (retain) NSURL *URL;
@property SEL action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property (readonly) Class superclass;
@property id target;
@property (retain) NSString *text;

- (void).cxx_destruct;
- (id)URL;
- (void)_linkify;
- (SEL)action;
- (id)init;
- (void)layoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setAction:(SEL)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)target;
- (id)text;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
