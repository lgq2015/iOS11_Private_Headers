/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsMomentsEmbeded : VCVideoRuleCollectionsMoments {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (int)getMomentsCapabilities;
- (int)getMomentsCapabilitiesForSupportedDevices;
- (id)initWithHardwareSettings:(id)arg1;

@end
