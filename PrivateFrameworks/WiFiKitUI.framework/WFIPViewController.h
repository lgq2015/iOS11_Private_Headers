/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFIPViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _addresses;
    NSArray * _prefixes;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *prefixes;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)addresses;
- (id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)prefixes;
- (void)setAddresses:(id)arg1;
- (void)setPrefixes:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
