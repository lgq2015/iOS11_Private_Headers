/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) bool eager;
@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, retain) SAUIGetResponseAlternatives *responseAlternatives;
@property (nonatomic, copy) NSString *resultId;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)speechRecognized;
+ (id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (bool)eager;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)processedAudioDuration;
- (id)recognition;
- (bool)requiresResponse;
- (id)responseAlternatives;
- (id)resultId;
- (id)sessionId;
- (void)setEager:(bool)arg1;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setRecognition:(id)arg1;
- (void)setResponseAlternatives:(id)arg1;
- (void)setResultId:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_bestTextInterpretation;
- (id)af_correctionContext;
- (bool)af_isUserUtterance;
- (bool)af_isUtterance;
- (id)af_userUtteranceValue;
- (bool)af_waitsForConfirmation;

@end
