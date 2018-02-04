/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISTouchIDDialog : ISDialog {
    NSString * _body;
    bool  _isFree;
    NSLock * _lock;
    SSPaymentSheet * _paymentSheet;
    NSString * _username;
}

@property (nonatomic, copy) NSString *body;
@property (copy) NSString *fallbackExplanation;
@property (copy) NSString *fallbackMessage;
@property (nonatomic) bool isFree;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)_init;
- (void)_parseDialogDictionary:(id)arg1;
- (id)body;
- (id)buttonForButtonType:(long long)arg1;
- (id)fallbackExplanation;
- (id)fallbackMessage;
- (id)initWithDialogDictionary:(id)arg1;
- (bool)isFree;
- (id)paymentSheet;
- (void)setBody:(id)arg1;
- (void)setFallbackExplanation:(id)arg1;
- (void)setFallbackMessage:(id)arg1;
- (void)setIsFree:(bool)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
