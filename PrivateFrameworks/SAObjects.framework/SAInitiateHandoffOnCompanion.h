/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAInitiateHandoffOnCompanion : SABaseClientBoundCommand

@property (nonatomic, retain) <SAHandoffPayload> *handoffPayload;

+ (id)initiateHandoffOnCompanion;
+ (id)initiateHandoffOnCompanionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)handoffPayload;
- (bool)requiresResponse;
- (void)setHandoffPayload:(id)arg1;

@end
