/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <CNAvatarViewDelegate, UIViewControllerPreviewingDelegate> {
    NSCalendar * _calendar;
    PKPeerPaymentContactResolver * _contactResolver;
    NSDate * _dateFromYear;
    long long  _detailViewStyle;
    PKPaymentPass * _paymentPass;
    <PKPaymentDataProvider> * _paymentServiceDataProvider;
    PKPeerPaymentController * _peerPaymentController;
    PKPaymentTransactionCellController * _transactionCellController;
    NSDateFormatter * _transactionMonthFormatter;
    NSArray * _transactionsByMonth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchDataWithCompletion:(id /* block */)arg1;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (id)_transactionMonthFormatter;
- (id)_transactionsInYearTitleString;
- (id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 paymentPass:(id)arg3 detailViewStyle:(long long)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentController:(id)arg7;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
