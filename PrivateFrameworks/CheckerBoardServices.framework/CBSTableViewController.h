/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CheckerBoardServices.framework/CheckerBoardServices
 */

@interface CBSTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSAttributedString * _attributedDetailDescriptionText;
    UIView * _containerFooterView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerFooterViewFrame;
    NSString * _detailDescriptionText;
    BFFPaneHeaderView * _headerView;
    UITableView * _tableView;
    NSString * _titleText;
}

@property (nonatomic, copy) NSAttributedString *attributedDetailDescriptionText;
@property (nonatomic, retain) UIView *containerFooterView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFooterViewFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailDescriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_setupFooterView;
- (void)_setupTableView;
- (void)_setupView;
- (void)_updateHeaderView;
- (id)attributedDetailDescriptionText;
- (id)containerFooterView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFooterViewFrame;
- (id)detailDescriptionText;
- (id)footerView;
- (double)headerToFooterViewSpacing;
- (id)headerView;
- (id)iconName;
- (id)iconTintColor;
- (bool)isTitleAlignedByLastBaseline;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAttributedDetailDescriptionText:(id)arg1;
- (void)setContainerFooterView:(id)arg1;
- (void)setContainerFooterViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDetailDescriptionText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleText;
- (void)viewDidLoad;

@end
