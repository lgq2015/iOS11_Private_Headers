/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemResultsViewController : SKUIRedeemStepViewController {
    SKUIRedeem * _redeem;
    long long  _redeemCategory;
}

@property (nonatomic, retain) SKUIRedeem *redeem;
@property (nonatomic) long long redeemCategory;

+ (bool)canShowResultsForRedeem:(id)arg1;
+ (id)redeemResultsControllerForRedeem:(id)arg1;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRedeem:(id)arg1;
- (id)redeem;
- (long long)redeemCategory;
- (void)setRedeem:(id)arg1;
- (void)setRedeemCategory:(long long)arg1;
- (void)viewDidLoad;

@end
