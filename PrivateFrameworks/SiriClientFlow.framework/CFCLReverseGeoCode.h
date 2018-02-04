/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCLReverseGeoCode : SADomainCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)latitude;
- (id)longitude;
- (bool)requiresResponse;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;

@end