/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate> {
    id /* block */  _dataExchangeBlock;
    id /* block */  _exchangeCompleteBlock;
    id /* block */  _hideSetupCodeBlock;
    id /* block */  _promptForSetupCodeBlock;
    id /* block */  _showSetupCodeBlock;
}

@property (nonatomic, copy) id /* block */ dataExchangeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ exchangeCompleteBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ hideSetupCodeBlock;
@property (nonatomic, copy) id /* block */ promptForSetupCodeBlock;
@property (nonatomic, copy) id /* block */ showSetupCodeBlock;
@property (readonly) Class superclass;

- (id /* block */)dataExchangeBlock;
- (void)dealloc;
- (id /* block */)exchangeCompleteBlock;
- (id /* block */)hideSetupCodeBlock;
- (void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;
- (void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithCompletion:(id /* block */)arg2;
- (void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(id /* block */)arg3;
- (void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
- (void)pairingSessionHideSetupCode:(id)arg1;
- (id /* block */)promptForSetupCodeBlock;
- (void)setDataExchangeBlock:(id /* block */)arg1;
- (void)setExchangeCompleteBlock:(id /* block */)arg1;
- (void)setHideSetupCodeBlock:(id /* block */)arg1;
- (void)setPromptForSetupCodeBlock:(id /* block */)arg1;
- (void)setShowSetupCodeBlock:(id /* block */)arg1;
- (id /* block */)showSetupCodeBlock;

@end
