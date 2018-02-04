/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCXPCConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    bool  _isPersistent;
    int  _pid;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSObject<OS_dispatch_queue> * _timeoutTimerQueue;
    bool  _timeoutTimerStarted;
    NSObject<OS_os_transaction> * _transaction;
    id  context;
    NSData * tokenData;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, retain) id context;
@property (getter=isPersistent) bool persistent;
@property int pid;
@property (nonatomic, retain) NSData *tokenData;

+ (void)selfTerminateDueToTimeout:(int)arg1;

- (id)connection;
- (id)context;
- (void)createTimeoutTimer;
- (void)dealloc;
- (id)description;
- (void)destroyTimeoutTimer;
- (id)init;
- (bool)isPersistent;
- (int)pid;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPersistent:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setTokenData:(id)arg1;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (id)tokenData;

@end
