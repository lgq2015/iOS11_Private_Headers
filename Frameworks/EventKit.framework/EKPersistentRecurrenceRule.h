/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)cachedEndDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)endDate;
- (int)entityType;
- (long long)firstDayOfTheWeek;
- (int)frequency;
- (long long)interval;
- (id)owner;
- (void)setCount:(unsigned long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFirstDayOfTheWeek:(long long)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)specifier;

@end
