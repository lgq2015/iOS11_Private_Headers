/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceDomainSignal : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *appIdHints;
@property (nonatomic, copy) NSString *domain;

+ (id)aceDomainSignal;
+ (id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2;

- (id)appIdHints;
- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setAppIdHints:(id)arg1;
- (void)setDomain:(id)arg1;

@end
