/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MultiValuePrefsController : UITableViewController {
    NSDictionary * _menuDict;
}

@property (nonatomic, retain) NSDictionary *menuDict;

- (void).cxx_destruct;
- (id)init;
- (id)menuDict;
- (void)setMenuDict:(id)arg1;
- (void)setMultiValue:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
