/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface BirthdayCalendarUpdater : NSOperation {
    NSMutableDictionary * _accountIdentifiersToIsFacebook;
    ACAccountStore * _accountStore;
    void * _addressBook;
    NSString * _birthdaySummary;
    void * _calendar;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; } * _database;
    long long  _defaultAlarmOffset;
    void * _facebookCalendar;
}

+ (id)_dateFromBirthdayComponents:(id)arg1;

- (void).cxx_destruct;
- (bool)_areNormalizedBirthdaysTheSame:(id)arg1 birthday2:(id)arg2;
- (id)_birthdayCalendarForCalendarScale:(id)arg1;
- (id)_birthdayCalendarForCalendarScale:(id)arg1 useCurrentTimezone:(bool)arg2;
- (bool)_isPersonFromFacebook:(void*)arg1;
- (bool)_isYearlessBirthday:(id)arg1;
- (int)_processPerson:(void*)arg1 withBirthdays:(id)arg2 forCalendar:(void*)arg3 preExistingEvents:(id)arg4 addedBirthdayRecord:(id)arg5;
- (int)_pruneEventsFromCalendar:(void*)arg1 matchingFacebookStatus:(bool)arg2 andStoreInRecord:(id)arg3;
- (void)addDefaultAlarmToEvent:(void*)arg1;
- (id)copyBirthdayEventSummaryForPerson:(void*)arg1;
- (id)copyNormalizedBirthdaysForPerson:(void*)arg1;
- (id)copyOldestNormalizedBirthdaysForPerson:(void*)arg1;
- (void)dealloc;
- (id)init;
- (void)main;
- (void*)newBirthdayEventForBirthday:(id)arg1 andPerson:(void*)arg2;
- (bool)setBirthday:(id)arg1 forEvent:(void*)arg2;

@end
