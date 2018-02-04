/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface BTDevicePicker : NSObject <UITableViewDataSource, UITableViewDelegate> {
    UIAlertController * _alertView;
    UIWindow * _alertWindow;
    id  _btAlert;
    Class  _btAlertClass;
    BluetoothManager * _btManager;
    id  _btSSPAlert;
    Class  _btSSPRequestClass;
    bool  _checkingPaired;
    PSSpecifierStub * _connectingSpec;
    <BTDevicePickerDelegate> * _delegate;
    NSMutableArray * _deviceList;
    NSPredicate * _predicate;
    unsigned int  _service;
    bool  _showingAlert;
    UITableView * _tableView;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BTDevicePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_btSSPConfirmationHandler:(id)arg1;
- (void)_btSSPNumericComparisonHandler:(id)arg1;
- (void)_btSSPPasskeyDisplayHandler:(id)arg1;
- (void)alertSheetDismissed:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)authenticationRequestHandler:(id)arg1;
- (void)cancelDevicePicker;
- (void)checkAttachTimeout;
- (void)cleanupPairing;
- (void)createAlertWindow;
- (void)dealloc;
- (id)delegate;
- (void)deviceConnectionCompleteHandler:(id)arg1;
- (void)deviceDiscoveryStoppedHandler:(id)arg1;
- (void)deviceFoundHandler:(id)arg1;
- (void)deviceLostHandler:(id)arg1;
- (void)deviceNameChangedHandler:(id)arg1;
- (void)devicePairedHandler:(id)arg1;
- (void)dismissAnimated:(bool)arg1;
- (id)initWithTitle:(id)arg1 service:(unsigned int)arg2 discoveryNameFilter:(id)arg3;
- (void)powerChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;
- (void)showInternal;
- (void)startScanning;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
