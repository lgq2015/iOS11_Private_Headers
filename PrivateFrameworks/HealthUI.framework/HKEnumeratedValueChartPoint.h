/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint> {
    NSArray * _indices;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
    NSDate * _xValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *indices;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;
@property (nonatomic) NSDate *xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)indices;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (void)setIndices:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
