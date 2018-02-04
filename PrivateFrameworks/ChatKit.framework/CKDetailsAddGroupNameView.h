/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate> {
    <CKDetailsAddGroupNameViewDelegate> * _delegate;
    bool  _enabled;
    NSString * _groupName;
    CKDetailsViewAddGroupNameViewUITextField * _inputField;
    UILabel * _placeholderLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKDetailsAddGroupNameViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKDetailsViewAddGroupNameViewUITextField *inputField;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (readonly) Class superclass;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)commitGroupName;
- (id)delegate;
- (id)groupName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputField;
- (bool)isEnabled;
- (id)placeholderLabel;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setInputField:(id)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
