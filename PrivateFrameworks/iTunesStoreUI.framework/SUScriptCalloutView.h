/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptCalloutView : SUScriptObject {
    bool  _isVisible;
    NSString * _subtitle;
    NSString * _title;
}

@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_menuDidHideNotification:(id)arg1;
- (void)_reloadUntructedString;
- (void)_resetCalloutBar;
- (void)_setupCalloutBar;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)scriptAttributeKeys;
- (void)setSubtitle:(id)arg1;
- (void)setTargetX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (id)subtitle;
- (id)title;

@end
