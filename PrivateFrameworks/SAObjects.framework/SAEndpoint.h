/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *operations;
@property (nonatomic, copy) NSString *providerId;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAuthentication;

+ (id)endpoint;
+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operations;
- (id)providerId;
- (void)setOperations:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setSupportsAuthentication:(bool)arg1;
- (bool)supportsAuthentication;

@end
