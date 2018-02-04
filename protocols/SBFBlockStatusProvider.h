/* made by EzioChiu.
 */

@protocol SBFBlockStatusProvider <NSObject>

@required

- (bool)isBlocked;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (bool)isThermallyBlocked;
- (double)timeIntervalUntilUnblockedSinceReferenceDate;

@end
