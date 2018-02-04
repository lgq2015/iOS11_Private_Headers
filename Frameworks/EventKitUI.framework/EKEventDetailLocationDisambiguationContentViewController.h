/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <MKMapViewDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    MKCircleRenderer * _circleRenderer;
    id /* block */  _completionBlock;
    unsigned long long  _currentLayoutParadigm;
    bool  _done;
    bool  _geocoding;
    NSSet * _iPadConstraints;
    NSCache * _iconCache;
    NSObject<OS_dispatch_queue> * _iconRenderQueue;
    EKStructuredLocation * _location;
    MKMapView * _mapView;
    MKPointAnnotation * _pin;
    NSMutableArray * _pois;
    bool  _rowSelectionInitialized;
    UISearchBar * _searchBar;
    UIView * _separatorLine;
    NSSet * _splitConstraints;
    UITableView * _tableView;
    NSSet * _tallConstraints;
    bool  _textChanged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_constraintsForParadigm:(unsigned long long)arg1;
- (void)_createConstraints;
- (void)_deselectCircle;
- (void)_selectCircle;
- (void)_selectRow:(unsigned long long)arg1;
- (bool)_shouldEnableAddButton;
- (void)_updateMapRegion;
- (void)cancelTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (id)initWithLocation:(id)arg1 pois:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
