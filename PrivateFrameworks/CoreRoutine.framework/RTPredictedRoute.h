/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedRoute : NSObject <NSSecureCoding> {
    double  _confidence;
    RTRoute * _route;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) RTRoute *route;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1 confidence:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)route;
- (void)setConfidence:(double)arg1;
- (void)setRoute:(id)arg1;

@end
