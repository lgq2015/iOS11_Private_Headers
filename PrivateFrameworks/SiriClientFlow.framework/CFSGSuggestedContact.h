/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFSGSuggestedContact : AceObject <SAAceSerializable>

@property (nonatomic, retain) SAPerson *acePerson;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isSignificant;
@property (nonatomic, copy) NSDate *originDate;
@property (nonatomic, copy) NSString *suggestedOriginType;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContact;
+ (id)suggestedContactWithDictionary:(id)arg1 context:(id)arg2;

- (id)acePerson;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isSignificant;
- (id)originDate;
- (void)setAcePerson:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setIsSignificant:(id)arg1;
- (void)setOriginDate:(id)arg1;
- (void)setSuggestedOriginType:(id)arg1;
- (id)suggestedOriginType;

@end
