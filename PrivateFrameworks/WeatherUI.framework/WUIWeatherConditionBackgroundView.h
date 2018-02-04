/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIWeatherConditionBackgroundView : UIView {
    long long  _activeIndex;
    WUIDynamicWeatherBackground * _background;
    NSArray * _cities;
    NSObject<OS_dispatch_source> * _crossfadeEffectTimer;
    WUIDynamicWeatherBackgroundInteractiveTransaction * _crossfadeTransaction;
    bool  _hidesConditions;
    UIImageView * _introductionImageView;
    WUIWeatherCondition * _leftCondition;
    WUIWeatherCondition * _rightCondition;
    double  _scrollOffset;
}

@property (nonatomic, readonly) WUIDynamicWeatherBackground *background;
@property (nonatomic, retain) NSArray *cities;
@property (nonatomic, readonly) NSArray *conditions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *crossfadeEffectTimer;
@property (nonatomic, retain) WUIDynamicWeatherBackgroundInteractiveTransaction *crossfadeTransaction;
@property (nonatomic) bool hidesConditions;
@property (nonatomic, retain) UIImageView *introductionImageView;
@property (nonatomic, retain) WUIWeatherCondition *leftCondition;
@property (nonatomic, retain) WUIWeatherCondition *rightCondition;
@property (nonatomic) double scrollOffset;

- (void).cxx_destruct;
- (void)_addBackAllLayers;
- (void)_cityDidUpdate:(id)arg1;
- (id)_conditionAtIndex:(unsigned long long)arg1;
- (id)_conditions;
- (void)_removeSideLayers;
- (void)_setCondition:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)animateTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)background;
- (id)cities;
- (id)conditions;
- (id)crossfadeEffectTimer;
- (id)crossfadeTransaction;
- (void)dealloc;
- (void)didTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hidesConditions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)introductionImageView;
- (void)layoutSubviews;
- (id)leftCondition;
- (void)prepareToResume;
- (void)prepareToSuspend;
- (id)relinquishConditionViewForCityAtIndex:(long long)arg1;
- (id)rightCondition;
- (void)saveImageForKeyCondition;
- (double)scrollOffset;
- (void)setCities:(id)arg1;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2 activeCityLiveConditionOnly:(bool)arg3 animationDuration:(double)arg4;
- (void)setCities:(id)arg1 activeCityIndex:(long long)arg2 animationDuration:(double)arg3;
- (void)setCrossfadeEffectTimer:(id)arg1;
- (void)setCrossfadeTransaction:(id)arg1;
- (void)setHidesConditions:(bool)arg1;
- (void)setIntroductionImageView:(id)arg1;
- (void)setLeftCondition:(id)arg1;
- (void)setRightCondition:(id)arg1;
- (void)setScrollEnded;
- (void)setScrollOffset:(double)arg1;
- (void)updateConditionsAboutCityIndex:(long long)arg1;
- (void)useConditionView:(id)arg1 activeCityIndex:(unsigned long long)arg2;

@end
