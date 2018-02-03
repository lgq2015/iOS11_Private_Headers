/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreenMode : NSObject {
    CADisplayMode * _caMode;
    bool  _mainScreen;
    FBSDisplayMode * _mode;
}

@property (getter=_isMainScreen, setter=_setMainScreen:) bool _mainScreen;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)_screenModeForDisplayMode:(id)arg1 CADisplayMode:(id)arg2 mainScreen:(bool)arg3;

- (void).cxx_destruct;
- (id)_CADisplayMode;
- (id)_displayMode;
- (bool)_isMainScreen;
- (void)_setMainScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeWithLevel:(unsigned long long)arg1;
- (id)description;
- (id)initWithDisplayMode:(id)arg1 CADisplayMode:(id)arg2 mainScreen:(bool)arg3;
- (double)pixelAspectRatio;
- (struct CGSize { double x1; double x2; })size;

@end