/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBehaviorOverrideEffectiveInterval : NSObject <BBBehaviorOverrideEffectivePeriod> {
    NSCalendar * _calendar;
    NSString * _calendarIdentifier;
    NSDateComponents * _endComponents;
    NSUUID * _identifier;
    unsigned long long  _repeatInterval;
    NSDateComponents * _startComponents;
}

@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDateComponents *endComponents;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) unsigned long long repeatInterval;
@property (nonatomic, copy) NSDateComponents *startComponents;
@property (readonly) Class superclass;

+ (long long)_dateComponentWithProvidedComponent:(long long)arg1 andBaseComponent:(long long)arg2;
+ (id)adjustComponentsForRepeatInterval:(unsigned long long)arg1 earlier:(bool)arg2;
+ (id)dateWithComponents:(id)arg1 closestToDate:(id)arg2 earlierThanDate:(bool)arg3 calendar:(id)arg4 repeatInterval:(unsigned long long)arg5;
+ (id)dateWithComponents:(id)arg1 immediatelyFollowingDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4;
+ (id)dateWithComponents:(id)arg1 immediatelyPriorToDate:(id)arg2 calendar:(id)arg3 repeatInterval:(unsigned long long)arg4;
+ (unsigned long long)relevantUnitsForRepeatInterval:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_configuredCalendarWithIdentifier:(id)arg1;
- (void)_synchronizeTimeZone;
- (id)calendar;
- (id)calendarIdentifier;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endComponents;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4;
- (id)initWithStartComponents:(id)arg1 endComponents:(id)arg2 calendarIdentifier:(id)arg3 repeatInterval:(unsigned long long)arg4 identifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (unsigned long long)repeatInterval;
- (void)setCalendar:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndComponents:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setStartComponents:(id)arg1;
- (id)startComponents;

@end
