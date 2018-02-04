/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchTemplateController_iOS : _TVBgImageLoadingViewController <IKAppKeyboardDelegate, UISearchResultsUpdating> {
    IKViewElement * _collectionListElement;
    IKAppKeyboard * _ikKeyboard;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    IKViewElement * _nonResultsElement;
    UIView * _nonResultsView;
    _TVStackCollectionViewController * _resultsViewController;
    UISearchController * _searchController;
    IKTextFieldElement * _searchFieldElement;
    IKViewElement * _viewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewElement;

@end
