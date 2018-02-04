/* made by EzioChiu.
 */

@protocol HPHapticPatternPlayer

@required

- (bool)sendParameters:(NSArray *)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)start:(double)arg1 error:(id*)arg2;
- (bool)stop:(double)arg1 error:(id*)arg2;

@end
