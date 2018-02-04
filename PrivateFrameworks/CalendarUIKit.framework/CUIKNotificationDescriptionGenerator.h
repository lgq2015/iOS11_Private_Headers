/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKNotificationDescriptionGenerator : CUIKDescriptionGenerator {
    NSDateFormatter * _dateFormatter;
    NSDateFormatter * _dateTimeFormatter;
    NSNumberFormatter * _numberFormatter;
    NSDateFormatter * _timeFormatter;
}

+ (id)autoCommentForProposedTime:(id)arg1;
+ (id)autoCommentPrefix;
+ (id)comment:(id)arg1 withInsertedAutoCommentForDate:(id)arg2;
+ (id)sharedGenerator;
+ (bool)stringHasAutoCommentPrefix:(id)arg1;
+ (id)stringWithAutoCommentRemoved:(id)arg1;
+ (id)stringWithOnlyAutoComment:(id)arg1;

- (void).cxx_destruct;
- (id)_adjustedTitle:(id)arg1 maxLength:(unsigned long long)arg2;
- (id)_sharedDateFormatter;
- (id)_sharedDateTimeFormatter;
- (id)_sharedNumberFormatter;
- (id)_sharedTimeFormatter;
- (id)conflictStringForConflictDetails:(id)arg1;
- (id)conflictStringForConflictDetails:(id)arg1 maxTitleLength:(unsigned long long)arg2;
- (id)descriptionForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)descriptionStringsForNotification:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)timePeriodForTimeInterval:(id)arg1;
- (id)titleStringForNotification:(id)arg1 withOptions:(unsigned long long)arg2;

@end
