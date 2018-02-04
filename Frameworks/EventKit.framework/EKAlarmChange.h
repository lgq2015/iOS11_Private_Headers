/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarmChange : EKObjectChange

+ (void)fetchAlarmChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAlarmChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAlarmChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

@end
