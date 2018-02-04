/* made by EzioChiu.
 */

@protocol INSearchForMessagesIntentExport <NSObject, JSExport>

@required

- (unsigned long long)attributes;
- (INDateComponentsRange *)dateTimeRange;
- (NSArray *)identifiers;
- (id)init;
- (NSArray *)notificationIdentifiers;
- (NSArray *)recipients;
- (NSArray *)searchTerms;
- (NSArray *)senders;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDateTimeRange:(INDateComponentsRange *)arg1;
- (void)setIdentifiers:(NSArray *)arg1;
- (void)setNotificationIdentifiers:(NSArray *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSearchTerms:(NSArray *)arg1;
- (void)setSenders:(NSArray *)arg1;
- (void)setSpeakableGroupNames:(NSArray *)arg1;
- (NSArray *)speakableGroupNames;

@end
