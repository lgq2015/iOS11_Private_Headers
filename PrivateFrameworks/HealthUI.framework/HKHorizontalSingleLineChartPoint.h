/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHorizontalSingleLineChartPoint : NSObject <HKChartPoint> {
    bool  _groupToPrevious;
    long long  _markStyle;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSDate * _xValue;
    NSNumber * _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool groupToPrevious;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long markStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic, retain) NSDate *xValue;
@property (nonatomic, retain) NSNumber *yValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)description;
- (bool)groupToPrevious;
- (long long)markStyle;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setGroupToPrevious:(bool)arg1;
- (void)setMarkStyle:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (void)setYValue:(id)arg1;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
