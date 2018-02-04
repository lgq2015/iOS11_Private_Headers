/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate> {
    double  _currentSpeedCoefficient;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTouchLocation;
    double  _currentTouchStartTime;
    <NSCopying> * _displayLinkManagerObserverToken;
    double  _fadeOutRadius;
    double  _fingerMovingSpeed;
    double  _fingerStillSpeed;
    double  _firstRippleInitialRadius;
    bool  _isAnimating;
    bool  _isTrackingTouch;
    unsigned long long  _lastRingLayerIdentifier;
    bool  _needsCurrentSpeedRefresh;
    unsigned long long  _numberOfRipplesForCurrentTouch;
    NSMutableArray * _recentTouchesContextQueue;
    NSMutableArray * _reusableRingLayers;
    NSMutableArray * _reusableTouchContexts;
    CAAnimation * _ringEnlargementAnimation;
    NSMutableDictionary * _ringLayersByIdentifiers;
    NSMutableArray * _ringLayersQueue;
    <TKVibrationRecorderStyleProvider> * _styleProvider;
}

@property (getter=_isTouchDown, nonatomic, readonly) bool _touchDown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fadeOutRadius;
@property (nonatomic) double fingerMovingSpeed;
@property (nonatomic) double fingerStillSpeed;
@property (nonatomic) double firstRippleInitialRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_currentSpeed;
- (void)_enqueueReusableRingLayer:(id)arg1;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(struct CGPoint { double x1; double x2; })arg2 speed:(double)arg3;
- (bool)_isTouchDown;
- (void)_refresh:(id)arg1;
- (id)_reusableRingLayer;
- (id)_reusableTouchContextObject;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_touchBeganAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchEndedAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchMovedToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateRingEnlargementAnimation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (double)fadeOutRadius;
- (double)fingerMovingSpeed;
- (double)fingerStillSpeed;
- (double)firstRippleInitialRadius;
- (id)init;
- (id)initWithStyleProvider:(id)arg1;
- (void)layoutSubviews;
- (void)setFadeOutRadius:(double)arg1;
- (void)setFingerMovingSpeed:(double)arg1;
- (void)setFingerStillSpeed:(double)arg1;
- (void)setFirstRippleInitialRadius:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
