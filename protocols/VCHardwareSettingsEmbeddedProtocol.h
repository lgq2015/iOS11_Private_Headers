/* made by EzioChiu.
 */

@protocol VCHardwareSettingsEmbeddedProtocol

@required

- (long long)chipId;
- (long long)deviceClass;
- (int)screenHeight;
- (int)screenWidth;
- (bool)supportHEVC;
- (bool)useSoftFramerateSwitching;
- (bool)vcpSupportsHEVCEncoder;
- (long long)videoEncoderType;

@end
