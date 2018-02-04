/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {
    <VCHardwareSettingsEmbeddedProtocol> * _hardwareSettings;
}

+ (id)sharedInstance;

- (struct _VCBitrateConfiguration { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)bitrateConfiguration;
- (void)dealloc;
- (id)description;
- (struct _VCHardwareConfiguration { long long x1; struct _VCVideoFormat { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; unsigned int x3; struct _VCVideoFormat {} *x4; unsigned int x5; struct _VCVideoFormat {} *x6; struct _VCBitrateConfiguration { unsigned short x_7_1_1; unsigned short x_7_1_2; unsigned short x_7_1_3; unsigned short x_7_1_4; } x7; }*)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;
- (double)preferredAspectRatio;
- (bool)setupH264Rules;
- (bool)setupHEVCRules;
- (bool)setupRules;
- (bool)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(struct _VCVideoFormat { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg4 formatListCount:(unsigned int)arg5 preferredFormat:(id)arg6 supportsHighDef:(bool*)arg7;
- (bool)supportsHEVCWifiDecoding;
- (bool)supportsHEVCWifiEncoding;

@end
