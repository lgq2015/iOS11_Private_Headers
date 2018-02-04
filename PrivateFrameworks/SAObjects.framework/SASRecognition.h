/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASRecognition : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *phrases;
@property (nonatomic) long long sentenceConfidence;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *utterances;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)recognition;
+ (id)recognitionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phrases;
- (long long)sentenceConfidence;
- (void)setPhrases:(id)arg1;
- (void)setSentenceConfidence:(long long)arg1;
- (void)setUtterances:(id)arg1;
- (id)utterances;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_bestTextInterpretationWithRefId:(id)arg1 sessionId:(id)arg2;
- (id)af_correctionContextWithRefId:(id)arg1 sessionId:(id)arg2;
- (id)af_speechPhrases;
- (id)af_speechUtterances;
- (id)af_userUtteranceValueWithRefId:(id)arg1 sessionId:(id)arg2;

@end
