/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFPasscodeCreationManager : NSObject {
    bool  _acceptedWeakPasscode;
    NSString * _constraintFailedInstructions;
    <BFFPasscodeCreationDelegate> * _delegate;
    bool  _numericPasscodeEntry;
    NSString * _passcode;
    unsigned long long  _passcodeState;
    long long  _simplePasscodeEntryLength;
}

@property (nonatomic) bool acceptedWeakPasscode;
@property (nonatomic, copy) NSString *constraintFailedInstructions;
@property (nonatomic, readonly) NSString *constraintInstructions;
@property (nonatomic) <BFFPasscodeCreationDelegate> *delegate;
@property (getter=isNumericPasscodeEntry, nonatomic) bool numericPasscodeEntry;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic) unsigned long long passcodeState;
@property (nonatomic) long long simplePasscodeEntryLength;

+ (id)sharedPasscodeManager;

- (void).cxx_destruct;
- (void)_applyPasscode;
- (void)acceptWeakPasscode:(bool)arg1;
- (bool)acceptedWeakPasscode;
- (id)constraintFailedInstructions;
- (id)constraintInstructions;
- (id)delegate;
- (id)init;
- (bool)isNumericPasscodeEntry;
- (bool)isSimplePasscodeEntry;
- (id)passcode;
- (unsigned long long)passcodeState;
- (void)reset;
- (void)setAcceptedWeakPasscode:(bool)arg1;
- (void)setConstraintFailedInstructions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumericPasscodeEntry:(bool)arg1;
- (void)setPasscode:(id)arg1;
- (void)setPasscodeState:(unsigned long long)arg1;
- (void)setSimplePasscodeEntryLength:(long long)arg1;
- (long long)simplePasscodeEntryLength;
- (void)transitionToNextPasscodeStateForInput:(id)arg1;

@end
