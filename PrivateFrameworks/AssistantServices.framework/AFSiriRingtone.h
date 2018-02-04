/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriRingtone : NSObject {
    NSString * _callDestinationID;
    long long  _callDestinationIDType;
    NSString * _callServiceSpeakableName;
    long long  _callerIDType;
    NSArray * _contacts;
    NSString * _displayedCallerID;
    bool  _languageMismatch;
    AFVoiceInfo * _voiceInfo;
    NSString * _voiceLanguage;
}

@property (nonatomic, copy) NSString *callDestinationID;
@property (nonatomic) long long callDestinationIDType;
@property (nonatomic, copy) NSString *callServiceSpeakableName;
@property (nonatomic) long long callerIDType;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic, copy) NSString *displayedCallerID;
@property (nonatomic, readonly) NSString *textToSpeak;
@property (nonatomic, readonly) AFVoiceInfo *voiceInfo;

- (void).cxx_destruct;
- (id)_escapeCallDestinationIDString:(id)arg1 forType:(long long)arg2;
- (id)_escapeCallerIDString:(id)arg1 forType:(long long)arg2;
- (id)_generateSpokenTextForContacts:(id)arg1 voiceLanguage:(id)arg2 displayedCallerID:(id)arg3 callerIDType:(long long)arg4 callDestinationID:(id)arg5 callDestinationIDType:(long long)arg6 callServiceSpeakableName:(id)arg7;
- (void)_phoneticInfoForContact:(id)arg1 languageCode:(id)arg2 firstName:(id*)arg3 middleName:(id*)arg4 lastName:(id*)arg5 nickname:(id*)arg6;
- (id)_phoneticNamesForContact:(id)arg1 languageCode:(id)arg2;
- (id)_spokenTextForCallDestinationID:(id)arg1 ofType:(long long)arg2 callServiceSpeakableName:(id)arg3 languageCode:(id)arg4;
- (id)_spokenTextForCallerID:(id)arg1 ofType:(long long)arg2 rawCaller:(id)arg3 rawCallerType:(long long)arg4 languageCode:(id)arg5;
- (id)_spokenTextForContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForOneContact:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForThreeContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForTwoContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)callDestinationID;
- (long long)callDestinationIDType;
- (id)callServiceSpeakableName;
- (long long)callerIDType;
- (id)contacts;
- (id)displayedCallerID;
- (id)init;
- (id)initWithContacts:(id)arg1;
- (void)setCallDestinationID:(id)arg1;
- (void)setCallDestinationIDType:(long long)arg1;
- (void)setCallServiceSpeakableName:(id)arg1;
- (void)setCallerIDType:(long long)arg1;
- (void)setContacts:(id)arg1;
- (void)setDisplayedCallerID:(id)arg1;
- (id)textToSpeak;
- (id)voiceInfo;

@end
