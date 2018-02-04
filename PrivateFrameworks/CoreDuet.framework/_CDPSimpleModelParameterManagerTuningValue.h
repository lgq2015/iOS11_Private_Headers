/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding> {
    float  _lambda;
    float  _score;
    float  _threshold;
    float  _w0;
}

@property (nonatomic, readonly) float lambda;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly) float w0;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4;
- (float)lambda;
- (float)score;
- (float)threshold;
- (float)w0;

@end
