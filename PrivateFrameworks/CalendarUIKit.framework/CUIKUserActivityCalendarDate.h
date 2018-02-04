/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {
    NSDate * _date;
    unsigned long long  _view;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long view;

- (void).cxx_destruct;
- (id)date;
- (id)dictionary;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2;
- (id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)view;

@end
