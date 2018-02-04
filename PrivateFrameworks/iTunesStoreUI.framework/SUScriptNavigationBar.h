/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem *backNavigationItem;
@property long long barStyle;
@property (readonly) long long barStyleBlack;
@property (readonly) long long barStyleDefault;
@property (retain) SUScriptButton *leftButton;
@property (retain) <SUScriptNavigationItem> *leftItem;
@property (readonly) NSArray *navigationItems;
@property (retain) NSString *prompt;
@property (retain) SUScriptButton *rightButton;
@property (retain) <SUScriptNavigationItem> *rightItem;
@property (readonly) SUScriptNavigationItem *topNavigationItem;
@property (copy) id translucent;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyTopNavigationItem;
- (id)_nativeNavigationBar;
- (id)_topNavigationItem;
- (id)attributeKeys;
- (id)backNavigationItem;
- (long long)barStyle;
- (long long)barStyleBlack;
- (long long)barStyleDefault;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (id)init;
- (id)initWithNativeNavigationBar:(id)arg1;
- (id)leftButton;
- (id)leftItem;
- (id)navigationItems;
- (id)prompt;
- (id)rightButton;
- (id)rightItem;
- (id)scriptAttributeKeys;
- (void)setBackNavigationItem:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setLeftButton:(id)arg1 animated:(bool)arg2;
- (void)setLeftItem:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(bool)arg2;
- (void)setNavigationItems:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setRightButton:(id)arg1 animated:(bool)arg2;
- (void)setRightItem:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(bool)arg2;
- (void)setTopNavigationItem:(id)arg1;
- (void)setTranslucent:(id)arg1;
- (void)tearDownUserInterface;
- (id)topNavigationItem;
- (id)translucent;

@end
