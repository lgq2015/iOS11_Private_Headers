/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {
    SUScriptFunction * _shouldFocusFunction;
    NSString * _style;
}

@property (retain) NSString *autocapitalizationType;
@property (retain) NSString *autocorrectionType;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *keyboardType;
@property (retain) NSString *placeholder;
@property (retain) WebScriptObject *shouldFocusFunction;
@property (readonly) NSString *style;
@property (readonly) Class superclass;
@property (retain) NSString *value;
@property (retain) NSNumber *width;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_autocapitalizationType;
- (id)_autocorrectionType;
- (id)_boxedNativeTextField;
- (id)_className;
- (id)_copyPlaceholder;
- (id)_copyValue;
- (double)_defaultWidth;
- (id)_keyboardType;
- (id)_newTextField;
- (bool)_styleIsValid:(id)arg1;
- (id)attributeKeys;
- (id)autocapitalizationType;
- (id)autocorrectionType;
- (bool)blur;
- (id)buttonItem;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (bool)focus;
- (id)init;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)keyboardType;
- (id)placeholder;
- (id)scriptAttributeKeys;
- (void)setAutocapitalizationType:(id)arg1;
- (void)setAutocorrectionType:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setNativeObjectWithBarButtonItem:(id)arg1;
- (void)setNativeObjectWithSearchBar:(id)arg1;
- (void)setNativeObjectWithTextField:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setShouldFocusFunction:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)shouldFocusFunction;
- (id)style;
- (id)value;
- (id)width;

@end
