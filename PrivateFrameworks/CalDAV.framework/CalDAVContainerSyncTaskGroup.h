/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    <CalDAVCalendar> * _calendar;
    NSDateComponents * _eventFilterEndDate;
    NSDateComponents * _eventFilterStartDate;
    bool  _fallbackOnMultiGetError;
    int  _fetchingEtagState;
    bool  _getScheduleChanges;
    bool  _getScheduleTags;
    bool  _supportsExtendedCalendarQuery;
    bool  _syncEvents;
    bool  _syncTodos;
    NSDateComponents * _todoFilterEndDate;
    NSDateComponents * _todoFilterStartDate;
}

@property (nonatomic, retain) <CalDAVCalendar> *calendar;
@property (nonatomic, retain) NSDateComponents *eventFilterEndDate;
@property (nonatomic, retain) NSDateComponents *eventFilterStartDate;
@property (nonatomic) bool fallbackOnMultiGetError;
@property (nonatomic) bool getScheduleChanges;
@property (nonatomic) bool getScheduleTags;
@property (nonatomic) bool supportsExtendedCalendarQuery;
@property (nonatomic) bool syncEvents;
@property (nonatomic) bool syncTodos;
@property (nonatomic, retain) NSDateComponents *todoFilterEndDate;
@property (nonatomic, retain) NSDateComponents *todoFilterStartDate;

- (void).cxx_destruct;
- (bool)_shouldFetchEventsForState:(int)arg1;
- (bool)_shouldFetchTodosForState:(int)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)calendar;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (bool)fallbackOnMultiGetError;
- (bool)getScheduleChanges;
- (bool)getScheduleTags;
- (id)initWithCalendar:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(bool)arg5 getScheduleChanges:(bool)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(bool)arg4 getScheduleChanges:(bool)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (void)setCalendar:(id)arg1;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setFallbackOnMultiGetError:(bool)arg1;
- (void)setGetScheduleChanges:(bool)arg1;
- (void)setGetScheduleTags:(bool)arg1;
- (void)setSupportsExtendedCalendarQuery:(bool)arg1;
- (void)setSyncEvents:(bool)arg1;
- (void)setSyncTodos:(bool)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (bool)shouldFetchMoreETags;
- (bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (bool)supportsExtendedCalendarQuery;
- (bool)syncEvents;
- (bool)syncTodos;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;

@end
