/* made by EzioChiu.
 */

@protocol INRequestRideIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INRideStatus *)rideStatus;
- (void)setRideStatus:(INRideStatus *)arg1;

@end
