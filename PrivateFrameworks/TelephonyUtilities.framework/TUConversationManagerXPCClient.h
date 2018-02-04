/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationManagerXPCClient : NSObject <TUConversationManagerDataSource, TUConversationManagerXPCClient> {
    NSDictionary * _conversationsByGroupUUID;
    <TUConversationManagerDataSourceDelegate> * _delegate;
    bool  _hasRequestedInitialState;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, copy) NSDictionary *conversationsByGroupUUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUConversationManagerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRequestedInitialState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)asynchronousServer;
+ (id)conversationManagerAllowedClasses;
+ (id)conversationManagerClientXPCInterface;
+ (id)conversationManagerServerXPCInterface;
+ (void)setAsynchronousServer:(id)arg1;
+ (void)setSynchronousServer:(id)arg1;
+ (id)synchronousServer;

- (void).cxx_destruct;
- (void)_invokeCompletionHandler:(id /* block */)arg1;
- (void)_requestInitialStateIfNecessary;
- (void)_requestInitialStateWithCompletionHandler:(id /* block */)arg1;
- (id)conversationsByGroupUUID;
- (void)dealloc;
- (id)delegate;
- (bool)hasRequestedInitialState;
- (id)init;
- (void)invalidate;
- (id)queue;
- (void)registerWithCompletionHandler:(id /* block */)arg1;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setConversationsByGroupUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasRequestedInitialState:(bool)arg1;
- (void)setToken:(int)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousServerWithErrorHandler:(id /* block */)arg1;
- (int)token;
- (oneway void)updateConversationsByGroupUUID:(id)arg1;
- (id)xpcConnection;

@end
