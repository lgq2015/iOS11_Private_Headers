/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (int)getMomentsCapabilities;
- (id)initWithHardwareSettings:(id)arg1;

@end
