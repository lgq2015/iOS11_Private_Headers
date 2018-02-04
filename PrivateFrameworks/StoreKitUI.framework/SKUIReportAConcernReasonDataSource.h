/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernReasonDataSource : NSObject <UITableViewDataSource> {
    NSArray * _reasons;
    NSString * _selectReasonSubtitle;
    NSString * _selectReasonTitle;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *reasons;
@property (nonatomic, copy) NSString *selectReasonSubtitle;
@property (nonatomic, copy) NSString *selectReasonTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTableView:(id)arg1;
- (id)reasons;
- (id)selectReasonSubtitle;
- (id)selectReasonTitle;
- (void)setReasons:(id)arg1;
- (void)setSelectReasonSubtitle:(id)arg1;
- (void)setSelectReasonTitle:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
