/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {
    NSString * _destinationMailboxID;
    NSArray * _originalFlags;
    NSString * _sourceMailboxID;
    NSArray * _sourceRemoteIDs;
    NSArray * _temporaryRemoteIDs;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessages:(id)arg1 temporaryIDs:(id)arg2 sourceMailbox:(id)arg3 destinationMailbox:(id)arg4;
- (bool)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end
