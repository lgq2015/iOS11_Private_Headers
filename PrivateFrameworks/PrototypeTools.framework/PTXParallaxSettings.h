/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxSettings : _UISettings {
    bool  _alphaEnabled;
    long long  _distanceFromScreen;
    bool  _increaseEnabled;
    double  _maxAlpha;
    double  _minAlpha;
    double  _perspectiveTransform;
    long long  _slideDirectionX;
    long long  _slideDirectionY;
    bool  _slideEnabled;
    double  _slideIncreaseX;
    double  _slideIncreaseY;
    double  _slidePixelsX;
    double  _slidePixelsY;
    double  _tiltDegreesX;
    double  _tiltDegreesY;
    long long  _tiltDirectionX;
    long long  _tiltDirectionY;
    bool  _tiltEnabled;
    double  _tiltIncreaseX;
    double  _tiltIncreaseY;
}

@property bool alphaEnabled;
@property long long distanceFromScreen;
@property bool increaseEnabled;
@property double maxAlpha;
@property double minAlpha;
@property double perspectiveTransform;
@property long long slideDirectionX;
@property long long slideDirectionY;
@property bool slideEnabled;
@property double slideIncreaseX;
@property double slideIncreaseY;
@property double slidePixelsX;
@property double slidePixelsY;
@property double tiltDegreesX;
@property double tiltDegreesY;
@property long long tiltDirectionX;
@property long long tiltDirectionY;
@property bool tiltEnabled;
@property double tiltIncreaseX;
@property double tiltIncreaseY;

+ (id)settingsControllerModule;

- (bool)alphaEnabled;
- (long long)distanceFromScreen;
- (bool)increaseEnabled;
- (double)maxAlpha;
- (double)minAlpha;
- (double)perspectiveTransform;
- (void)setAlphaEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setDistanceFromScreen:(long long)arg1;
- (void)setIncreaseEnabled:(bool)arg1;
- (void)setMaxAlpha:(double)arg1;
- (void)setMinAlpha:(double)arg1;
- (void)setPerspectiveTransform:(double)arg1;
- (void)setSlideDirectionX:(long long)arg1;
- (void)setSlideDirectionY:(long long)arg1;
- (void)setSlideEnabled:(bool)arg1;
- (void)setSlideIncreaseX:(double)arg1;
- (void)setSlideIncreaseY:(double)arg1;
- (void)setSlidePixelsX:(double)arg1;
- (void)setSlidePixelsY:(double)arg1;
- (void)setTiltDegreesX:(double)arg1;
- (void)setTiltDegreesY:(double)arg1;
- (void)setTiltDirectionX:(long long)arg1;
- (void)setTiltDirectionY:(long long)arg1;
- (void)setTiltEnabled:(bool)arg1;
- (void)setTiltIncreaseX:(double)arg1;
- (void)setTiltIncreaseY:(double)arg1;
- (long long)slideDirectionX;
- (long long)slideDirectionY;
- (bool)slideEnabled;
- (double)slideIncreaseX;
- (double)slideIncreaseY;
- (double)slidePixelsX;
- (double)slidePixelsY;
- (double)tiltDegreesX;
- (double)tiltDegreesY;
- (long long)tiltDirectionX;
- (long long)tiltDirectionY;
- (bool)tiltEnabled;
- (double)tiltIncreaseX;
- (double)tiltIncreaseY;

@end
