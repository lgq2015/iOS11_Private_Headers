/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADelivery : MFMailDelivery {
    DAMailAccount * _DAMailAccount;
    NSString * _accountId;
    NSString * _folderId;
    NSString * _forwardedLongId;
    NSString * _forwardedMessageId;
    NSString * _repliedLongId;
    NSString * _repliedMessageId;
}

- (void)dealloc;
- (id)deliverSynchronously;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)newMessageWriter;
- (void)setDAMailAccount:(id)arg1;

@end
