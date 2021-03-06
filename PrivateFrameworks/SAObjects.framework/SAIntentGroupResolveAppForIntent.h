/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appsList;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;

+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)appsList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (bool)requiresResponse;
- (void)setAppsList:(id)arg1;
- (void)setIntent:(id)arg1;

@end
