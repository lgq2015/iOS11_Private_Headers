/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSQRCodeParser : NSObject {
    BCSNotificationServiceConnection * _notificationServiceConnection;
    BCSParsingServiceConnection * _parsingServiceConnection;
}

@property (nonatomic, readonly) BCSNotificationServiceConnection *notificationServiceConnection;

- (void).cxx_destruct;
- (void)_parseMetadataObject:(id)arg1 reply:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_qrCodeFeatureFromImage:(struct CGImage { }*)arg1;
- (id)notificationServiceConnection;
- (void)parseCodeFromImage:(struct CGImage { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)parseCodeFromString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage { }*)arg1 completion:(id /* block */)arg2;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1;
- (void)stopQRCodeParsingSession;

@end
