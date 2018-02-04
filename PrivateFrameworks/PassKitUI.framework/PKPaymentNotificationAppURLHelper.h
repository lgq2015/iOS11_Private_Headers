/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentNotificationAppURLHelper : NSObject

+ (id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 usingDeviceAccountNumber:(bool)arg5;
+ (id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (bool)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1;

@end
