/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernDetailsDataSource : NSObject <UITableViewDataSource> {
    NSString * _placeholder;
    NSString * _privacyNote;
    NSString * _selectedReason;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *privacyNote;
@property (nonatomic, copy) NSString *selectedReason;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTableView:(id)arg1;
- (id)placeholder;
- (id)privacyNote;
- (id)selectedReason;
- (void)setPlaceholder:(id)arg1;
- (void)setPrivacyNote:(id)arg1;
- (void)setSelectedReason:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
