/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    SKUIClientContext * _clientContext;
    UIColor * _color;
    SKUIColorScheme * _colorScheme;
    <SKUIProductPageChildViewControllerDelegate> * _delegate;
    <SKUIProductPageChildViewController> * _delegateSender;
    UIColor * _evenColor;
    SKUIProductPageHeaderViewController * _headerViewController;
    NSArray * _sections;
    SKUIProductPageTableView * _tableView;
    SKUILayoutCache * _textLayoutCache;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageChildViewControllerDelegate> *delegate;
@property (nonatomic) <SKUIProductPageChildViewController> *delegateSender;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, retain) SKUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (id)_tableView;
- (id)_textLayoutRequestWithText:(id)arg1;
- (id)clientContext;
- (id)colorScheme;
- (void)dealloc;
- (id)delegate;
- (id)delegateSender;
- (id)headerViewController;
- (id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollToView:(id)arg1 animated:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)sections;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateSender:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textLayoutCache;
- (void)viewWillAppear:(bool)arg1;

@end
