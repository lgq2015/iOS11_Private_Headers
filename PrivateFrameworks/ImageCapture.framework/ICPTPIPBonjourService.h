/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPBonjourService : NSObject {
    id  _bonjourServiceProperties;
}

- (void)addClient:(id)arg1;
- (id)clientForAddress:(struct __CFData { }*)arg1;
- (id)clientForPID:(unsigned long long)arg1;
- (void)clientTerminated:(id)arg1;
- (bool)createAndPublishNetService;
- (int)createPTPDIPInstanceWithAddress:(struct __CFData { }*)arg1 fileDescriptor:(int)arg2;
- (bool)createSocket;
- (void)dealloc;
- (id)delegate;
- (int)destroyPTPDIPInstance:(id)arg1;
- (void)disconnectClient:(id)arg1;
- (void)dispatchConnectionFromSocket:(int)arg1 withAddress:(struct __CFData { }*)arg2;
- (void)handleNetServiceError:(struct { long long x1; int x2; }*)arg1;
- (id)initWithHostPort:(unsigned int)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5;
- (int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2;
- (int)numClients;
- (struct __CFNetService { }*)publishedService;
- (void)releaseNetService;
- (void)releaseSocket;
- (void)removeClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)startService;
- (void)unlockDeviceForClient:(id)arg1;

@end
