/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFProvideContext : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, copy) NSString *contextVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)provideContext;
+ (id)provideContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)contextVersion;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContext:(id)arg1;
- (void)setContextVersion:(id)arg1;

@end
