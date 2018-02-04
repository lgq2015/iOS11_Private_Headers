/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageOptionTip : PSStorageTip {
    NSString * _confirmationButtonTitle;
    NSString * _confirmationText;
    NSObject<PSStorageOptionTipDelegate> * _delegate;
    bool  _mayCauseDataLoss;
}

@property (nonatomic, retain) NSString *activatingString;
@property (nonatomic) float activationPercent;
@property (retain) NSString *confirmationButtonTitle;
@property (retain) NSString *confirmationText;
@property NSObject<PSStorageOptionTipDelegate> *delegate;
@property (retain) NSString *enableButtonTitle;
@property (nonatomic) long long eventualGain;
@property (nonatomic) long long immediateGain;
@property bool mayCauseDataLoss;

- (void).cxx_destruct;
- (id)activatingString;
- (float)activationPercent;
- (id)confirmationButtonTitle;
- (id)confirmationText;
- (id)delegate;
- (id)enableButtonTitle;
- (void)enableOption;
- (long long)eventualGain;
- (id)getValue:(id)arg1;
- (long long)immediateGain;
- (id)init;
- (bool)mayCauseDataLoss;
- (void)setActivatingString:(id)arg1;
- (void)setActivationPercent:(float)arg1;
- (void)setConfirmationButtonTitle:(id)arg1;
- (void)setConfirmationText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableButtonTitle:(id)arg1;
- (void)setEventualGain:(long long)arg1;
- (void)setImmediateGain:(long long)arg1;
- (void)setMayCauseDataLoss:(bool)arg1;
- (void)setValue:(id)arg1 specifier:(id)arg2;

@end