/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamConfig : VCMediaStreamConfig {
    unsigned long long  _cvoExtensionID;
    bool  _enableCVO;
    unsigned long long  _framerate;
    bool  _isVideoProtected;
    unsigned long long  _keyFrameInterval;
    int  _remoteVideoInitialOrientation;
    unsigned long long  _rxMaxBitrate;
    unsigned long long  _rxMinBitrate;
    unsigned long long  _txMaxBitrate;
    unsigned long long  _txMinBitrate;
    long long  _videoResolution;
}

@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) bool enableCVO;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) bool isVideoProtected;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) long long videoResolution;

+ (bool)validateClientDictionary:(id)arg1;

- (bool)applyVideoStreamClientDictionary:(id)arg1;
- (unsigned long long)cvoExtensionID;
- (void)dealloc;
- (bool)enableCVO;
- (unsigned long long)framerate;
- (id)initWithClientDictionary:(id)arg1;
- (bool)isVideoProtected;
- (unsigned long long)keyFrameInterval;
- (int)remoteVideoInitialOrientation;
- (unsigned long long)rxMaxBitrate;
- (unsigned long long)rxMinBitrate;
- (void)setCvoExtensionID:(unsigned long long)arg1;
- (void)setEnableCVO:(bool)arg1;
- (void)setFramerate:(unsigned long long)arg1;
- (void)setIsVideoProtected:(bool)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setRemoteVideoInitialOrientation:(int)arg1;
- (void)setRxMaxBitrate:(unsigned long long)arg1;
- (void)setRxMinBitrate:(unsigned long long)arg1;
- (void)setTxMaxBitrate:(unsigned long long)arg1;
- (void)setTxMinBitrate:(unsigned long long)arg1;
- (void)setVideoResolution:(long long)arg1;
- (unsigned long long)txMaxBitrate;
- (unsigned long long)txMinBitrate;
- (bool)updateWithClientDictionary:(id)arg1;
- (long long)videoResolution;

@end
