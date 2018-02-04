/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPServer : NSObject <NSXPCListenerDelegate, _DPDaemonProtocol> {
    _DPStorage * _db;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) _DPStorage *db;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (bool)shouldNotRecord:(id)arg1;

- (void).cxx_destruct;
- (id)db;
- (id)init;
- (id)initWithDatabaseDirectoryPath:(id)arg1 reportsDirectoryPath:(id)arg2 enablePeriodicTasks:(bool)arg3 enterSandbox:(bool)arg4;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (void)recordValues:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(id /* block */)arg3;
- (id)reportsNotYetSubmittedInDirecory:(id)arg1;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)arg1;
- (bool)retireReports:(id)arg1 inDirectory:(id)arg2;
- (void)retireReports:(id)arg1 withReply:(id /* block */)arg2;
- (void)setupPeriodicTasksWith:(id)arg1;
- (void)start;

@end
