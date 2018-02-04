/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObject : SABaseAceObject <SAAceIdentifiable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *identifier;
@property (readonly) Class superclass;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
