/* made by EzioChiu.
 */

@protocol SOSServerProtocol <NSObject>

@required

- (void)isSendingLocationUpdate:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)mostRecentLocationSentWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, void*
- (void)startSendingLocationUpdateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id*
- (void)stopSendingLocationUpdate;
- (void)willStartSendingLocationUpdate;

@end
