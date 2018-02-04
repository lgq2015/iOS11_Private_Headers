/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {
    CalDAVCalendarServerAccessItem * _access;
    CoreDAVItemWithNoChildren * _calendarPublic;
    CoreDAVItemWithHrefChildItem * _hostURL;
    CoreDAVHrefItem * _href;
    CoreDAVItemWithNoChildren * _inviteStatus;
    CalDAVCalendarServerOrganizerItem * _organizer;
    CoreDAVLeafItem * _summary;
    CalDAVSupportedCalendarComponentSet * _supportedCalendarComponentSet;
    CoreDAVLeafItem * _uid;
}

@property (nonatomic, retain) CalDAVCalendarServerAccessItem *access;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *calendarPublic;
@property (nonatomic, retain) CoreDAVItemWithHrefChildItem *hostURL;
@property (nonatomic, retain) CoreDAVHrefItem *href;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteStatus;
@property (nonatomic, retain) CalDAVCalendarServerOrganizerItem *organizer;
@property (nonatomic, retain) CoreDAVLeafItem *summary;
@property (nonatomic, retain) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet;
@property (nonatomic, retain) CoreDAVLeafItem *uid;

- (void).cxx_destruct;
- (id)access;
- (id)calendarPublic;
- (id)copyParseRules;
- (id)hostURL;
- (id)href;
- (id)init;
- (id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4;
- (id)inviteStatus;
- (bool)isComponentSupportedForString:(id)arg1;
- (id)organizer;
- (void)setAccess:(id)arg1;
- (void)setCalendarPublic:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSupportedCalendarComponentSet:(id)arg1;
- (void)setUid:(id)arg1;
- (id)summary;
- (id)supportedCalendarComponentSet;
- (id)uid;

@end
