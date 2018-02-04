/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString * _messageID;
    unsigned long long  _offFlags;
    unsigned long long  _onFlags;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetFlagsRequest:(id)arg1;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end