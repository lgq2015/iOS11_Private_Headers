/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNDateHelper : NSObject

+ (id)componentsForJanuary1WithYear:(long long)arg1;
+ (id)componentsFromDate:(id)arg1;
+ (long long)currentGregorianYearInGMT;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
+ (id)gregorianCalendar;
+ (id)gregorianCalendarInGMT;
+ (long long)gregorianYearFromDate:(id)arg1;
+ (long long)gregorianYearInGMTFromDate:(id)arg1;
+ (bool)isComponentsEmpty:(id)arg1;

@end
