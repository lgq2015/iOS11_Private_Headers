/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNConnection : NSObject {
    NSDate * _connectedDate;
    void * _session;
    int  _sessionType;
    long long  _status;
    NEVPNManager * _weakmanager;
}

@property (readonly) NSDate *connectedDate;
@property (readonly) NEVPNManager *manager;
@property void*session;
@property (readonly) int sessionType;
@property (readonly) long long status;
@property NEVPNManager *weakmanager;

- (void).cxx_destruct;
- (id)connectedDate;
- (void)dealloc;
- (void)destroySession;
- (id)initWithType:(int)arg1;
- (id)manager;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void*)session;
- (int)sessionType;
- (void)setSession:(void*)arg1;
- (void)setWeakmanager:(id)arg1;
- (bool)startVPNTunnelAndReturnError:(id*)arg1;
- (bool)startVPNTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2;
- (long long)status;
- (void)stopVPNTunnel;
- (void)updateSessionInfoWithCompletionHandler:(id /* block */)arg1;
- (id)weakmanager;

@end
