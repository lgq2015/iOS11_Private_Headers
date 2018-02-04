/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHeartRateHistogramChartPoint : NSObject <HKChartPoint> {
    NSArray * _bucketCounts;
    NSDate * _bucketDate;
    double  _bucketIncrement;
    NSNumber * _maximumY;
    double  _minimumBucketValue;
    NSNumber * _minimumY;
    <HKGraphSeriesBlockCoordinateInfo> * _userInfo;
}

@property (nonatomic, readonly) NSArray *bucketCounts;
@property (nonatomic, readonly) NSDate *bucketDate;
@property (nonatomic, readonly) double bucketIncrement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *maximumY;
@property (nonatomic, readonly) double minimumBucketValue;
@property (nonatomic, readonly) NSNumber *minimumY;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HKGraphSeriesBlockCoordinateInfo> *userInfo;

- (void).cxx_destruct;
- (id)_quickDate:(id)arg1;
- (id)allYValues;
- (id)bucketCounts;
- (id)bucketDate;
- (double)bucketIncrement;
- (id)description;
- (id)initWithHistogramData:(id)arg1;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)maximumY;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (double)minimumBucketValue;
- (id)minimumY;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
