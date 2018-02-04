/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding> {
    NSArray * _mainColorWeights;
    NSArray * _mainColors;
    double  _remainingColorWeight;
}

@property (nonatomic, retain) NSArray *mainColorWeights;
@property (nonatomic, retain) NSArray *mainColors;
@property (nonatomic) double remainingColorWeight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMainColors:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mainColorWeights;
- (id)mainColors;
- (double)remainingColorWeight;
- (void)setMainColorWeights:(id)arg1;
- (void)setMainColors:(id)arg1;
- (void)setMainColors:(id)arg1 weights:(id)arg2;
- (void)setRemainingColorWeight:(double)arg1;

@end
