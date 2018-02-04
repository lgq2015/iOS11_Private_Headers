/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {
    <CDPRemoteSecretEntryDelegate> * _delegate;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    bool  _hasNumericSecret;
    NSNumber * _numericSecretLength;
    long long  _remainingAttempts;
    CDPDevice * _remoteRecoveryDevice;
    unsigned long long  _validationState;
    CDPRemoteDeviceSecretValidator * _validator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CDPRemoteDeviceSecretValidator *validator;

- (void).cxx_destruct;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didEnterValidRemoteSecret:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)escapeOffer;
- (id)initWithDevice:(id)arg1 validator:(id)arg2 delegate:(id)arg3;
- (id)initWithIsNumeric:(bool)arg1 numericLength:(id)arg2 validator:(id)arg3 delegate:(id)arg4;
- (id)initWithValidator:(id)arg1;
- (id)pinInstructionsPrompt;
- (bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (void)setEscapeOffer:(id)arg1;
- (void)setPane:(id)arg1;
- (void)showIncorrectRemoteSecretAlertForPasscode:(id)arg1 withRecoveryError:(id)arg2 completion:(id /* block */)arg3;
- (bool)simplePIN;
- (id)title;
- (bool)useProgressiveDelays;
- (bool)validatePIN:(id)arg1;
- (id)validator;
- (void)viewDidDisappear:(bool)arg1;

@end
