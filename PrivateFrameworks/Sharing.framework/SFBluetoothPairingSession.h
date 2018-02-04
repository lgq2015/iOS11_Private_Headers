/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFBluetoothPairingSession : NSObject {
    BOOL  _btAddrStr;
    bool  _btConnecting;
    struct BTDeviceImpl { } * _btDevice;
    struct BTPairingAgentImpl { } * _btPairingAgent;
    bool  _btPairingAgentStarted;
    struct BTSessionImpl { } * _btSession;
    bool  _btSessionAddedServiceCallback;
    bool  _btSessionAttaching;
    bool  _btStarted;
    id /* block */  _completionHandler;
    NSString * _deviceAddress;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    NSString * _name;
    unsigned int  _retryCount;
    bool  _retryOnDetach;
    NSObject<OS_dispatch_source> * _retryTimer;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSObject<OS_os_transaction> * _transaction;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    WPClient * _wpClient;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *deviceAddress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (void)_activate;
- (void)_btDeletePairingAndRetry;
- (int)_btEnsureStarted;
- (void)_btEnsureStopped;
- (void)_completed:(int)arg1;
- (void)_invalidate;
- (void)activate;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)deviceAddress;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)name;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setDispatchQueue:(id)arg1;

@end
