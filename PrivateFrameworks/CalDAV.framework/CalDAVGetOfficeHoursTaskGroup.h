/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {
    ICSDocument * _calendarAvailability;
    CoreDAVPropFindTask * _fetchTask;
    NSURL * _inboxURL;
}

@property (nonatomic, retain) ICSDocument *calendarAvailability;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CoreDAVPropFindTask *fetchTask;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *inboxURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (id)calendarAvailability;
- (id)fetchTask;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 taskManager:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setFetchTask:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)startTaskGroup;

@end
