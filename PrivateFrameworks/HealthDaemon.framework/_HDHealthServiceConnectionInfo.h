/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHealthServiceConnectionInfo : NSObject {
    NSData * _autoPairData;
    id /* block */  _characteristicsHandler;
    unsigned long long  _connectionOptions;
    long long  _connectionState;
    id /* block */  _dataHandler;
    long long  _mfaStatus;
    id /* block */  _mfaSuccessHandler;
    bool  _pairingAttempted;
    long long  _pairingState;
    NSUUID * _peripheralUUID;
    id /* block */  _sessionHandler;
    unsigned long long  _sessionIdentifier;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, readonly) NSData *autoPairData;
@property (nonatomic, readonly) id /* block */ characteristicsHandler;
@property (nonatomic, readonly) unsigned long long connectionOptions;
@property (nonatomic) long long connectionState;
@property (nonatomic, readonly) id /* block */ dataHandler;
@property (nonatomic, readonly) long long mfaStatus;
@property (nonatomic, readonly) id /* block */ mfaSuccessHandler;
@property (nonatomic) bool pairingAttempted;
@property (nonatomic) long long pairingState;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic, readonly) id /* block */ sessionHandler;
@property (nonatomic) unsigned long long sessionIdentifier;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (id)autoPairData;
- (id /* block */)characteristicsHandler;
- (unsigned long long)connectionOptions;
- (long long)connectionState;
- (id /* block */)dataHandler;
- (id)initWithSessionHandler:(id /* block */)arg1 dataHandler:(id /* block */)arg2 characteristicsHandler:(id /* block */)arg3 mfaSuccessHandler:(id /* block */)arg4 autoPairData:(id)arg5 connectionOptions:(unsigned long long)arg6 timeoutInterval:(double)arg7 peripheralUUID:(id)arg8;
- (void)markMFAStatusComplete;
- (long long)mfaStatus;
- (id /* block */)mfaSuccessHandler;
- (bool)pairingAttempted;
- (long long)pairingState;
- (id)peripheralUUID;
- (id /* block */)sessionHandler;
- (unsigned long long)sessionIdentifier;
- (void)setConnectionState:(long long)arg1;
- (void)setPairingAttempted:(bool)arg1;
- (void)setPairingState:(long long)arg1;
- (void)setSessionIdentifier:(unsigned long long)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (double)timeoutInterval;
- (id)timeoutTimer;

@end
