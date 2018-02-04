/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface WRMClient : NSObject {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id  _wrmClientDelegate;
}

@property <WRMClientDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (void)dumpReport:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)processNotificationList:(id)arg1;
- (void)releaseServiceConnection;
- (void)reportMetricsFaceTimeCalling:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; }*)arg1;
- (void)reportMetricsWifiCalling:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; }*)arg1;
- (void)requestNotificationFaceTimeCalling;
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;
- (void)sendReport:(id)arg1;
- (void)sendStatusUpdateFaceTimeCalling:(const struct { int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;
- (void)sendSubscriptionInfoFaceTimeCalling;
- (void)sendUnsubscriptionInfoFaceTimeCalling;
- (void)setConfiguration:(struct { unsigned long long x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setupServiceConnection;
- (void)startWRMClientWithMode:(int)arg1;
- (void)stopWRMClient;

@end
