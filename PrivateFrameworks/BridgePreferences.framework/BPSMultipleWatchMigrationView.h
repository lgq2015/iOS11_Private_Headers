/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDataSource, UITableViewDelegate> {
    BPSMultipleWatchMigrationPickerTableView * _devicesTable;
    NSArray * _migratableDevices;
    NSMutableDictionary * _selectedStates;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BPSMultipleWatchMigrationPickerTableView *devicesTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *migratableDevices;
@property (nonatomic, retain) NSMutableDictionary *selectedStates;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)devicesTable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)migratableDevices;
- (id)selectedMigrationDevices;
- (id)selectedStates;
- (void)setDevicesTable:(id)arg1;
- (void)setMigratableDevices:(id)arg1;
- (void)setSelectedStates:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (double)tableHeight;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
