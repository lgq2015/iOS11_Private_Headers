/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPreferenceCardEntry : NSObject {
    NSString * _displayName;
    bool  _isSelectable;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    bool  _shouldShowCardUI;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool isSelectable;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic) bool shouldShowCardUI;

- (void).cxx_destruct;
- (id)displayName;
- (bool)isSelectable;
- (id)pass;
- (id)paymentApplication;
- (void)setDisplayName:(id)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setPass:(id)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setShouldShowCardUI:(bool)arg1;
- (bool)shouldShowCardUI;

@end
