/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelectionBase {
    NSArray * _h264LevelsPreference;
    NSArray * _h264PacketizationPreference;
    NSArray * _h264ProfilesPreference;
    HMDSupportedRTPConfiguration * _rtpConfiguration;
    HMDVideoCodec * _selectedCodecType;
    NSNumber * _selectedFramerate;
    HMDH264Level * _selectedLevel;
    HMDPacketizationMode * _selectedPacketizationMode;
    HMDH264Profile * _selectedProfile;
    HMDSelectedVideoParameters * _selectedVideoParameters;
    HMDCameraVideoTier * _selectedVideoTier;
    HMDStreamingCapabilities * _streamingCapabilities;
    HMDSupportedVideoStreamConfiguration * _supportedVideoStreamConfiguration;
    NSNumber * _syncSource;
    NSArray * _validVideoParameterCombinations;
    NSArray * _videoCodecsPreference;
    NSArray * _videoResolutionsPreference;
    HMDCameraVideoTierParameters * _videoTierParameters;
}

@property (nonatomic, readonly) NSArray *h264LevelsPreference;
@property (nonatomic, readonly) NSArray *h264PacketizationPreference;
@property (nonatomic, readonly) NSArray *h264ProfilesPreference;
@property (nonatomic, readonly) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (nonatomic, retain) HMDVideoCodec *selectedCodecType;
@property (nonatomic, retain) NSNumber *selectedFramerate;
@property (nonatomic, retain) HMDH264Level *selectedLevel;
@property (nonatomic, retain) HMDPacketizationMode *selectedPacketizationMode;
@property (nonatomic, retain) HMDH264Profile *selectedProfile;
@property (nonatomic, retain) HMDSelectedVideoParameters *selectedVideoParameters;
@property (nonatomic, retain) HMDCameraVideoTier *selectedVideoTier;
@property (nonatomic, readonly) HMDStreamingCapabilities *streamingCapabilities;
@property (nonatomic, readonly) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (nonatomic, readonly) NSNumber *syncSource;
@property (nonatomic, readonly) NSArray *validVideoParameterCombinations;
@property (nonatomic, readonly) NSArray *videoCodecsPreference;
@property (nonatomic, readonly) NSArray *videoResolutionsPreference;
@property (nonatomic, readonly) HMDCameraVideoTierParameters *videoTierParameters;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_generateAllCombinations;
- (bool)_selectParametersFromCodec:(id)arg1 profiles:(id)arg2 levels:(id)arg3 packetizationModes:(id)arg4 videoAttributes:(id)arg5;
- (void)_setVideoResolutionPreference;
- (id)createReselectedVideoParameters:(id)arg1;
- (id)createSRTPParamters;
- (id)createSelectedVideoParameters;
- (id)h264LevelsPreference;
- (id)h264PacketizationPreference;
- (id)h264ProfilesPreference;
- (id)initWithSessionID:(id)arg1 videoTierParameters:(id)arg2 supportedVideoConfiguration:(id)arg3 supportedRTPConfiguration:(id)arg4 streamingCapabilities:(id)arg5;
- (id)logIdentifier;
- (id)rtpConfiguration;
- (bool)selectVideoParameters;
- (id)selectedCodecType;
- (id)selectedFramerate;
- (id)selectedLevel;
- (id)selectedPacketizationMode;
- (id)selectedProfile;
- (id)selectedVideoParameters;
- (id)selectedVideoTier;
- (void)setSelectedCodecType:(id)arg1;
- (void)setSelectedFramerate:(id)arg1;
- (void)setSelectedLevel:(id)arg1;
- (void)setSelectedPacketizationMode:(id)arg1;
- (void)setSelectedProfile:(id)arg1;
- (void)setSelectedVideoParameters:(id)arg1;
- (void)setSelectedVideoTier:(id)arg1;
- (id)streamingCapabilities;
- (id)supportedVideoStreamConfiguration;
- (id)syncSource;
- (id)validVideoParameterCombinations;
- (id)videoCodecsPreference;
- (id)videoResolutionsPreference;
- (id)videoTierParameters;

@end
