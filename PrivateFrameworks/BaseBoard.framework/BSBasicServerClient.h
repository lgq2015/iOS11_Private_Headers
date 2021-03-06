/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {
    int  _cancelled;
    NSObject<OS_xpc_object> * _connection;
    bool  _managingResumeState;
    int  _resumed;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wrapperWithConnection:(id)arg1;

- (id)connection;
- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)resume;
- (void)sendMessage:(id)arg1;
- (void)sendMessageWithPacker:(id /* block */)arg1;
- (void)sendMessageWithPacker:(id /* block */)arg1 replyHandler:(id /* block */)arg2 onQueue:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)suspend;

@end
