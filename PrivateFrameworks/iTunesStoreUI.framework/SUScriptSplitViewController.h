/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController *firstViewController;
@property (retain) id minimumPaneSize;
@property (retain) SUScriptViewController *secondViewController;
@property (retain) id splitPosition;
@property (retain) id splitShadowColor;
@property (retain) NSNumber *splitShadowOpacity;
@property (retain) NSNumber *splitShadowRadius;
@property (retain) NSString *splitType;
@property (retain) NSString *title;
@property bool usesSharedPlaceholder;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)_splitViewController;
- (id)attributeKeys;
- (id)firstViewController;
- (id)minimumPaneSize;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (id)secondViewController;
- (void)setFirstViewController:(id)arg1;
- (void)setMinimumPaneSize:(id)arg1;
- (void)setSecondViewController:(id)arg1;
- (void)setSplitPosition:(id)arg1;
- (void)setSplitShadowColor:(id)arg1;
- (void)setSplitShadowOpacity:(id)arg1;
- (void)setSplitShadowRadius:(id)arg1;
- (void)setSplitType:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesSharedPlaceholder:(bool)arg1;
- (id)splitPosition;
- (id)splitShadowColor;
- (id)splitShadowOpacity;
- (id)splitShadowRadius;
- (id)splitType;
- (id)title;
- (bool)usesSharedPlaceholder;

@end
