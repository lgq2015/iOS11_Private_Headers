/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {
    _UIDocumentSearchListController * _resultsController;
    UISearchController * _searchController;
    NSLayoutConstraint * _searchFieldLeftConstraint;
    NSLayoutConstraint * _searchFieldRightConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIDocumentSearchListController *resultsController;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSLayoutConstraint *searchFieldLeftConstraint;
@property (nonatomic, retain) NSLayoutConstraint *searchFieldRightConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 resultsController:(id)arg2;
- (void)layoutSubviews;
- (id)resultsController;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (id)searchController;
- (id)searchFieldLeftConstraint;
- (id)searchFieldRightConstraint;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResultsController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchFieldLeftConstraint:(id)arg1;
- (void)setSearchFieldRightConstraint:(id)arg1;

@end
