/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKTransientPassAssertionConnection : NSObject <NPKTransientPassAssertionServerProtocol> {
    bool  _backgrounded;
    NSXPCConnection * _connection;
    <NPKTransientPassAssertionConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NPKTransientPassRequest * _transientPassRequest;
}

@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <NPKTransientPassAssertionConnectionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NPKTransientPassRequest *transientPassRequest;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (bool)isBackgrounded;
- (id)queue;
- (void)setBackgrounded:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceModeRequested:(bool)arg1;
- (void)setTransientPassRequest:(id)arg1;
- (void)setTransientPassUniqueID:(id)arg1;
- (id)transientPassRequest;

@end
