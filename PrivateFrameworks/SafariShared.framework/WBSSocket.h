/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSocket : NSObject <NSStreamDelegate> {
    id /* block */  _didConnectHandler;
    id /* block */  _didDisconnectHandler;
    id /* block */  _didReceiveDataHandler;
    bool  _hasCalledConnectionHandler;
    NSString * _host;
    NSInputStream * _inputStream;
    bool  _open;
    NSMutableData * _outgoingData;
    NSOutputStream * _outputStream;
    unsigned long long  _port;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ didConnectHandler;
@property (copy) id /* block */ didDisconnectHandler;
@property (copy) id /* block */ didReceiveDataHandler;
@property bool hasCalledConnectionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *host;
@property (getter=isOpen) bool open;
@property (nonatomic, readonly) unsigned long long port;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_didConnect;
- (void)_didDisconnectWithError:(id)arg1;
- (void)_didReceiveData;
- (id)_initWithHost:(id)arg1 port:(unsigned long long)arg2 inputStream:(id)arg3 outputStream:(id)arg4;
- (void)_sendDataIfPossible;
- (void)dealloc;
- (id /* block */)didConnectHandler;
- (id /* block */)didDisconnectHandler;
- (id /* block */)didReceiveDataHandler;
- (bool)hasCalledConnectionHandler;
- (id)host;
- (id)init;
- (id)initWithDescriptor:(int)arg1 port:(unsigned long long)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2;
- (bool)isOpen;
- (void)open;
- (unsigned long long)port;
- (void)send:(id)arg1;
- (void)setDidConnectHandler:(id /* block */)arg1;
- (void)setDidDisconnectHandler:(id /* block */)arg1;
- (void)setDidReceiveDataHandler:(id /* block */)arg1;
- (void)setHasCalledConnectionHandler:(bool)arg1;
- (void)setOpen:(bool)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
