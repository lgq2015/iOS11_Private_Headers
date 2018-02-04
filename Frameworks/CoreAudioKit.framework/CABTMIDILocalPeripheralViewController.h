/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    long long  advertiseTimeout;
    NSTimer * advertiseTimer;
    bool  advertising;
    AMSBTLEAdvertisementManager * advertisingManager;
    bool  didCleanup;
    long long  fullRefreshCounter;
    UIActivityIndicatorView * indicator;
    bool  isErrorMessage;
    NSTimer * messageTimer;
    UITextField * serviceNameField;
    NSString * statusString;
    NSString * theServiceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)activateController:(id)arg1;
- (void)advertiseServiceSwitchToggled:(id)arg1;
- (bool)advertiseServiceWithName:(id)arg1 completionBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)advertiseTimerFired:(id)arg1;
- (id)advertisedServiceName;
- (bool)changeServiceNameTo:(id)arg1 completionBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)cleanup;
- (void)deactivateController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (bool)disconnectLocalPeripheral;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)messageTimerFired:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setStatusString:(id)arg1 animateIndicator:(bool)arg2 isError:(bool)arg3;
- (id)statusString;
- (bool)stopAdvertisingServiceWithCompletionBlock:(id /* block */)arg1 error:(id*)arg2;
- (void)stopTimers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (id)title;
- (void)updateAdvertiseUI;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
