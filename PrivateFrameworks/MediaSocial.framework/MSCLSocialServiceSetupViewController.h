/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSocialServiceSetupViewController : SKUIViewController <UITableViewDataSource, UITableViewDelegate> {
    MSCLAccountStore * _accountStore;
    MSCLConfiguration * _configuration;
    NSArray * _facebookPages;
    MSCLAccount * _facebookPagesAccount;
    NSMutableArray * _sections;
    UITableView * _tableView;
}

@property (nonatomic, readonly) MSCLAccountStore *accountStore;
@property (nonatomic, readonly) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)accountStore;
- (id)configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 accountStore:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
