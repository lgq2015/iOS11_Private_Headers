/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *domainObjectIdentifier;
@property (nonatomic, copy) NSString *domainObjectPropertyIdentifier;
@property (nonatomic, copy) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *orthography;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *tokenOffset;

+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectIdentifier;
- (id)domainObjectPropertyIdentifier;
- (id)encodedClassName;
- (id)fullName;
- (id)groupIdentifier;
- (id)language;
- (id)orthography;
- (void)setDomainObjectIdentifier:(id)arg1;
- (void)setDomainObjectPropertyIdentifier:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setTokenOffset:(id)arg1;
- (id)tokenOffset;

@end
