/* made by EzioChiu.
 */

@protocol CalDAVPrincipal <NSObject, CoreDAVAccountInfoProvider>

@required

- (<CalDAVAccount> *)account;
- (NSSet *)addedCalendars;
- (NSString *)calendarHomePushKey;
- (NSString *)calendarHomeSyncToken;
- (NSURL *)calendarHomeURL;
- (<CalDAVCalendar> *)calendarOfType:(int)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3;
- (NSSet *)calendars;
- (bool)canCreateCalendars;
- (NSURL *)defaultCalendarURL;
- (NSSet *)deletedCalendarURLs;
- (NSURL *)dropBoxURL;
- (NSDateComponents *)eventFilterEndDate;
- (NSDateComponents *)eventFilterStartDate;
- (NSString *)fullName;
- (NSString *)inboxCTag;
- (NSURL *)inboxURL;
- (bool)isDelegate;
- (bool)isEnabled;
- (bool)isEnabledForEvents;
- (bool)isEnabledForTodos;
- (bool)isExpandPropertyReportSupported;
- (bool)isMergeSync;
- (bool)isWritable;
- (NSSet *)modifiedCalendars;
- (NSString *)notificationCollectionCTag;
- (NSURL *)notificationCollectionURL;
- (NSString *)notificationURLString;
- (NSURL *)outboxURL;
- (NSSet *)preferredCalendarUserAddresses;
- (NSURL *)principalURL;
- (NSDictionary *)pushTransports;
- (NSNumber *)quotaFreeBytes;
- (void)removeCalendar:(id <CalDAVCalendar>)arg1;
- (void)removecalendarWithURL:(NSURL *)arg1;
- (void)setCalendarHomePushKey:(NSString *)arg1;
- (void)setCalendarHomeSyncToken:(NSString *)arg1;
- (void)setCalendarHomeURL:(NSURL *)arg1;
- (void)setCanCreateCalendars:(bool)arg1;
- (void)setDefaultCalendarURL:(NSURL *)arg1;
- (void)setDropBoxURL:(NSURL *)arg1;
- (void)setFullName:(NSString *)arg1;
- (void)setInboxCTag:(NSString *)arg1;
- (void)setInboxURL:(NSURL *)arg1;
- (void)setIsDelegate:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsExpandPropertyReportSupported:(bool)arg1;
- (void)setIsWritable:(bool)arg1;
- (void)setNotificationCollectionCTag:(NSString *)arg1;
- (void)setNotificationCollectionURL:(NSURL *)arg1;
- (void)setNotificationURLString:(NSString *)arg1;
- (void)setOutboxURL:(NSURL *)arg1;
- (void)setPreferredCalendarUserAddresses:(NSSet *)arg1;
- (void)setPrincipalURL:(NSURL *)arg1;
- (void)setPushTransports:(NSDictionary *)arg1;
- (void)setQuotaFreeBytes:(NSNumber *)arg1;
- (void)setSupportedCalendarComponentSets:(NSString *)arg1;
- (void)setSupportsCalendarUserSearch:(bool)arg1;
- (void)setSupportsFreebusy:(bool)arg1;
- (NSString *)supportedCalendarComponentSets;
- (bool)supportsCalendarUserSearch;
- (bool)supportsExtendedCalendarQuery;
- (bool)supportsFreebusy;
- (<CoreDAVTaskManager> *)taskManager;
- (NSDateComponents *)todoFilterEndDate;
- (NSDateComponents *)todoFilterStartDate;
- (NSString *)uid;

@optional

- (NSString *)defaultEventCalendarTitle;
- (NSString *)defaultTodoCalendarTitle;
- (void)prepareCalendarsForSyncWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CalDAVPrincipal> *, void*

@end
