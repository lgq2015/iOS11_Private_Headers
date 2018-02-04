/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemIdViewController : UIViewController <SKUIRedeemIdManagerDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIRedeemIdDelegate> * _delegate;
    NSMutableDictionary * _fields;
    SKUIRedeemIdManager * _manager;
    UIBarButtonItem * _nextButton;
    UITableView * _tableView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIRedeemIdDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *fields;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIRedeemIdManager *manager;
@property (nonatomic, retain) UIBarButtonItem *nextButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_adjustInsetsForKeyboardFrameValue:(id)arg1;
- (void)_cancelPressed;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 usingNewTopInset:(double)arg2;
- (id)_fieldForIndexPath:(id)arg1;
- (id)_finalOutputFields;
- (void)_initializeManager;
- (void)_initializeNavigationItem;
- (void)_initializeTableView;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_nextPressed;
- (void)_refreshNavigationItem;
- (void)_reloadFooter;
- (void)_subscribeToKeyboardEvents;
- (void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2;
- (bool)_validateForm;
- (id)clientContext;
- (id)delegate;
- (id)fields;
- (id)initWithClientContext:(id)arg1;
- (id)manager;
- (id)nextButton;
- (void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3;
- (void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
