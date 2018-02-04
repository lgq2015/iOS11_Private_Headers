/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CalSearch : NSObject {
    <CalSearchDataSink> * _dataSink;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _dataSourceDeallocLock;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; } * _database;
    bool  _dateToStartShowingResultsSentToDataSink;
    struct CalFilter { } * _filter;
    bool  _implementsCancellationCallback;
    struct __CFSet { } * _matchedEventsSet;
    struct __CFSet { } * _matchedLocationsSet;
    struct __CFSet { } * _matchedParticipantsSet;
    bool  _moreResultsAvailable;
    struct __CFArray { } * _partialCachedDays;
    struct __CFArray { } * _partialCachedDaysIndexes;
    struct __CFArray { } * _partialCachedOccurrences;
    struct __CFArray { } * _partialResults;
    bool  _searchAttendees;
    bool  _searchLocations;
    bool  _searchParticipants;
    struct __CFString { } * _searchString;
    int  _seed;
    bool  _stopLoadingResults;
}

@property bool searchAttendees;
@property bool searchLocations;
@property bool searchParticipants;

- (void).cxx_destruct;
- (void)_addMatchedEventIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedLocationIds:(struct __CFArray { }*)arg1;
- (void)_addMatchedParticipantIds:(struct __CFArray { }*)arg1;
- (struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)_createEventIdsSearchContext;
- (struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createLocationIdsSearchContext;
- (struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)_createParticipantIdsSearchContext;
- (struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)_createSearchContext;
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)arg1;
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext { struct __CFSet {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; bool *x5; bool *x6; double x7; double x8; int x9; double x10; unsigned int x11; struct CalEventOccurrenceCache {} *x12; int (*x13)(); void *x14; int x15; bool x16; struct __CFString {} *x17; double x18; bool x19; double x20; }*)arg1;
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext { struct __CFArray {} *x1; struct __CFSet {} *x2; struct __CFSet {} *x3; bool *x4; bool *x5; struct CalDatabase {} *x6; }*)arg1;
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext { struct __CFArray {} *x1; unsigned int x2; bool *x3; bool *x4; struct CalDatabase {} *x5; }*)arg1;
- (void)_startLoadingResults;
- (void)dealloc;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)arg1 filter:(struct CalFilter { }*)arg2 dataSink:(id)arg3;
- (bool)moreResultsAvailable;
- (bool)searchAttendees;
- (bool)searchLocations;
- (bool)searchParticipants;
- (int)seed;
- (void)setSearchAttendees:(bool)arg1;
- (void)setSearchLocations:(bool)arg1;
- (void)setSearchParticipants:(bool)arg1;
- (void)startSearching;
- (void)stopSearching;

@end
