/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCTouchProcessor : NSObject {
    NSMutableSet * _activeButtonTypes;
    <TVRCTouchProcessorDelegate> * _delegate;
    NSMapTable * _touches;
    TVRCTouchpadView * _touchpadView;
}

@property (nonatomic) <TVRCTouchProcessorDelegate> *delegate;
@property (nonatomic, retain) TVRCTouchpadView *touchpadView;

+ (id)touchProcessorForDescriptor:(id)arg1;

- (void).cxx_destruct;
- (void)_beginTrackingAnyTouchIfNeeded;
- (void)_beginTrackingTouch:(id)arg1 withRelativeLocation:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxForTouch:(id)arg1 relativeStartLocation:(long long)arg2;
- (long long)_defaultRelativeStartingLocation;
- (void)_deliverTouchToDelegate:(id)arg1 info:(id)arg2;
- (bool)_deviceSupportsMovableBoundingBox;
- (void)_dispatchGameControllerEventForTouch:(id)arg1 event:(id)arg2;
- (id)_init;
- (long long)_relativeTouchLocationForDistanceTraveled:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchTimerExpired:(id)arg1;
- (struct CGPoint { double x1; double x2; })_virtualTouchLocationForTouch:(id)arg1;
- (id)delegate;
- (void)markCurrentTouchToBeCancelled;
- (void)reset;
- (void)sendPressBegan:(long long)arg1;
- (void)sendPressEnded:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTouchpadView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)touchpadView;

@end
