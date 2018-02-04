/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponse : NSObject <INCacheableContainer, INGenericIntentResponse, INIntentResponseExport, NSCopying, NSSecureCoding> {
    _INPBIntentResponse * _backingStore;
    long long  _code;
    _INPBGenericIntentResponse * _responseMessagePBRepresentation;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) bool _shouldForwardIntentToApp;
@property (nonatomic, readonly, copy) _INPBIntentResponse *backingStore;
@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *propertiesByName;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUserActivity *userActivity;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (void)initialize;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_impl;
- (long long)_intentHandlingStatus;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_payloadResponseMessageData;
- (id)_responseMessagePBRepresentation;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (bool)_shouldForwardIntentToApp;
- (id)backingStore;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (id)propertiesByName;
- (id)protoData;
- (void)setPropertiesByName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (id)userActivity;

@end
