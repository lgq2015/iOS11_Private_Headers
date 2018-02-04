/* made by EzioChiu.
 */

@protocol CKEphemeralReadableEventSequence

@required

- (NSArray *)eventsBetween:(NSDate *)arg1 and:(NSDate *)arg2;
- (NSArray *)eventsWithIdentifier:(NSString *)arg1;
- (CKEvent *)first;
- (CKEvent *)last;

@end
