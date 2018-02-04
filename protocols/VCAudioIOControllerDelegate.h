/* made by EzioChiu.
 */

@protocol VCAudioIOControllerDelegate <NSObject>

@required

- (void)controllerFormatChanged:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)didResume;
- (void)didStart:(bool)arg1 error:(NSError *)arg2;
- (void)didStop:(bool)arg1 error:(NSError *)arg2;
- (void)didSuspend;

@end
