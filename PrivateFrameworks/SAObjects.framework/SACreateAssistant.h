/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSData *activationToken;
@property (nonatomic, copy) NSString *connectionMode;
@property (nonatomic, copy) NSString *connectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *linkedAssistantId;
@property (nonatomic, copy) NSString *linkedSpeechId;
@property (nonatomic, copy) NSData *linkedValidationData;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *validationData;

+ (id)createAssistant;
+ (id)createAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)connectionMode;
- (id)connectionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)linkedAssistantId;
- (id)linkedSpeechId;
- (id)linkedValidationData;
- (bool)requiresResponse;
- (void)setActivationToken:(id)arg1;
- (void)setConnectionMode:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLinkedAssistantId:(id)arg1;
- (void)setLinkedSpeechId:(id)arg1;
- (void)setLinkedValidationData:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (void)setValidationData:(id)arg1;
- (id)speechId;
- (id)validationData;

@end
