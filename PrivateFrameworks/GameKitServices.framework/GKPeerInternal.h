/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved> {
    id * _addrList;
    double  _connectTimeout;
    NSString * _displayName;
    unsigned int * _interfaceList;
    bool  _isBusy;
    int  _lookupServiceCount;
    struct _DNSServiceRef_t {} ** _lookupServiceList;
    int  _lookupServiceSize;
    bool  _moreResolvesComing;
    bool  _needsToTimeout;
    unsigned int  _pid;
    struct _DNSServiceRef_t { } * _resolveService;
    int  _serviceCount;
    NSString * _serviceName;
    unsigned int  _servicePort;
    GKSessionInternal * _session;
    struct _DNSServiceRef_t { } * _txtRecordService;
}

@property (getter=isBusy) bool busy;
@property double connectTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property bool moreResolvesComing;
@property bool needsToTimeout;
@property (readonly) unsigned int pid;
@property struct _DNSServiceRef_t { }*resolveService;
@property int serviceCount;
@property (readonly) NSString *serviceName;
@property unsigned int servicePort;
@property (nonatomic, retain) GKSessionInternal *session;
@property (readonly) Class superclass;
@property struct _DNSServiceRef_t { }*txtRecordService;

+ (void)freeLookupList:(struct _DNSServiceRef_t {}**)arg1 andAddrList:(id*)arg2 andInterfaceList:(unsigned int*)arg3 count:(int)arg4;

- (void)addLookup:(struct _DNSServiceRef_t { }*)arg1;
- (void)cleanupForGKTable:(id)arg1;
- (void)clearResolving;
- (double)connectTimeout;
- (bool)containsLookupService:(struct _DNSServiceRef_t { }*)arg1;
- (void)copyLookupList:(struct _DNSServiceRef_t {}***)arg1 count:(int*)arg2;
- (void)dealloc;
- (id)displayName;
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2 serviceName:(id)arg3;
- (bool)isBusy;
- (bool)moreResolvesComing;
- (bool)needsToTimeout;
- (unsigned int)pid;
- (void)removeAndReturnLookupList:(struct _DNSServiceRef_t {}***)arg1 andAddrList:(id**)arg2 andInterfaceList:(unsigned int**)arg3 count:(int*)arg4;
- (struct _DNSServiceRef_t { }*)resolveService;
- (int)serviceCount;
- (id)serviceName;
- (unsigned int)servicePort;
- (id)session;
- (void)setAddr:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1 interface:(unsigned int)arg2 forLookupService:(struct _DNSServiceRef_t { }*)arg3;
- (void)setBusy:(bool)arg1;
- (void)setConnectTimeout:(double)arg1;
- (void)setMoreResolvesComing:(bool)arg1;
- (void)setNeedsToTimeout:(bool)arg1;
- (void)setResolveService:(struct _DNSServiceRef_t { }*)arg1;
- (void)setServiceCount:(int)arg1;
- (void)setServicePort:(unsigned int)arg1;
- (void)setSession:(id)arg1;
- (void)setTxtRecordService:(struct _DNSServiceRef_t { }*)arg1;
- (void)stopResolving;
- (void)stopTXTRecordMonitoring;
- (bool)tryDetruncateDisplayName:(id)arg1;
- (struct _DNSServiceRef_t { }*)txtRecordService;
- (int)usableAddrs;

@end
