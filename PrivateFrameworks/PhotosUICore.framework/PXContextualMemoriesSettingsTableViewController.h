/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <CNContactPickerDelegate, MKMapViewDelegate> {
    UIView * _progressIndicatorView;
    PXContextualMemoriesSettings * _settings;
    bool  _showsDatePicker;
    bool  _showsLocationPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *progressIndicatorView;
@property (nonatomic, retain) PXContextualMemoriesSettings *settings;
@property (nonatomic) bool showsDatePicker;
@property (nonatomic) bool showsLocationPicker;
@property (readonly) Class superclass;

+ (id)title;

- (void).cxx_destruct;
- (void)_didChangeDatePicker:(id)arg1;
- (void)_didPressResetAll:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (id)_indexPathForDatePicker;
- (id)_indexPathForDateValue;
- (id)_indexPathForLocationPicker;
- (id)_indexPathForLocationValue;
- (id)_indexPathForPeopleValue;
- (void)_installProgressIndicatorView;
- (bool)_isDatePickerCellAtIndexPath:(id)arg1;
- (bool)_isLocationPickerCellAtIndexPath:(id)arg1;
- (bool)_isPeopleValueCellAtIndexPath:(id)arg1;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_regionForLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)arg1;
- (long long)_sectionForDate;
- (long long)_sectionForLocation;
- (long long)_sectionForPeople;
- (long long)_sectionForSettingOfClass:(Class)arg1;
- (void)_showContactsPicker;
- (void)_tableView:(id)arg1 selectionDidUpdateForRowAtIndexPath:(id)arg2;
- (void)_updateDatePickerHidden;
- (void)_updateLocationPickerHidden;
- (void)contactPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progressIndicatorView;
- (void)setProgressIndicatorView:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setShowsDatePicker:(bool)arg1;
- (void)setShowsLocationPicker:(bool)arg1;
- (id)settings;
- (bool)showsDatePicker;
- (bool)showsLocationPicker;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
