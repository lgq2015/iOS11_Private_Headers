/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic, retain) SADomainObject *addFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SADomainObject *identifier;
@property (nonatomic, retain) SADomainObject *removeFields;
@property (nonatomic, retain) SADomainObject *setFields;
@property (readonly) Class superclass;

+ (id)domainObjectUpdate;
+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;

- (id)addFields;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)removeFields;
- (bool)requiresResponse;
- (void)setAddFields:(id)arg1;
- (id)setFields;
- (void)setIdentifier:(id)arg1;
- (void)setRemoveFields:(id)arg1;
- (void)setSetFields:(id)arg1;

@end
