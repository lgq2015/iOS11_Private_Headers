/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet * _calendarHomes;
    NSURL * _delegatePrincipalURL;
    NSURL * _dropboxURL;
    NSURL * _inboxURL;
    NSURL * _notificationURL;
    NSURL * _outboxURL;
    NSSet * _preferredUserAddresses;
    CalDAVServerVersion * _serverVersion;
    bool  _supportsCalendarUserSearch;
    NSURL * _updatedPrincipalURL;
}

@property (nonatomic, readonly) NSSet *calendarHomes;
@property (nonatomic, retain) NSURL *delegatePrincipalURL;
@property (nonatomic, readonly) NSURL *dropboxURL;
@property (nonatomic, readonly) NSURL *inboxURL;
@property (nonatomic, readonly) NSURL *notificationURL;
@property (nonatomic, readonly) NSURL *outboxURL;
@property (nonatomic, readonly) NSSet *preferredUserAddresses;
@property (nonatomic, readonly) CalDAVServerVersion *serverVersion;
@property (nonatomic, readonly) bool supportsCalendarUserSearch;
@property (nonatomic, readonly) NSURL *updatedPrincipalURL;

- (void).cxx_destruct;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)calendarHomes;
- (id)delegatePrincipalURL;
- (id)description;
- (id)dropboxURL;
- (bool)forceOptionsRequest;
- (id)homeSet;
- (id)inboxURL;
- (id)notificationURL;
- (id)outboxURL;
- (id)preferredUserAddresses;
- (void)processPrincipalHeaders:(id)arg1;
- (id)serverVersion;
- (void)setDelegatePrincipalURL:(id)arg1;
- (void)startTaskGroup;
- (bool)supportsCalendarUserSearch;
- (id)updatedPrincipalURL;
- (id)userAddresses;

@end
