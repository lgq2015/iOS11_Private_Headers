/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSimpleMenuViewController : SUMenuViewController {
    NSString * _cancelButtonTitle;
    NSArray * _titles;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic, copy) NSArray *titles;

- (void)_cancelAction:(id)arg1;
- (id)cancelButtonTitle;
- (void)dealloc;
- (id)initWithTitles:(id)arg1;
- (bool)isMenuItemEnabledAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)reloadContentSizeForViewInPopover;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (id)titles;

@end
