/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProtocolParameters : HMFObject <NSSecureCoding> {
    HMDReselectedStreamConfigurationWrite * _reselectedStreamConfigurationWrite;
    HMDSelectedStreamConfigurationWrite * _selectedStreamConfigurationWrite;
    HMDSetupEndPointRead * _setupEndPointRead;
    HMDSetupEndPointWrite * _setupEndPointWrite;
    HMDSupportedAudioStreamConfiguration * _supportedAudioStreamConfiguration;
    HMDSupportedRTPConfiguration * _supportedRTPConfiguration;
    HMDSupportedVideoStreamConfiguration * _supportedVideoStreamConfiguration;
}

@property (nonatomic, retain) HMDReselectedStreamConfigurationWrite *reselectedStreamConfigurationWrite;
@property (nonatomic, retain) HMDSelectedStreamConfigurationWrite *selectedStreamConfigurationWrite;
@property (nonatomic, retain) HMDSetupEndPointRead *setupEndPointRead;
@property (nonatomic, retain) HMDSetupEndPointWrite *setupEndPointWrite;
@property (nonatomic, retain) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (nonatomic, retain) HMDSupportedRTPConfiguration *supportedRTPConfiguration;
@property (nonatomic, retain) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reselectedStreamConfigurationWrite;
- (id)selectedStreamConfigurationWrite;
- (void)setReselectedStreamConfigurationWrite:(id)arg1;
- (void)setSelectedStreamConfigurationWrite:(id)arg1;
- (void)setSetupEndPointRead:(id)arg1;
- (void)setSetupEndPointWrite:(id)arg1;
- (void)setSupportedAudioStreamConfiguration:(id)arg1;
- (void)setSupportedRTPConfiguration:(id)arg1;
- (void)setSupportedVideoStreamConfiguration:(id)arg1;
- (id)setupEndPointRead;
- (id)setupEndPointWrite;
- (id)supportedAudioStreamConfiguration;
- (id)supportedRTPConfiguration;
- (id)supportedVideoStreamConfiguration;

@end
