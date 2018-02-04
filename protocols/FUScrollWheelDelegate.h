/* made by EzioChiu.
 */

@protocol FUScrollWheelDelegate <NSObject>

@optional

- (void)scrollWheel:(FUScrollWheel *)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
- (bool)scrollWheelShouldBecomeFirstResponder:(FUScrollWheel *)arg1;
- (void)tappedScrollWheel:(FUScrollWheel *)arg1;

@end
