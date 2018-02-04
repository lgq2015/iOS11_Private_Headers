/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredDeleteMessageOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString * _messageID;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeleteMessageRequest:(id)arg1;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end
