/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraParameterSelection : HMFObject <HMFLogging> {
    HMDCameraAudioParameterSelection * _audioParameterSelection;
    HMDCameraSessionID * _sessionID;
    HMDCameraVideoParameterSelection * _videoParameterSelection;
}

@property (nonatomic, retain) HMDCameraAudioParameterSelection *audioParameterSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDCameraVideoParameterSelection *videoParameterSelection;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)audioParameterSelection;
- (bool)findBestMatchWithProtocolParameters:(id)arg1 streamingCapabilities:(id)arg2 videoTierParameters:(id)arg3;
- (id)initWithSessionID:(id)arg1;
- (id)logIdentifier;
- (id)sessionID;
- (void)setAudioParameterSelection:(id)arg1;
- (void)setReselectedConfigParameters:(id)arg1 videoTier:(id)arg2;
- (void)setSelectedConfigParameters:(id)arg1;
- (void)setSelectedEndPointSetupParameters:(id)arg1 videoNetworkConfig:(id)arg2 audioNetworkConfig:(id)arg3;
- (void)setVideoParameterSelection:(id)arg1;
- (id)videoParameterSelection;

@end
