/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryView : UIView <PKPassPaymentSummaryCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _deepLinkingEnabled;
    <PKPassPaymentSummaryViewDelegate> * _delegate;
    PKPaymentMessage * _message;
    NSString * _messageAppLaunchToken;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _pass;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPaymentSummaryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentMessage *message;
@property (nonatomic, readonly) NSString *messageAppLaunchToken;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (bool)_isSectionIndexOfMessage:(long long)arg1;
- (void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(bool)arg3;
- (long long)_sectionIndexOfMessage;
- (void)dealloc;
- (id)delegate;
- (bool)hasContent;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPaymentPass:(id)arg1;
- (void)layoutSubviews;
- (id)message;
- (id)messageAppLaunchToken;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(bool)arg3;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
