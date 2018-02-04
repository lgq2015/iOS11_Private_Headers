/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyView : UIView <NUAnimationObserver> {
    NSMutableSet * _activeContentsAnimations;
    NUPortal * _button;
    unsigned long long  _buttonContents;
    NUScene * _buttonScenes;
    unsigned long long  _currentTab;
    NUAnimation * _earthTabAnim;
    unsigned int  _isDrawRectEnabled;
    unsigned int  _isSupplemental;
    NUAnimation * _lunaTabAnim;
    <NTKAstronomyViewObserver> * _observer;
    NUAnimation * _orreryTabAnim0;
    NUAnimation * _orreryTabAnim1;
    NUView * _viewer;
}

@property (getter=isDrawRectEnabled, nonatomic) bool drawRectEnabled;
@property (nonatomic) <NTKAstronomyViewObserver> *observer;

- (void).cxx_destruct;
- (void)cleanupAfterZoom;
- (unsigned long long)contents;
- (unsigned long long)contentsForButton:(unsigned long long)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDrawRectEnabled;
- (void)layoutSubviews;
- (id)observer;
- (void)prepareToZoom;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (id)rotatable:(unsigned long long)arg1;
- (void)setButton:(unsigned long long)arg1 contents:(unsigned long long)arg2;
- (void)setButton:(unsigned long long)arg1 contentsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setButton:(unsigned long long)arg1 opacity:(float)arg2 animated:(bool)arg3;
- (void)setContents:(unsigned long long)arg1 supplemental:(bool)arg2 animated:(bool)arg3;
- (void)setDrawRectEnabled:(bool)arg1;
- (void)setMinFrameInterval:(int)arg1;
- (void)setObserver:(id)arg1;
- (void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2;
- (void)startAnimation;
- (void)stopAnimation;
- (void)universeAnimationFinished:(id)arg1;
- (void)updateSunLocationForDate:(id)arg1 animated:(bool)arg2;

@end
