/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned long long  _stateHandle;
    bool  _testMode;
    struct NSMutableSet { Class x1; } * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) bool testMode;

+ (id)sharedPairingDaemon;

- (void).cxx_destruct;
- (void)_activate;
- (void)_connectionInvalidated:(id)arg1;
- (id)_copyHomeKitWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyOrCreateWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)_copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (int)_deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)_findHomeKitPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (void)_invalidate;
- (int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2;
- (int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)_stateDump;
- (void)activate;
- (id)copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (id)copyPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2;
- (void)dealloc;
- (int)deleteIdentityWithOptions:(unsigned long long)arg1;
- (id)description;
- (id)detailedDescription;
- (id)dispatchQueue;
- (id)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3;
- (id)init;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)reset;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2;
- (int)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 removeAdminAllowed:(bool)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setTestMode:(bool)arg1;
- (id)testListenerEndpoint;
- (bool)testMode;

@end
