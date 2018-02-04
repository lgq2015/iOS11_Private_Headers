/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartbeatSequencePoint : NSObject <HKChartPoint> {
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSNumber * _xValue;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)initWithTimeInterval:(double)arg1 beatsPerMinute:(double)arg2;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
