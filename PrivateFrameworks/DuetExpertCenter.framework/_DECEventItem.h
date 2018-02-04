/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECEventItem : _DECItem {
    NSString * _calendarTitle;
    NSString * _eventIdentifier;
    NSString * _eventTitle;
    NSData * _imageData;
    bool  _isAllDay;
    bool  _isFreeTime;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *calendarTitle;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) NSString *eventTitle;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) bool isFreeTime;
@property (nonatomic, readonly) NSString *value;

+ (id)eventWithEventIdentifier:(id)arg1 eventTitle:(id)arg2 calendarTitle:(id)arg3 value:(id)arg4 imageData:(id)arg5 isAllDay:(bool)arg6 isFeeeTime:(bool)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECEventItem:(id)arg1;
- (id)calendarTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (id)eventTitle;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 eventTitle:(id)arg2 calendarTitle:(id)arg3 value:(id)arg4 imageData:(id)arg5 isAllDay:(bool)arg6 isFeeeTime:(bool)arg7;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (bool)isFreeTime;
- (id)value;

@end
