/* made by EzioChiu.
 */

@protocol BLTPingSubscriptionInfo <NSObject>

@required

- (bool)canAck;
- (bool)forBulletin;
- (NSString *)sectionID;

@end
