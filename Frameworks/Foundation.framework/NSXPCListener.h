/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCListener : NSObject {
    <NSXPCListenerDelegate> * _delegate;
    id  _reserved1;
    id  _reserved2;
    NSString * _serviceName;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _userQueue;
    void * _xconnection;
    void * reserved0;
}

@property <NSXPCListenerDelegate> *delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_UUID;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)serviceListener;

- (id)_initShared;
- (id)_queue;
- (void)_setQueue:(id)arg1;
- (id)_xpcConnection;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpoint;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)stop;
- (void)suspend;

// Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager

- (id)initCellularPlanDatabaseServer;
- (id)initVinylTestServer;

@end
