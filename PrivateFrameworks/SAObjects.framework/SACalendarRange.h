/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SACalendar *end;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SACalendar *start;
@property (readonly) Class superclass;

+ (id)calendarRange;
+ (id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
