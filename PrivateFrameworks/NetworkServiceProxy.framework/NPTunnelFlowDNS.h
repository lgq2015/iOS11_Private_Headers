/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlowDNS : NPTunnelFlowUDP {
    NSPDNSPacket * _directDNSResponse;
    long long  _directResult;
    NSPDNSPacket * _query;
    bool  _telemetryReported;
    NSPDNSPacket * _tunnelDNSResponse;
    void * _tunnelResponseTimer;
    long long  _tunnelResult;
}

@property (retain) NSPDNSPacket *directDNSResponse;
@property long long directResult;
@property (retain) NSPDNSPacket *query;
@property bool telemetryReported;
@property (retain) NSPDNSPacket *tunnelDNSResponse;
@property void*tunnelResponseTimer;
@property long long tunnelResult;

- (void).cxx_destruct;
- (id)addDNSInfoToTelemetry:(id)arg1;
- (bool)checkAndReportTelemetry;
- (void)cleanupLosingConnection:(bool)arg1;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
- (id)createStateDictionaryWithResult:(long long)arg1 response:(id)arg2;
- (id)directDNSResponse;
- (long long)directResult;
- (void)handleAppData:(id)arg1;
- (void)handleTunnelConnected;
- (id)query;
- (id)resultToString:(long long)arg1;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setDirectDNSResponse:(id)arg1;
- (void)setDirectResult:(long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setTelemetryReported:(bool)arg1;
- (void)setTunnelDNSResponse:(id)arg1;
- (void)setTunnelResponseTimer:(void*)arg1;
- (void)setTunnelResult:(long long)arg1;
- (bool)shouldSendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (bool)telemetryReported;
- (id)tunnelDNSResponse;
- (void*)tunnelResponseTimer;
- (long long)tunnelResult;

@end
