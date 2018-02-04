/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSessionManager : NSObject {
    <RMSSessionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _sessionManagerQueue;
    NSMutableDictionary * _sessions;
}

@property (nonatomic) <RMSSessionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2;
- (int)_uniqueSessionIdentifier;
- (void)_updatePersistedSessionIdentifiers;
- (void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (void)endSessionWithIdentifier:(int)arg1 completionHandler:(id /* block */)arg2;
- (int)identifierForSession:(id)arg1;
- (id)init;
- (id)persistedSessionIdentifiers;
- (void)refreshSessionWithIdentifier:(int)arg1;
- (id)sessionWithIdentifier:(int)arg1;
- (void)setDelegate:(id)arg1;

@end
