/* made by EzioChiu.
 */

@protocol CalDAVSubscribedCalendar <CalDAVCalendar>

@required

- (bool)hasAlarmFilter;
- (bool)hasAttachmentFilter;
- (bool)hasTaskFilter;
- (double)refreshInterval;
- (void)setHasAlarmFilter:(bool)arg1;
- (void)setHasAttachmentFilter:(bool)arg1;
- (void)setHasTaskFilter:(bool)arg1;
- (void)setRefreshInterval:(double)arg1;
- (void)setSubscriptionURL:(NSURL *)arg1;
- (NSURL *)subscriptionURL;

@optional

- (bool)autoprovisioned;
- (NSString *)languageCode;
- (NSString *)locationCode;
- (void)setAutoprovisioned:(bool)arg1;
- (void)setLanguageCode:(NSString *)arg1;
- (void)setLocationCode:(NSString *)arg1;

@end
