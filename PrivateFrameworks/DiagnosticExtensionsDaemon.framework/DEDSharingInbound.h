/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDSharingInbound : NSObject {
    DEDSharingConnection * _connection;
    DEDController * _delegate;
    NSObject<OS_os_log> * _log;
}

@property DEDSharingConnection *connection;
@property DEDController *delegate;
@property (retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)connection;
- (id)delegate;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2;
- (void)handleObject:(id)arg1 forSFSession:(id)arg2 forBugSession:(id)arg3 callingDevice:(id)arg4;
- (void)handleRequest:(id)arg1 forSFSession:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithController:(id)arg1 sharingConnection:(id)arg2;
- (id)log;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;

@end
