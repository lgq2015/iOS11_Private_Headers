/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultsView : UITableView <UITableViewDataSource, UITableViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsetAdjustments;
    <SKUIRedeemResultsViewDelegate> * _resultsDelegate;
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SKUIRedeemResultsViewDelegate> *resultsDelegate;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)resultsDelegate;
- (id)sections;
- (void)setResultsDelegate:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
