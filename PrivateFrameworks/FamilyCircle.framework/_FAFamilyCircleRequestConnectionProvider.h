/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface _FAFamilyCircleRequestConnectionProvider : NSObject <FAFamilyCircleRequestConnectionProvider> {
    NSXPCConnection * _connection;
    <FAFamilyCircleRequestConnectionFactory> * _factory;
    NSLock * _lock;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FAFamilyCircleRequestConnectionFactory> *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLock *lock;
@property (readonly) Class superclass;

+ (id)createResumedConnectionWithFactory:(id)arg1 provider:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connectionWasInvalidated:(id)arg1;
- (void)dealloc;
- (id)factory;
- (id)init;
- (id)initWithConnectionFactory:(id)arg1;
- (id)lock;
- (id)serviceConnection;
- (void)setConnection:(id)arg1;
- (void)setFactory:(id)arg1;

@end
