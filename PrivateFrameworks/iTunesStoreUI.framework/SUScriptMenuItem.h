/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMenuItem : SUScriptObject {
    bool  _enabled;
    NSString * _title;
    id  _userInfo;
}

@property bool enabled;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)_sendDidChange;
- (id)attributeKeys;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)scriptAttributeKeys;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

@end
