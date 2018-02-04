/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFPEXQuery : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic, copy) NSArray *criteriaFields;
@property (nonatomic, copy) NSString *criteriaSemanticTag;
@property (nonatomic, copy) NSString *criteriaSubType;
@property (nonatomic, copy) NSString *criteriaTimeType;
@property (nonatomic, copy) NSString *criteriaType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, copy) NSArray *people;
@property (nonatomic) long long queryLimit;
@property (nonatomic, copy) NSNumber *queryTimeOut;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSString *socialLabelType;
@property (readonly) Class superclass;

+ (id)query;
+ (id)queryWithDictionary:(id)arg1 context:(id)arg2;

- (id)criteriaFields;
- (id)criteriaSemanticTag;
- (id)criteriaSubType;
- (id)criteriaTimeType;
- (id)criteriaType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (id)localeIdentifier;
- (id)people;
- (long long)queryLimit;
- (id)queryTimeOut;
- (id)recipients;
- (bool)requiresResponse;
- (void)setCriteriaFields:(id)arg1;
- (void)setCriteriaSemanticTag:(id)arg1;
- (void)setCriteriaSubType:(id)arg1;
- (void)setCriteriaTimeType:(id)arg1;
- (void)setCriteriaType:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setPeople:(id)arg1;
- (void)setQueryLimit:(long long)arg1;
- (void)setQueryTimeOut:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSocialLabelType:(id)arg1;
- (id)socialLabelType;

@end
