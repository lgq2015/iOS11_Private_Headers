/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate> {
    id /* block */  _completion;
    SKUIReportAConcernConfiguration * _configuration;
    SKUIReportAConcernReasonDataSource * _dataSource;
    UITableView * _tableView;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) SKUIReportAConcernConfiguration *configuration;
@property (nonatomic, retain) SKUIReportAConcernReasonDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)cancelPressed:(id)arg1;
- (id /* block */)completion;
- (id)configuration;
- (id)dataSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
