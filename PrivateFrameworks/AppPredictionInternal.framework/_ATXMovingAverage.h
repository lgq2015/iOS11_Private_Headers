/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXMovingAverage : NSObject <NSSecureCoding> {
    double  _alpha;
    long long  _count;
    double  _movingAverage;
    double  _movingError;
}

@property (nonatomic, readonly) double movingAverage;
@property (nonatomic, readonly) double movingError;

+ (bool)supportsSecureCoding;

- (void)addElement:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlpha:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (double)movingAverage;
- (double)movingError;

@end
