/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchButtonItem : UIBarButtonItem {
    PUSearchButtonItemCustomView * _customView;
    UINavigationItem * _navigationItem;
    bool  _nudgesSearchIcon;
    UISearchBar * _searchBar;
    <UISearchBarDelegate> * _searchBarDelegate;
    UIView * _searchIcon;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _searchIconDefaultBounds;
    bool  _showingSearchBar;
    bool  _wantsShowingSearchBar;
}

@property (nonatomic) double maxSearchBarWidth;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic) bool nudgesSearchIcon;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic) <UISearchBarDelegate> *searchBarDelegate;
@property (nonatomic, readonly) bool showingSearchBar;

- (void).cxx_destruct;
- (id)_allNavigationButtonItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetBoundsForSearchBarInNavigationBar:(id)arg1;
- (id)initWithNavigationItem:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (double)maxSearchBarWidth;
- (void)navigationBarDidUpdate;
- (id)navigationItem;
- (bool)nudgesSearchIcon;
- (id)searchBar;
- (id)searchBarDelegate;
- (void)setMaxSearchBarWidth:(double)arg1;
- (void)setNudgesSearchIcon:(bool)arg1;
- (void)setSearchBarDelegate:(id)arg1;
- (void)setShowingSearchBar:(bool)arg1 animated:(bool)arg2;
- (bool)showingSearchBar;

@end
