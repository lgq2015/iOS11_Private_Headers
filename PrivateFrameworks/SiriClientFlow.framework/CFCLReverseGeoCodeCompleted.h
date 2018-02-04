/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCLReverseGeoCodeCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSDictionary *address;
@property (nonatomic, copy) NSString *areasOfInterest;
@property (nonatomic, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *locality;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *region;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)reverseGeoCodeCompleted;
+ (id)reverseGeoCodeCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)address;
- (id)areasOfInterest;
- (id)country;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locality;
- (id)name;
- (id)postalCode;
- (id)region;
- (void)setAddress:(id)arg1;
- (void)setAreasOfInterest:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setRegion:(id)arg1;

@end
