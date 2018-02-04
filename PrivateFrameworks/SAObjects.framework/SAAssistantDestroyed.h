/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAssistantDestroyed : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *assistantId;

+ (id)assistantDestroyed;
+ (id)assistantDestroyedWithDictionary:(id)arg1 context:(id)arg2;

- (id)assistantId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAssistantId:(id)arg1;

@end
