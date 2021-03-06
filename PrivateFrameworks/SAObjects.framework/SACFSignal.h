/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFSignal : SADomainCommand

@property (nonatomic, copy) NSString *flowScriptHint;

+ (id)signal;
+ (id)signalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)flowScriptHint;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setFlowScriptHint:(id)arg1;

@end
