/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupHandleIntentCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intentResponse;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)handleIntentCompleted;
+ (id)handleIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentResponse;
- (bool)requiresResponse;
- (void)setIntentResponse:(id)arg1;

@end
