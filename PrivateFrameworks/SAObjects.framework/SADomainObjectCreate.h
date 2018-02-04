/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SADomainObject *object;
@property (readonly) Class superclass;

+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (bool)requiresResponse;
- (void)setObject:(id)arg1;

@end
