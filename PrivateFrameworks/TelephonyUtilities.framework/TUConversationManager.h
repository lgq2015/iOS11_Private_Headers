/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationManager : NSObject <TUConversationManagerDataSourceDelegate> {
    <TUConversationManagerDataSource> * _dataSource;
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSSet *activeConversations;
@property (nonatomic, readonly) <TUConversationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeConversationWithGroupUUID:(id)arg1;
- (id)activeConversations;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)conversationWithGroupUUID:(id)arg1;
- (void)conversationsChangedForDataSource:(id)arg1 oldConversationsByGroupUUID:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)delegateToQueue;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)queue;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;

@end
