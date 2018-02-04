/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SABaseCommand : AceObject <SAAceCommand, SAAceSerializable, SiriCoreSessionObject>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)baseCommand;
+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)aceObjectWithDictionaryWithCustomHandling:(id)arg1 context:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (void)siriCore_addSendCompletion:(id /* block */)arg1;
- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
- (bool)siriCore_isRestartable;
- (bool)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (id)siriCore_serializedAceDataError:(id*)arg1;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (bool)siriCore_supportedByLocalSession;
- (bool)siriCore_supportsSendCompletions;

@end
