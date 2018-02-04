/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATServiceProxy : ATService <ATServiceObserver> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)messageLinks;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;

@end
