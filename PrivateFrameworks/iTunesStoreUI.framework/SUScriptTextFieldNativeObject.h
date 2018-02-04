/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {
    SUScriptTextFieldDelegate * _textFieldDelegate;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) double width;

- (id)_nativeObjectDelegate;
- (void)_sendScriptDidChange;
- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)destroyNativeObject;
- (long long)keyboardType;
- (id)placeholder;
- (bool)resignFirstResponder;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setupNativeObject;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)value;
- (double)width;

@end
