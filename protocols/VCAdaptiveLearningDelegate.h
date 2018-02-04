/* made by EzioChiu.
 */

@protocol VCAdaptiveLearningDelegate <NSObject>

@required

- (int)adaptiveLearningState;
- (int)learntBitrateForSegment:(NSString *)arg1 defaultValue:(int)arg2;
- (void)updateTargetBitrateForSegment:(NSString *)arg1 newValue:(int)arg2;

@end
