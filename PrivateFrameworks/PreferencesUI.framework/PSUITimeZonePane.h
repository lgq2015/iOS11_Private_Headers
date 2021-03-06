/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITimeZonePane : PSEditingPane <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _cities;
    UITableView * _completionTable;
    UISearchBar * _searchBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (readonly) Class superclass;

+ (void)setTimeZone:(id)arg1;

- (void).cxx_destruct;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)searchBar;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textValueChanged:(id)arg1;
- (void)updateTableInsets;

@end
