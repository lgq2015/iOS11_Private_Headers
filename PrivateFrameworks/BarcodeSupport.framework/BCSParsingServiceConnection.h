/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSParsingServiceConnection : NSObject {
    NSXPCConnection * _parsingServiceConnection;
}

@property (nonatomic, retain) NSXPCConnection *parsingServiceConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)parseQRCodeFeature:(id)arg1 withReply:(id /* block */)arg2;
- (void)parseQRCodeMetadata:(id)arg1 withReply:(id /* block */)arg2;
- (void)parseQRCodeString:(id)arg1 withReply:(id /* block */)arg2;
- (id)parsingServiceConnection;
- (void)setParsingServiceConnection:(id)arg1;

@end
