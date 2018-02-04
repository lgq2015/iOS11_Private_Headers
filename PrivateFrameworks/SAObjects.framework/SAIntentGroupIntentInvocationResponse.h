/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (nonatomic) bool backgroundLaunch;
@property (nonatomic, copy) NSString *launchId;
@property (nonatomic, copy) NSArray *parameters;
@property (nonatomic, copy) NSString *utterance;

+ (id)intentInvocationResponse;
+ (id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2;

- (bool)backgroundLaunch;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)launchId;
- (id)parameters;
- (bool)requiresResponse;
- (void)setBackgroundLaunch:(bool)arg1;
- (void)setLaunchId:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;

@end
