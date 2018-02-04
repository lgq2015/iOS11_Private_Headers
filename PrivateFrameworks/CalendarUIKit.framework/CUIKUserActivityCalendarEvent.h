/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityCalendarEvent : CUIKUserActivityWithSource {
    NSDate * _endDate;
    NSString * _externalID;
    NSString * _location;
    NSString * _relatedUniqueIdentifier;
    NSDate * _startDate;
    NSString * _title;
    unsigned long long  _view;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long view;

- (void).cxx_destruct;
- (id)dictionary;
- (id)eventFromStore:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithEvent:(id)arg1 view:(unsigned long long)arg2 forceLocal:(bool)arg3;
- (id)title;
- (void)updateActivity:(id)arg1;
- (unsigned long long)view;

@end
