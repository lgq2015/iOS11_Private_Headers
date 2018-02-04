/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMWhiteBalanceCommand : CAMCaptureCommand {
    bool  __matchExposureMode;
    long long  __whiteBalanceMode;
}

@property (nonatomic, readonly) bool _matchExposureMode;
@property (nonatomic, readonly) long long _whiteBalanceMode;

- (id)_descriptionForWhiteBalanceMode:(long long)arg1;
- (bool)_matchExposureMode;
- (long long)_whiteBalanceMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchExposureMode;
- (id)initWithWhiteBalanceMode:(long long)arg1;

@end
