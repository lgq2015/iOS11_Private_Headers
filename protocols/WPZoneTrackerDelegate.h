/* made by EzioChiu.
 */

@protocol WPZoneTrackerDelegate <NSObject>

@required

- (void)zoneTracker:(WPZoneTracker *)arg1 didFailToRegisterZones:(NSDictionary *)arg2 withError:(NSError *)arg3;
- (void)zoneTracker:(WPZoneTracker *)arg1 enteredZone:(NSData *)arg2;
- (void)zoneTracker:(WPZoneTracker *)arg1 exitedZone:(NSData *)arg2;
- (void)zoneTrackerDidUpdateState:(WPZoneTracker *)arg1;

@optional

- (void)zoneTracker:(WPZoneTracker *)arg1 enteredZoneInfo:(NSDictionary *)arg2;

@end
