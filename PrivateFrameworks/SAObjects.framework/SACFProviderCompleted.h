/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)providerCompleted;
+ (id)providerCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)clientProviderCompletedWithRefId:(id)arg1 status:(long long)arg2 executionResults:(id)arg3 logs:(id)arg4;
+ (id)failureResponseWithAceId:(id)arg1 logs:(id)arg2;
+ (id)successResponseWithAceId:(id)arg1 logs:(id)arg2;

@end