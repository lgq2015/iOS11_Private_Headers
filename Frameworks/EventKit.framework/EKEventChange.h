/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventChange : EKCalendarItemChange

+ (void)fetchEventChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchEventChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchEventChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

@end
