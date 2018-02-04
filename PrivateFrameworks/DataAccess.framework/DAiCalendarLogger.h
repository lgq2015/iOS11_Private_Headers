/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>

+ (id)sharedLogger;

- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)registerWithiCalendar;

@end
