/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol>

- (void)_cancelNotifications;
- (void)cancelNotifications;
- (void)notifyParsedBarcodeWithData:(id)arg1 reply:(id /* block */)arg2;

@end
