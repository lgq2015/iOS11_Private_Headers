/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray * _segments;
    long long  _style;
}

@property (nonatomic, readonly) SUSegmentedControl *activeSegmentedControl;
@property (copy) NSString *cancelButtonTitle;
@property (readonly) unsigned long long controlStateDisabled;
@property (readonly) unsigned long long controlStateHighlighted;
@property (readonly) unsigned long long controlStateNormal;
@property (readonly) unsigned long long controlStateSelected;
@property long long maximumNumberOfItems;
@property double maximumWidth;
@property (copy) NSString *moreListTitle;
@property (nonatomic, retain) SUSegmentedControl *nativeSegmentedControl;
@property (nonatomic, readonly) long long nativeSelectedIndex;
@property (readonly) NSNumber *noSegmentIndex;
@property (nonatomic, readonly) NSArray *rawSegments;
@property (retain) id segments;
@property (retain) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id showsMoreListAutomatically;
@property (nonatomic, readonly) SUStorePageViewController *storePageViewController;
@property (retain) NSString *style;
@property (copy) id tintColor;
@property long long tintStyle;
@property (readonly) long long tintStyleDark;
@property (readonly) long long tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (void)_setRawSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)attributeKeys;
- (id)cancelButtonTitle;
- (unsigned long long)controlStateDisabled;
- (unsigned long long)controlStateHighlighted;
- (unsigned long long)controlStateNormal;
- (unsigned long long)controlStateSelected;
- (void)dealloc;
- (void)hideMoreListAnimated:(bool)arg1;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (long long)maximumNumberOfItems;
- (double)maximumWidth;
- (id)moreListTitle;
- (id)nativeSegmentedControl;
- (long long)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)noSegmentIndex;
- (id)rawSegments;
- (id)scriptAttributeKeys;
- (id)segments;
- (id)selectedIndex;
- (id)selectedSegmentIndex;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setNativeSegmentedControl:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setShowsMoreListAutomatically:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)showMoreListAnimated:(bool)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(bool)arg3;
- (id)showsMoreListAutomatically;
- (id)storePageViewController;
- (id)style;
- (id)tintColor;
- (long long)tintStyle;
- (long long)tintStyleDark;
- (long long)tintStyleDefault;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;

@end
