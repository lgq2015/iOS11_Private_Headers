/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFDiagnosticsViewController : UITableViewController {
    NSString * _comment;
    id /* block */  _saveHandler;
    bool  _saving;
}

@property (nonatomic, copy) NSString *comment;
@property (nonatomic, copy) id /* block */ saveHandler;
@property (nonatomic) bool saving;

- (void).cxx_destruct;
- (id)comment;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id /* block */)saveHandler;
- (bool)saving;
- (void)setComment:(id)arg1;
- (void)setSaveHandler:(id /* block */)arg1;
- (void)setSaving:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
