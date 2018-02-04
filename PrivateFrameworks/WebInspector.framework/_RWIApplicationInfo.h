/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIApplicationInfo : NSObject {
    bool  _allowsRemoteAutomation;
    unsigned long long  _applicationState;
    NSString * _bundleId;
    _RWIRelayConnectionToApplication * _connection;
    NSString * _debuggerConnectionIdentifier;
    bool  _hasRemoteDebugSession;
    bool  _hasUpdatedFromListing;
    int  _hostApplicationPID;
    NSString * _name;
    int  _pid;
    bool  _proxy;
}

@property (nonatomic, readonly) bool allowsRemoteAutomation;
@property (nonatomic, readonly) unsigned long long applicationState;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, retain) _RWIRelayConnectionToApplication *connection;
@property (nonatomic, copy) NSString *debuggerConnectionIdentifier;
@property (nonatomic, readonly) bool hasRemoteDebugSession;
@property (nonatomic, readonly) bool hasUpdatedFromListing;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=isProxy, nonatomic) bool proxy;

+ (id)identifierForPID:(int)arg1;

- (void).cxx_destruct;
- (bool)allowsRemoteAutomation;
- (unsigned long long)applicationState;
- (id)bundleId;
- (id)connection;
- (id)debuggerConnectionIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasRemoteDebugSession;
- (bool)hasUpdatedFromListing;
- (id)identifier;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(bool)arg4 connection:(id)arg5 applicationState:(unsigned long long)arg6;
- (bool)isProxy;
- (id)name;
- (int)pid;
- (void)setBundleId:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDebuggerConnectionIdentifier:(id)arg1;
- (void)setHostApplicationPID:(int)arg1;
- (void)setName:(id)arg1;
- (void)setProxy:(bool)arg1;
- (bool)updateApplicationState:(unsigned long long)arg1;
- (bool)updateFromListing:(id)arg1;

@end