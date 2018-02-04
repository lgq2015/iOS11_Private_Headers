/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCVideoStreamConfig : NSObject {
    unsigned long long  _cvoExtensionID;
    bool  _enableCVO;
    unsigned long long  _framerate;
    bool  _isVideoProtected;
    unsigned long long  _keyFrameInterval;
    int  _remoteVideoInitialOrientation;
    long long  _rxCodecType;
    unsigned long long  _rxMaxBitrate;
    unsigned long long  _rxMinBitrate;
    long long  _txCodecType;
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
@property (nonatomic) long long rxCodecType;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (nonatomic) long long txCodecType;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) long long videoResolution;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)clientVideoResolutionFromResolution:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
+ (long long)videoResolutionFromClientResolution:(long long)arg1;

- (unsigned long long)cvoExtensionID;
- (id)dictionary;
- (bool)enableCVO;
- (unsigned long long)framerate;
- (bool)isValid;
- (bool)isVideoProtected;
- (unsigned long long)keyFrameInterval;
- (int)remoteVideoInitialOrientation;
- (long long)rxCodecType;
- (unsigned long long)rxMaxBitrate;
- (unsigned long long)rxMinBitrate;
- (void)setCvoExtensionID:(unsigned long long)arg1;
- (void)setEnableCVO:(bool)arg1;
- (void)setFramerate:(unsigned long long)arg1;
- (void)setIsVideoProtected:(bool)arg1;
- (void)setKeyFrameInterval:(unsigned long long)arg1;
- (void)setRemoteVideoInitialOrientation:(int)arg1;
- (void)setRxCodecType:(long long)arg1;
- (void)setRxMaxBitrate:(unsigned long long)arg1;
- (void)setRxMinBitrate:(unsigned long long)arg1;
- (void)setTxCodecType:(long long)arg1;
- (void)setTxMaxBitrate:(unsigned long long)arg1;
- (void)setTxMinBitrate:(unsigned long long)arg1;
- (void)setUpWithDictionary:(id)arg1;
- (void)setVideoResolution:(long long)arg1;
- (long long)txCodecType;
- (unsigned long long)txMaxBitrate;
- (unsigned long long)txMinBitrate;
- (long long)videoResolution;

@end
