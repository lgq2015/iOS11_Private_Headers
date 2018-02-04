/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepDurationChartPoint : NSObject <HKChartPoint> {
    double  _asleepValue;
    NSNumber * _goalValue;
    bool  _highlighted;
    double  _inBedValue;
    HKSleepChartPointUserInfo * _userInfo;
    NSDate * _xValue;
}

@property (nonatomic) double asleepValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *goalValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic) double inBedValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKSleepChartPointUserInfo *userInfo;
@property (nonatomic, retain) NSDate *xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (double)asleepValue;
- (id)goalValue;
- (bool)highlighted;
- (double)inBedValue;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setAsleepValue:(double)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInBedValue:(double)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
