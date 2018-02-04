/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKDailySleepSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    double  _xValue;
    NSArray * _yValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) NSArray *yValues;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (double)endXValue;
- (id)initWithXValue:(double)arg1 yValues:(id)arg2 userInfo:(id)arg3;
- (double)startXValue;
- (id)userInfo;
- (double)xValue;
- (id)yValues;

@end
