/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeAndDeviceConfigurationChangeListener : NSObject {
    long long  _desiredDevicePosition;
    long long  _desiredMode;
    id /* block */  _handler;
}

@property (nonatomic) long long desiredDevicePosition;
@property (nonatomic) long long desiredMode;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (long long)desiredDevicePosition;
- (long long)desiredMode;
- (id /* block */)handler;
- (void)setDesiredDevicePosition:(long long)arg1;
- (void)setDesiredMode:(long long)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
