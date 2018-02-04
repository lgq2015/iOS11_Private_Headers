/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchBarWrapper : UIView {
    bool  _enabled;
    UISearchBar * _searchBar;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UISearchBar *searchBar;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (bool)canBecomeFocused;
- (bool)isEnabled;
- (id)searchBar;
- (void)setEnabled:(bool)arg1;
- (void)setSearchBar:(id)arg1;

@end
