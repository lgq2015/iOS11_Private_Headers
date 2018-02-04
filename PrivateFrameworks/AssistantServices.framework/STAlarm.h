/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface STAlarm : STSiriModelObject <NSCopying> {
    long long  _daysOfWeek;
    bool  _enabled;
    long long  _hourOfDay;
    NSString * _label;
    long long  _minuteOfHour;
}

@property (nonatomic) long long daysOfWeek;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long hourOfDay;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long minuteOfHour;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysOfWeek;
- (void)encodeWithCoder:(id)arg1;
- (long long)hourOfDay;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)label;
- (long long)minuteOfHour;
- (void)setDaysOfWeek:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHourOfDay:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinuteOfHour:(long long)arg1;

@end
