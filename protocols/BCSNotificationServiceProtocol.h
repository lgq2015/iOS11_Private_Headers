/* made by EzioChiu.
 */

@protocol BCSNotificationServiceProtocol

@required

- (void)cancelNotifications;
- (void)notifyParsedBarcodeWithData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <BCSParsedData> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, AWDBarcodeSupportCodeDetectedEvent *, void*

@end
