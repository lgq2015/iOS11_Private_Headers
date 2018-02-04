/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitXPCClientConnection : NSObject {
    NSMutableDictionary * _clients;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
    int  serverStartedNotificationToken;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)connectionWithDeviceType:(long long)arg1;

- (void).cxx_destruct;
- (bool)addClient:(id)arg1;
- (id)client:(unsigned long long)arg1;
- (void)dealloc;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (id)initWithDeviceType:(long long)arg1;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)queue;
- (bool)removeClient:(id)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(bool)arg1 client:(unsigned long long)arg2;
- (id)xpcConnection;

@end
