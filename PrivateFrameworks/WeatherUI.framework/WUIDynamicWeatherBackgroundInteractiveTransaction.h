/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {
    CALayer * _layer;
    double  _progress;
    long long  _swipeDirection;
    CALayer * _toLayer;
}

@property (nonatomic) CALayer *layer;
@property (nonatomic) double progress;
@property (nonatomic) long long swipeDirection;
@property (nonatomic) CALayer *toLayer;

- (id)layer;
- (double)progress;
- (void)setLayer:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setSwipeDirection:(long long)arg1;
- (void)setToLayer:(id)arg1;
- (long long)swipeDirection;
- (id)toLayer;

@end
