/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMColorSpaceCommand : CAMCaptureCommand {
    long long  __colorSpace;
}

@property (nonatomic, readonly) long long _colorSpace;

- (long long)_colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorSpace:(long long)arg1;

@end
