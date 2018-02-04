/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, NSCoding, NSSecureCoding, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _compactConstraints;
    _AAUIDataclassOptionCache * _dataclassOptionCache;
    <AAUIDataclassPickerViewControllerDelegate> * _delegate;
    NSArray * _expandedConstraints;
    AAUIBuddyView * _tableFooterView;
    AAUIHeaderView * _tableHeaderView;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSDictionary *dataclassOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIDataclassPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AAUIBuddyView *view;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_additionalInformationSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (double)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1;
- (void)_dismissAdditionalInformation:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_nextButtonSelected:(id)arg1;
- (id)_signOutFooterText;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableView;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (id)dataclassOptions;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (double)heightForFooterInTableView:(id)arg1;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchTableViewCellDidUpdateValue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end