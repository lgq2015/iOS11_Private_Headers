/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRecurrence : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endCount;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) int frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interval;
@property (readonly) Class superclass;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)endCount;
- (id)endDate;
- (int)frequency;
- (id)groupIdentifier;
- (long long)interval;
- (void)setEndCount:(long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(long long)arg1;

@end
