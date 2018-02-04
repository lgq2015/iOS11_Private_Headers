/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {
    <EKEditItemViewControllerDelegate> * _editDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    bool  _modal;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    bool  _showsDoneButton;
    <EKStyleProvider> * _styleProvider;
    unsigned long long  _subitem;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) bool modal;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) unsigned long long subitem;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (void)_saveAndDismissWithForce:(bool)arg1;
- (void)cancel;
- (void)didReceiveMemoryWarning;
- (id)editDelegate;
- (bool)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (double)marginForTableView:(id)arg1;
- (bool)modal;
- (void)popIfNonModal;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)saveAndDismiss;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)arg1 checked:(bool)arg2;
- (void)setEditDelegate:(id)arg1;
- (void)setModal:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setSubitem:(unsigned long long)arg1;
- (bool)showsDoneButton;
- (unsigned long long)subitem;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)validateAllowingAlert:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
