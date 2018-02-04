/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSArray *abSources;
@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSNumber *allowUserGeneratedContent;
@property (nonatomic, copy) NSString *anchor;
@property (nonatomic) bool censorSpeech;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *debugFlags;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *deviceCapabilities;
@property (nonatomic, copy) NSString *deviceColor;
@property (nonatomic, copy) NSString *deviceEnclosure;
@property (nonatomic, copy) NSString *deviceVersion;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *fullStorefrontId;
@property (nonatomic) bool handsFree;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *holdToTalkThresholdInMilliseconds;
@property (nonatomic) bool inRetailStoreDemoMode;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSArray *meCards;
@property (nonatomic, retain) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property (nonatomic) bool mediaPlayerExplicitContentDisallowed;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSArray *parentalRestrictions;
@property (nonatomic, copy) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSNumber *storefront;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temperatureUnit;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, retain) SAVoice *ttsVoice;
@property (nonatomic, copy) NSNumber *twentyFourHourTimeDisplay;
@property (nonatomic, copy) NSNumber *uiScale;
@property (nonatomic, copy) NSString *userInterfaceIdiom;
@property (nonatomic) bool voiceOver;
@property (nonatomic, copy) NSNumber *voiceTriggerEnabled;
@property (nonatomic, retain) SAWatchData *watchData;

+ (id)setAssistantData;
+ (id)setAssistantDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)abSources;
- (id)allowUserGeneratedContent;
- (id)anchor;
- (bool)censorSpeech;
- (id)countryCode;
- (id)debugFlags;
- (id)deviceCapabilities;
- (id)deviceColor;
- (id)deviceEnclosure;
- (id)deviceVersion;
- (id)encodedClassName;
- (id)firstName;
- (id)fullStorefrontId;
- (id)groupIdentifier;
- (bool)handsFree;
- (id)holdToTalkThresholdInMilliseconds;
- (bool)inRetailStoreDemoMode;
- (id)lastName;
- (id)meCards;
- (id)mediaContentRatingRestrictions;
- (bool)mediaPlayerExplicitContentDisallowed;
- (id)osVersion;
- (id)parentalRestrictions;
- (id)preferredLanguage;
- (id)region;
- (bool)requiresResponse;
- (void)setAbSources:(id)arg1;
- (void)setAllowUserGeneratedContent:(id)arg1;
- (void)setAnchor:(id)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDebugFlags:(id)arg1;
- (void)setDeviceCapabilities:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceEnclosure:(id)arg1;
- (void)setDeviceVersion:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullStorefrontId:(id)arg1;
- (void)setHandsFree:(bool)arg1;
- (void)setHoldToTalkThresholdInMilliseconds:(id)arg1;
- (void)setInRetailStoreDemoMode:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setMeCards:(id)arg1;
- (void)setMediaContentRatingRestrictions:(id)arg1;
- (void)setMediaPlayerExplicitContentDisallowed:(bool)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setParentalRestrictions:(id)arg1;
- (void)setPreferredLanguage:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)setTemperatureUnit:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setTtsVoice:(id)arg1;
- (void)setTwentyFourHourTimeDisplay:(id)arg1;
- (void)setUiScale:(id)arg1;
- (void)setUserInterfaceIdiom:(id)arg1;
- (void)setVoiceOver:(bool)arg1;
- (void)setVoiceTriggerEnabled:(id)arg1;
- (void)setWatchData:(id)arg1;
- (id)storefront;
- (id)temperatureUnit;
- (id)timeZoneId;
- (id)ttsVoice;
- (id)twentyFourHourTimeDisplay;
- (id)uiScale;
- (id)userInterfaceIdiom;
- (bool)voiceOver;
- (id)voiceTriggerEnabled;
- (id)watchData;

@end
