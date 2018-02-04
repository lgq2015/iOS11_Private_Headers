/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedDate : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSDate * _date;
    double  _uncertainty;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) double uncertainty;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 uncertainty:(double)arg2 confidence:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)uncertainty;

@end
