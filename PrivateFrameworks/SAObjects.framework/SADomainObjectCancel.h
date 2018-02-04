/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SADomainObject *identifier;
@property (readonly) Class superclass;

+ (id)domainObjectCancel;
+ (id)domainObjectCancelWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;

@end
