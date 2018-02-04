/* made by EzioChiu.
 */

@protocol _TVRCDeviceImpl <NSObject>

@required

- (void)connect;
- (TVRCDeviceDescriptor *)descriptor;
- (void)disconnect;
- (NSString *)identifier;
- (TVRCKeyboardController *)keyboardController;
- (NSString *)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1;
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(TVRCDevice *)arg1;
- (NSSet *)supportedButtons;
- (TVRCVoiceRecorder *)voiceRecorder;

@end
