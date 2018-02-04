/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATServiceProxyConnection : NSObject <ATServiceObserver, ATServiceProxyConnection> {
    NSXPCConnection * _connection;
    ATService * _service;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ATService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id /* block */)arg1;
- (id)connection;
- (void)fetchMessageLinksWithCompletion:(id /* block */)arg1;
- (id)initWithService:(id)arg1 connection:(id)arg2;
- (id)service;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;

@end
