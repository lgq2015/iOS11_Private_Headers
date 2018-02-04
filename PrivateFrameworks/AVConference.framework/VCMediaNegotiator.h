/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiator : NSObject {
    bool  _isCellular16x9Capable;
    VCMediaNegotiatorLocalConfiguration * _localSettings;
    VCMediaNegotiatorAudioResults * _negotiatedAudioSettings;
    VCMediaNegotiatorCaptionsResults * _negotiatedCaptionsSettings;
    VCMediaNegotiatorMomentsResults * _negotiatedMomentsSettings;
    VCMediaNegotiatorVideoResults * _negotiatedScreenSettings;
    VCMediaNegotiatorResults * _negotiatedSettings;
    VCMediaNegotiatorVideoResults * _negotiatedVideoSettings;
    bool  _negotiationDone;
    bool  _usePreNegotiation;
}

@property (nonatomic, readonly) bool isCaller;
@property (nonatomic, readonly) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (nonatomic, readonly) VCMediaNegotiatorAudioResults *negotiatedAudioSettings;
@property (nonatomic, readonly) VCMediaNegotiatorCaptionsResults *negotiatedCaptionsSettings;
@property (nonatomic, readonly) VCMediaNegotiatorMomentsResults *negotiatedMomentsSettings;
@property (nonatomic, readonly) VCMediaNegotiatorVideoResults *negotiatedScreenSettings;
@property (nonatomic, readonly) VCMediaNegotiatorResults *negotiatedSettings;
@property (nonatomic, readonly) VCMediaNegotiatorVideoResults *negotiatedVideoSettings;
@property (nonatomic, readonly) bool usePreNegotiation;

- (bool)addBandwidthSettingsForMediaBlob:(id)arg1 operatingMode:(int)arg2 connectionType:(int)arg3;
- (int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2;
- (bool)canDecodeVideo:(id)arg1;
- (bool)canEncodeVideo:(id)arg1;
- (void)dealloc;
- (id)getPreferredScreenPayloadList;
- (id)getPreferredVideoPayloadList:(id)arg1;
- (id)initWithLocalSettings:(id)arg1;
- (bool)isCaller;
- (bool)isCellular16x9EncodeCapable;
- (id)localSettings;
- (void)negotiateAudioAllowRecording:(id)arg1;
- (bool)negotiateAudioDTXPayload:(id)arg1;
- (bool)negotiateAudioPrimaryPayload:(id)arg1;
- (bool)negotiateAudioREDPayload:(id)arg1;
- (void)negotiateAudioSecondaryPayloads:(id)arg1;
- (bool)negotiateAudioSettings:(id)arg1;
- (bool)negotiateCaptionsWithCaptionsSettings:(id)arg1;
- (bool)negotiateMomentsWithMomentsSettings:(id)arg1;
- (void)negotiateRTCPFB:(id)arg1;
- (bool)negotiateScreenSettings:(id)arg1;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(bool)arg3;
- (bool)negotiateVideoSettings:(id)arg1;
- (id)negotiatedAudioSettings;
- (id)negotiatedCaptionsSettings;
- (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg1 remoteFeaturesString:(id)arg2;
- (id)negotiatedMomentsSettings;
- (id)negotiatedScreenSettings;
- (id)negotiatedSettings;
- (id)negotiatedVideoSettings;
- (id)newCompressedBlob:(id)arg1;
- (id)newDecompressedBlob:(id)arg1;
- (id)newInviteBlob;
- (id)newResponseBlob;
- (bool)processInviteBlob:(id)arg1;
- (bool)processParameterSets:(id)arg1 videoResults:(id)arg2;
- (bool)processResponseBlob:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg1;
- (bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 localVideoRuleCollection:(id)arg4 remoteVideoSettings:(id)arg5 negotiatedVideoSettings:(id)arg6 isScreen:(bool)arg7;
- (id)selectVideoFeatureString:(id)arg1 selectedPayload:(int)arg2;
- (bool)setupAudioWithNegotiatedSettings:(id)arg1;
- (bool)setupBandwidthSettingsForMediaBlob:(id)arg1;
- (void)setupCaptionsForMediaBlob:(id)arg1;
- (void)setupMomentsForMediaBlob:(id)arg1;
- (bool)setupScreenWithNegotiatedSettings:(id)arg1;
- (bool)setupVideoWithNegotiatedSettings:(id)arg1;
- (bool)usePreNegotiation;

@end
