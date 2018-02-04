/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLocationManager : NSObject

+ (void)_loadMapKit;
+ (id)currentLocationWithCompletionBlock:(id /* block */)arg1;
+ (bool)isCurrentProcessEntitledToUseLocationServices;
+ (id)placemarkForAddress:(id)arg1 withCompletionBlock:(id /* block */)arg2;
+ (id)placemarkForLocation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
+ (id)strictGeocodeString:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end
