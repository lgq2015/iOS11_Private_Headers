/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServer : NSObject <AXIPCServerClientRegistrationDelegate> {
    unsigned int  _assignedServerPort;
    id /* block */  _clientInvalidationHandler;
    NSMutableSet * _connectedClients;
    unsigned int  _customQueueSize;
    id /* block */  _defaultHandler;
    NSMutableDictionary * _entitlements;
    NSMutableDictionary * _handlers;
    bool  _perPidService;
    bool  _running;
    unsigned int  _serverPort;
    struct __CFRunLoopSource { } * _serverRunLoopSource;
    NSString * _serviceName;
    NSMutableDictionary * _validSecurityTokens;
}

@property (nonatomic, copy) id /* block */ clientInvalidationCallback;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ defaultHandler;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int machPort;
@property (nonatomic) bool perPidService;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)__slowpath__clientWithAuditToken:(struct { unsigned int x1[8]; })arg1 hasRequiredEntitlementFromSet:(id)arg2;
- (void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg1 first:(id)arg2 vothers:(char *)arg3;
- (void)_applyCustomQueueSize;
- (id)_clientIdentificationForAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)_clientWithPort:(unsigned int)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 hasAnyEntitlementRequiredForMessage:(id)arg3;
- (void)_handleClientInvalidation:(unsigned int)arg1;
- (void)_handleClientRegistration:(id)arg1;
- (bool)_handleErrorWithMessage:(id)arg1 outError:(id*)arg2;
- (void)_handleIncomingMessage:(id)arg1 securityToken:(struct { unsigned int x1[2]; })arg2 auditToken:(struct { unsigned int x1[8]; })arg3 clientPort:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)_registerContext:(id)arg1 forKey:(int)arg2;
- (void)_startServerThread;
- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (id /* block */)clientInvalidationCallback;
- (void)dealloc;
- (id /* block */)defaultHandler;
- (id)description;
- (id)handlers;
- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource { }*)arg2;
- (id)initWithServiceName:(id)arg1 perPidService:(bool)arg2;
- (bool)isRunning;
- (unsigned int)machPort;
- (bool)perPidService;
- (void)removeAllHandlersForTarget:(id)arg1;
- (void)removeHandlerForKey:(int)arg1;
- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)serverClientRegistrationInvalidated:(id)arg1;
- (id)serviceName;
- (void)setClientInvalidationCallback:(id /* block */)arg1;
- (void)setDefaultHandler:(id /* block */)arg1;
- (void)setHandler:(id /* block */)arg1 forKey:(int)arg2;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(bool)arg3 forKey:(int)arg4;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(bool)arg3 forKey:(int)arg4 possibleRequiredEntitlements:(id)arg5;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;
- (void)setHandlers:(id)arg1;
- (void)setPerPidService:(bool)arg1;
- (void)setQueueSize:(unsigned int)arg1;
- (void)setRunning:(bool)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (bool)startServerWithError:(id*)arg1;
- (bool)stopServerWithError:(id*)arg1;

@end
