/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
 */

@interface ICFCallServer : NSObject {
    NSMutableArray * _clients;
    NSObject<OS_xpc_object> * _connection;
    bool  _hasRegistered;
}

+ (id)sharedInstance;

- (void)_cleanup;
- (void)_cleanupClient:(id)arg1;
- (void)_clientConnected;
- (void)_configureWithClient:(id)arg1;
- (void)_requestCallGrantForIdentifier:(id)arg1 forProviderIdentifier:(id)arg2 waitForResponse:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (void)shouldAllowIncomingCallForNumber:(id)arg1 forProviderIdentifier:(id)arg2 response:(id /* block */)arg3;

@end