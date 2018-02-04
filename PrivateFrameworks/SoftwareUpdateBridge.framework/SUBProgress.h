/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBProgress : NSObject <NSSecureCoding> {
    double  _estimatedTimeRemaining;
    bool  _isDone;
    NSString * _phase;
    float  _portionComplete;
}

@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) bool isDone;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) float portionComplete;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (bool)isDone;
- (id)phase;
- (float)portionComplete;
- (void)setEstimatedTimeRemaining:(double)arg1;
- (void)setIsDone:(bool)arg1;
- (void)setPhase:(id)arg1;
- (void)setPortionComplete:(float)arg1;

@end
