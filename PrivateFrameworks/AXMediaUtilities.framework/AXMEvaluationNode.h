/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding> {
    unsigned long long  _effectivePriority;
    double  _minimumConfidence;
    unsigned long long  _priority;
}

@property (nonatomic) unsigned long long effectivePriority;
@property (nonatomic) double minimumConfidence;
@property (nonatomic) unsigned long long priority;

+ (unsigned long long)defaultPriority;
+ (bool)supportsSecureCoding;

- (void)boostEffectivePriority;
- (unsigned long long)effectivePriority;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)minimumConfidence;
- (void)nodeInitialize;
- (unsigned long long)priority;
- (void)resetEffectivePriority;
- (void)setEffectivePriority:(unsigned long long)arg1;
- (void)setMinimumConfidence:(double)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (bool)shouldEvaluate:(id)arg1;

@end
