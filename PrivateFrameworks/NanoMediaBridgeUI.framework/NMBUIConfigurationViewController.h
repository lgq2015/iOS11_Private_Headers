/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NMBUIConfigurationButton * _confirmButton;
    <NMBUIOnboardingDataSource> * _dataSource;
    UILabel * _footerDescriptionLabel;
    UILabel * _headerDescriptionLabel;
    UITableView * _tableView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_presentInstructionViewController;
- (id)initWithDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
