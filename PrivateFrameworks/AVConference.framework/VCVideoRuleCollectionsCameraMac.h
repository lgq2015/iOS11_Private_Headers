/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsCameraMac : VCVideoRuleCollectionsCamera {
    unsigned int  _decodeScore;
    unsigned int  _encodeScore;
    <VCHardwareSettingsMacProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (void)computeDecodingScore;
- (void)computeEncodingScore;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (void)resetEncodingRulesForCameraIsHD:(bool)arg1 isWVGA:(bool)arg2;
- (bool)setupH264Rules;
- (bool)setupH264WifiRules;
- (bool)setupHEVCRules;
- (bool)setupRules;
- (bool)useSoftFramerateSwitching;

@end
