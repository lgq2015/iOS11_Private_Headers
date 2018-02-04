/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusCommand : CAMCaptureCommand {
    long long  __focusMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  __focusPointOfInterest;
    bool  __shouldUseSmoothFocus;
}

@property (nonatomic, readonly) long long _focusMode;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _focusPointOfInterest;
@property (nonatomic, readonly) bool _shouldUseSmoothFocus;

- (long long)_focusMode;
- (struct CGPoint { double x1; double x2; })_focusPointOfInterest;
- (bool)_shouldUseSmoothFocus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusMode:(long long)arg1;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithFocusMode:(long long)arg1 atPointOfInterest:(struct CGPoint { double x1; double x2; })arg2 smooth:(bool)arg3;
- (id)initWithFocusMode:(long long)arg1 smooth:(bool)arg2;

@end
