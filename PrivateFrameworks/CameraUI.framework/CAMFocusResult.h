/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusResult : NSObject {
    bool  _contrastBasedFocusDidEnd;
    bool  _contrastBasedFocusDidStart;
    bool  _deviceSupportsFocus;
    long long  _focusMode;
    bool  _performingContrastDetection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointOfInterest;
}

@property (nonatomic, readonly) bool contrastBasedFocusDidEnd;
@property (nonatomic, readonly) bool contrastBasedFocusDidStart;
@property (nonatomic, readonly) bool deviceSupportsFocus;
@property (nonatomic, readonly) long long focusMode;
@property (getter=isPerformingContrastDetection, nonatomic, readonly) bool performingContrastDetection;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pointOfInterest;

- (bool)contrastBasedFocusDidEnd;
- (bool)contrastBasedFocusDidStart;
- (id)description;
- (bool)deviceSupportsFocus;
- (long long)focusMode;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint { double x1; double x2; })arg2 performingContrastDetection:(bool)arg3 contrastBasedFocusDidStart:(bool)arg4 contrastBasedFocusDidEnd:(bool)arg5 deviceSupportsFocus:(bool)arg6;
- (bool)isPerformingContrastDetection;
- (struct CGPoint { double x1; double x2; })pointOfInterest;

@end
