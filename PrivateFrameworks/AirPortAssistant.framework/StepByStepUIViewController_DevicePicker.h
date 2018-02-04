/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <TableViewManagerDelegate> {
    UIPopoverController * _popover;
    NSDictionary * _selectedDevice;
    bool  _showSingleBaseTopo;
    NSDictionary * _sourceBase;
    NSDictionary * _sourceNetwork;
    NSDictionary * _targetBase;
    RecommendationActionController * actionController;
    NSString * connectionMedium;
    bool  showFullList;
    NSArray * sortedDevices;
}

@property (nonatomic, retain) RecommendationActionController *actionController;
@property (nonatomic) NSString *connectionMedium;
@property (nonatomic, retain) NSArray *sortedDevices;

- (id)actionController;
- (id)connectionMedium;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)pickerContent;
- (void)setActionController:(id)arg1;
- (void)setConnectionMedium:(id)arg1;
- (void)setSortedDevices:(id)arg1;
- (void)setupPickerTable;
- (bool)showMoreOptions;
- (id)sortedDevices;
- (void)touchInCellAtIndexPath:(id)arg1;
- (void)updateSelections;
- (id)valueForItemOfType:(id)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;
- (void)viewWillAppear:(bool)arg1;

@end
