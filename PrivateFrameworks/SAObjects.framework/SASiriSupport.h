/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *authToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *endpoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *useCases;

+ (id)siriSupport;
+ (id)siriSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)authToken;
- (id)encodedClassName;
- (id)endpoints;
- (id)groupIdentifier;
- (void)setAuthToken:(id)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setUseCases:(id)arg1;
- (id)useCases;

@end
