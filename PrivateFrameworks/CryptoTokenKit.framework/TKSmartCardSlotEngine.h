/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardSlotEngine : NSObject <NSXPCListenerDelegate, TKProtocolSmartCardSlot> {
    bool  _apduSentSinceLastReset;
    TKSmartCardATR * _atr;
    NSHashTable * _clients;
    <TKSmartCardSlotDelegate> * _delegate;
    NSArray * _forProcesses;
    bool  _idlePowerDownPending;
    unsigned long long  _lastId;
    NSXPCListener * _listener;
    NSObject<OS_os_log> * _log;
    long long  _maxInputLength;
    long long  _maxOutputLength;
    NSString * _name;
    TKPowerMonitor * _powerMonitor;
    NSMutableArray * _powerRequests;
    long long  _powerState;
    long long  _previousState;
    unsigned long long  _protocol;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _registrationConnection;
    NSMapTable * _reservations;
    bool  _securePINChangeSupported;
    bool  _securePINVerificationSupported;
    TKSmartCardSessionEngine * _session;
    NSMutableArray * _sessionRequests;
    long long  _state;
}

@property bool apduSentSinceLastReset;
@property (readonly, copy) NSString *debugDescription;
@property <TKSmartCardSlotDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *forProcesses;
@property (readonly) unsigned long long hash;
@property long long maxInputLength;
@property long long maxOutputLength;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property bool securePINChangeSupported;
@property bool securePINVerificationSupported;
@property TKSmartCardSessionEngine *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_findReservation:(id)arg1 connection:(id)arg2;
- (id)_getReservationId;
- (void)_setupWithName:(id)arg1 delegate:(id)arg2 firstPass:(bool)arg3 reply:(id /* block */)arg4;
- (bool)apduSentSinceLastReset;
- (void)cardPresent:(bool)arg1;
- (void)changeStateTo:(long long)arg1 powerState:(long long)arg2;
- (void)connectCardSessionWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dictionaryForState:(long long)arg1;
- (id)forProcesses;
- (void)getAttrib:(unsigned int)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)leaveSession:(id)arg1 reply:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logWithBytes:(id)arg1 handler:(id /* block */)arg2;
- (long long)maxInputLength;
- (long long)maxOutputLength;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)powerDownWithEject:(bool)arg1 reply:(id /* block */)arg2;
- (void)powerRequestFinished;
- (id)queue;
- (void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(bool)arg3 reply:(id /* block */)arg4;
- (void)resetWithReply:(id /* block */)arg1;
- (void)runUserInteraction:(id)arg1 reply:(id /* block */)arg2;
- (void)scheduleIdlePowerDown;
- (void)schedulePowerRequest:(id /* block */)arg1;
- (bool)securePINChangeSupported;
- (bool)securePINVerificationSupported;
- (void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned int)arg3 reply:(id /* block */)arg4;
- (id)session;
- (void)sessionWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)setApduSentSinceLastReset:(bool)arg1;
- (void)setAttrib:(unsigned int)arg1 data:(id)arg2 reply:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setForProcesses:(id)arg1;
- (void)setMaxInputLength:(long long)arg1;
- (void)setMaxOutputLength:(long long)arg1;
- (void)setProtocol:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)setSecurePINChangeSupported:(bool)arg1;
- (void)setSecurePINVerificationSupported:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setupSlotWithReply:(id /* block */)arg1;
- (void)setupWithName:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (void)terminate;

@end
