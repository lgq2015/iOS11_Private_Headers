/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntent : NSObject <INGenericIntent, INIntentExport, NSCopying, NSSecureCoding> {
    PBCodable * _backingStore;
    NSString * _identifier;
}

@property (nonatomic, copy) PBCodable *backingStore;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSArray *cd_recipients;
@property (readonly) bool cd_saveToKnowledgeStore;
@property (readonly) bool cd_saveToPeopleStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, readonly) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *intentDescription;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly) NSString *launchId;
@property (nonatomic, copy) NSDictionary *parametersByName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (void)initialize;
+ (id)intentDescription;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_impl;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_typedBackingStore;
- (id)backingStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentDescription;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (bool)isGenericIntent;
- (id)launchId;
- (id)parametersByName;
- (id)protoData;
- (void)setBackingStore:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (long long)triggerMethod;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToKnowledgeStore;
- (bool)cd_saveToPeopleStore;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmDelete:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

@end
