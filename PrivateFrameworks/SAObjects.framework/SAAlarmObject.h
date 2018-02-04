/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmObject : SADomainObject

@property (nonatomic, copy) NSNumber *enabled;
@property (nonatomic, copy) NSNumber *firing;
@property (nonatomic, copy) NSArray *frequency;
@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *minute;
@property (nonatomic, copy) NSNumber *relativeOffsetMinutes;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)enabled;
- (id)encodedClassName;
- (id)firing;
- (id)frequency;
- (id)groupIdentifier;
- (id)hour;
- (id)label;
- (id)minute;
- (id)relativeOffsetMinutes;
- (void)setEnabled:(id)arg1;
- (void)setFiring:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;
- (void)setRelativeOffsetMinutes:(id)arg1;

@end
