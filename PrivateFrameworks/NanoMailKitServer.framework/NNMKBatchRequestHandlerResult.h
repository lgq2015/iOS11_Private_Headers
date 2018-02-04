/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKBatchRequestHandlerResult : NSObject {
    NSArray * _fetchResults;
    NSArray * _mailboxesToTriggerFullSync;
    NSArray * _messageIdsForRequestingContentDownload;
    NSArray * _missingMessageHeaderIds;
}

@property (nonatomic, retain) NSArray *fetchResults;
@property (nonatomic, retain) NSArray *mailboxesToTriggerFullSync;
@property (nonatomic, retain) NSArray *messageIdsForRequestingContentDownload;
@property (nonatomic, retain) NSArray *missingMessageHeaderIds;

- (void).cxx_destruct;
- (id)fetchResults;
- (id)mailboxesToTriggerFullSync;
- (id)messageIdsForRequestingContentDownload;
- (id)missingMessageHeaderIds;
- (void)setFetchResults:(id)arg1;
- (void)setMailboxesToTriggerFullSync:(id)arg1;
- (void)setMessageIdsForRequestingContentDownload:(id)arg1;
- (void)setMissingMessageHeaderIds:(id)arg1;

@end
