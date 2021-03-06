/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSAXPCServices : NSObject {
    NSObject<OS_xpc_object> * _listenerConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)generateJetsamWithParams:(id)arg1;
- (id)initWithServiceName:(const char *)arg1;
- (bool)isInternalInstall;
- (void)postNotification:(id)arg1;
- (bool)serviceRequest:(id)arg1 fromPID:(int)arg2;

@end
