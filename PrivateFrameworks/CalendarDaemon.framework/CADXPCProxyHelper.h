/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADXPCProxyHelper : NSObject {
    NSXPCConnection * _connection;
    CADDatabaseInitializationOptions * _initializationOptions;
    Protocol * _protocol;
    bool  _synchronous;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;

- (void).cxx_destruct;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;
- (id)_getReplyBlockFromInvocation:(id)arg1;
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;
- (bool)_shouldResendInitializationOptionsForInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(bool)arg3;
- (id)initializationOptions;
- (id)methodSignatureForSelector:(SEL)arg1;
- (long long)replyBlockArgumentIndex:(id)arg1;
- (void)setInitializationOptions:(id)arg1;

@end