/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection * _connection;
}

- (void)_openConnection;
- (void)dealloc;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (Class)deliveryClass;
- (void)setAccount:(id)arg1;

@end
