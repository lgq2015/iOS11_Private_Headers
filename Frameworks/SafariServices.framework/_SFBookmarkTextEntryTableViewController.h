/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    <_SFBookmarkTextEntryTableViewControllerDelegate> * _delegate;
    NSString * _initialText;
    _SFBookmarkTextEntryTableViewCell * _textEntryCell;
}

- (void).cxx_destruct;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)dealloc;
- (id)initWithBookmarkInfoViewField:(unsigned long long)arg1 text:(id)arg2 autocapitalizationType:(long long)arg3 autocorrectionType:(long long)arg4 delegate:(id)arg5;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
