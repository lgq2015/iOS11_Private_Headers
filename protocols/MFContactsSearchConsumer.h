/* made by EzioChiu.
 */

@protocol MFContactsSearchConsumer <NSObject>

@optional

- (void)beganNetworkActivity;
- (void)consumeAutocompleteSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)consumeCorecipientSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)consumeSearchResults:(NSArray *)arg1 type:(unsigned long long)arg2 taskID:(NSNumber *)arg3;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)finishedTaskWithID:(NSNumber *)arg1;

@end
