/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
    CoreDAVItemWithNoChildren * _inviteNotification;
    CoreDAVItemWithNoChildren * _inviteReply;
    CoreDAVItemWithNoChildren * _resourceChanged;
}

@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteNotification;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *inviteReply;
@property (nonatomic, readonly) bool isInviteNotification;
@property (nonatomic, readonly) bool isInviteReply;
@property (nonatomic, readonly) bool isResourceChanged;
@property (nonatomic, retain) CoreDAVItemWithNoChildren *resourceChanged;

- (void).cxx_destruct;
- (id)copyParseRules;
- (id)description;
- (id)inviteNotification;
- (id)inviteReply;
- (bool)isInviteNotification;
- (bool)isInviteReply;
- (bool)isResourceChanged;
- (bool)notificationNameIn:(id)arg1;
- (bool)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (void)setInviteNotification:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setResourceChanged:(id)arg1;

@end
