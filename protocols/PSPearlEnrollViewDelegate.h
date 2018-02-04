/* made by EzioChiu.
 */

@protocol PSPearlEnrollViewDelegate <NSObject>

@required

- (void)didReachLargeNudgePeakForEnrollView:(PSPearlEnrollView *)arg1;
- (void)didReachSmallNudgePeakForEnrollView:(PSPearlEnrollView *)arg1;
- (void)enrollView:(PSPearlEnrollView *)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)enrollView:(PSPearlEnrollView *)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;

@end
