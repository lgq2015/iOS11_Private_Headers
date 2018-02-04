/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDChatStore : NSObject {
    NSString * _lastModificationStamp;
    <IMDMessagePTaskStore> * _messagePTaskStore;
}

@property (retain) <IMDMessagePTaskStore> *messagePTaskStore;
@property (retain) NSString *modificationStamp;

+ (id)sharedInstance;

- (void)_updateModificationDate;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2;
- (void)addMessageWithGUID:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(bool)arg3;
- (void)archiveChat:(id)arg1;
- (id)chatsGUIDsForMessageWithGUID:(id)arg1;
- (id)chatsWithHandle:(id)arg1 onService:(id)arg2;
- (id)chatsWithRoomname:(id)arg1 onService:(id)arg2;
- (void)dealloc;
- (void)deleteChat:(id)arg1;
- (id)init;
- (id)loadAllChats;
- (id)messagePTaskStore;
- (id)modificationStamp;
- (void)removeMessageWithGUID:(id)arg1 fromChat:(id)arg2;
- (void)setChatIsFiltered:(bool)arg1 withChatGuid:(id)arg2;
- (void)setMessagePTaskStore:(id)arg1;
- (void)setModificationStamp:(id)arg1;
- (id)storeChat:(id)arg1;
- (void)unarchiveChat:(id)arg1;
- (unsigned long long)unreadCountForChat:(id)arg1;

@end
