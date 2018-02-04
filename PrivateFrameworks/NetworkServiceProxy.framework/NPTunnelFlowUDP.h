/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlowUDP : NPTunnelFlowProtocol {
    NWUDPSession * _directSession;
    NSDate * _firstPacketDate;
    NWEndpoint * _remoteEndpoint;
    unsigned long long  _savedDataSize;
    NSMutableArray * _savedDirectData;
}

@property (retain) NWUDPSession *directSession;
@property (retain) NSDate *firstPacketDate;
@property (readonly) NWEndpoint *remoteEndpoint;
@property unsigned long long savedDataSize;
@property (retain) NSMutableArray *savedDirectData;

- (void).cxx_destruct;
- (id)directSession;
- (id)firstPacketDate;
- (void)handleAppData:(id)arg1;
- (void)handleIncomingData:(id)arg1 andError:(id)arg2;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg3 extraProperties:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remoteEndpoint;
- (unsigned long long)savedDataSize;
- (id)savedDirectData;
- (void)sendDataOnDirectSession:(id)arg1;
- (void)setDirectSession:(id)arg1;
- (void)setFirstPacketDate:(id)arg1;
- (void)setSavedDataSize:(unsigned long long)arg1;
- (void)setSavedDirectData:(id)arg1;
- (void)startDirectConnection;
- (void)startHandlingIncomingData;
- (void)stopDirectConnection;

@end
