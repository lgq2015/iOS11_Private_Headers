/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFKnownNetworkScoreViewController : UITableViewController {
    NSDictionary * _score;
}

@property (nonatomic, retain) NSDictionary *score;

- (void).cxx_destruct;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)score;
- (void)setScore:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
