/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWITCPConnection : NSObject {
    struct _lockdown_connection { } * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <_RWITCPConnectionDelegate> * _delegate;
    NSMutableData * _incomingData;
    NSObject<OS_dispatch_source> * _inputSource;
    bool  _inputSourceCancelled;
    NSMutableArray * _outputMessageQueue;
    NSObject<OS_dispatch_source> * _outputSource;
    bool  _outputSourceCancelled;
    bool  _outputSourceSuspended;
    _RWITCPServer * _server;
    bool  _shutdown;
    int  _socket;
    long long  _type;
}

@property (nonatomic) <_RWITCPConnectionDelegate> *delegate;

+ (id)TCPConnectionWithLockdownConnection:(struct _lockdown_connection { }*)arg1;
+ (id)TCPConnectionWithPort:(unsigned short)arg1;
+ (id)TCPConnectionWithResolvedNetService:(id)arg1;

- (void).cxx_destruct;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_commonInitializationWithServer:(id)arg1 socket:(int)arg2 type:(long long)arg3;
- (void)_createInputSource;
- (void)_createOutputSource;
- (void)_dispatchSourceCancelled;
- (void)_handleInput;
- (void)_handleOutput;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)_setOutputSourceSuspended:(bool)arg1;
- (void)_shutdown;
- (void)dealloc;
- (id)delegate;
- (id)initWithServer:(id)arg1 lockdownConnection:(struct _lockdown_connection { }*)arg2;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (void)sendMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startReceiving;

@end
