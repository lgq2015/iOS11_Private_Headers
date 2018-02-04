/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>

@property (nonatomic) bool applySASToFirstPartyDomains;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *listOfSiriKitEnabledDomains;
@property (readonly) Class superclass;
@property (nonatomic) bool useSASAutoSelectionFeature;

+ (id)siriKitSetting;
+ (id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2;

- (bool)applySASToFirstPartyDomains;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listOfSiriKitEnabledDomains;
- (void)setApplySASToFirstPartyDomains:(bool)arg1;
- (void)setListOfSiriKitEnabledDomains:(id)arg1;
- (void)setUseSASAutoSelectionFeature:(bool)arg1;
- (bool)useSASAutoSelectionFeature;

@end
