/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {
    long long  _chipId;
    int  _deviceClass;
    NSString * _deviceName;
    int  _screenHeight;
    int  _screenWidth;
    long long  _videoEncoderType;
}

@property (nonatomic, readonly) long long chipId;
@property (nonatomic, readonly) long long deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) int screenHeight;
@property (nonatomic, readonly) int screenWidth;
@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool useSoftFramerateSwitching;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;
@property (nonatomic, readonly) long long videoEncoderType;

+ (id)sharedInstance;

- (long long)chipId;
- (void)dealloc;
- (long long)deviceClass;
- (id)deviceName;
- (id)init;
- (void)initializeScreenDimension;
- (int)screenHeight;
- (int)screenWidth;
- (bool)useSoftFramerateSwitching;
- (long long)videoEncoderType;

@end
