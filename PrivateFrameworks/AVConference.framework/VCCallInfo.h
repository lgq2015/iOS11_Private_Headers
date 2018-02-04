/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCallInfo : NSObject {
    NSString * _deviceType;
    NSString * _frameworkVersion;
    NSString * _osVersion;
    unsigned int  auNumber;
    unsigned int  callID;
    unsigned int  cellBandwidth;
    double  firstDegradedMeasure;
    bool  is4x;
    bool  isIOS;
    bool  isPreLionOS;
    bool  isVideoQualityDegraded;
    double  lastBadVideoQualityTime;
    double  lastGoodVideoQualityTime;
    double  lastVideoQualityDegradedSwitchTime;
    unsigned int  maxBandwidth;
    NSString * participantID;
    SDPMini * sdp;
    NSString * sdpString;
    bool  supportsDynamicMaxBitrate;
    bool  supportsSKEOptimization;
    bool  supportsSpecialAACBundle;
    unsigned char  u8Version;
    bool  useNewPLCalc;
    bool  usesInitialFECImplementation;
    double  videoDegradedThreshold;
    bool  videoIsPaused;
    unsigned int  visibleRectCropping;
}

@property (nonatomic, copy) NSString *OSVersion;
@property (nonatomic) unsigned int auNumber;
@property unsigned int callID;
@property (nonatomic) unsigned int cellBandwidth;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *frameworkVersion;
@property (nonatomic, readonly) bool isHDVideoSupported;
@property (nonatomic, readonly) bool isIOS;
@property (nonatomic) bool isPreLionOS;
@property (nonatomic) bool isVideoQualityDegraded;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, readonly) bool requiresImplicitFeatureString;
@property (nonatomic, retain) SDPMini *sdp;
@property (nonatomic, retain) NSString *sdpString;
@property (readonly) bool supportsDynamicContentsRectWithAspectPreservation;
@property (nonatomic) bool supportsDynamicMaxBitrate;
@property (nonatomic) bool supportsSKEOptimization;
@property (nonatomic, readonly) bool supportsSpecialAACBundle;
@property (nonatomic) unsigned char u8Version;
@property (nonatomic, readonly) bool useNewPLCalc;
@property (nonatomic, readonly) bool usesInitialFECImplementation;
@property (nonatomic) bool videoIsPaused;
@property (nonatomic) unsigned int visibleRectCropping;

+ (unsigned char)getVCCurrentVersion;

- (id)OSVersion;
- (unsigned int)auNumber;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })audioVersionInfo:(bool)arg1;
- (unsigned int)callID;
- (unsigned int)cellBandwidth;
- (void)dealloc;
- (id)deviceType;
- (id)frameworkVersion;
- (id)init;
- (bool)isHDVideoSupported;
- (bool)isIOS;
- (bool)isPreLionOS;
- (bool)isVideoQualityDegraded;
- (unsigned int)maxBandwidth;
- (id)participantID;
- (bool)requiresImplicitFeatureString;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
- (id)sdp;
- (id)sdpString;
- (void)setAuNumber:(unsigned int)arg1;
- (void)setCallID:(unsigned int)arg1;
- (void)setCellBandwidth:(unsigned int)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setFrameworkVersion:(id)arg1;
- (void)setIsPreLionOS:(bool)arg1;
- (void)setIsVideoQualityDegraded:(bool)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (void)setOSVersion:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setSdp:(id)arg1;
- (void)setSdpString:(id)arg1;
- (void)setSupportsDynamicMaxBitrate:(bool)arg1;
- (void)setSupportsSKEOptimization:(bool)arg1;
- (void)setU8Version:(unsigned char)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setVideoIsPaused:(bool)arg1;
- (void)setVisibleRectCropping:(unsigned int)arg1;
- (bool)supportSDPCompression;
- (bool)supportsDynamicContentsRectWithAspectPreservation;
- (bool)supportsDynamicMaxBitrate;
- (bool)supportsSKEOptimization;
- (bool)supportsSpecialAACBundle;
- (unsigned char)u8Version;
- (bool)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (bool)useNewPLCalc;
- (bool)usesInitialFECImplementation;
- (bool)videoIsPaused;
- (unsigned int)visibleRectCropping;

@end
