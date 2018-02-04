/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceFacility : NSObject <BSDescriptionProviding, FBProcessObserver, FBSystemServiceServer> {
    FBServiceClientAuthenticator * _authenticator;
    NSMutableSet * _clients;
    NSString * _identifier;
    bool  _invalidated;
    FBSSerialQueue * _queue;
}

@property (nonatomic, readonly, retain) FBServiceClientAuthenticator *authenticator;
@property (nonatomic, readonly, retain) NSSet *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) NSSet *prerequisiteMilestones;
@property (nonatomic, readonly, retain) FBSSerialQueue *queue;
@property (readonly) Class superclass;

- (void)_clientDidConnect:(id)arg1 withMessage:(id)arg2 completion:(id /* block */)arg3;
- (void)_clientDidDisconnect:(id)arg1;
- (id)_facilityClientForClient:(id)arg1;
- (void)_handleMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (bool)_queue_clientIsAuthenticated:(id)arg1 error:(out id*)arg2;
- (id)authenticator;
- (Class)classForClient:(id)arg1;
- (id)clients;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3;
- (void)invalidate;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteClientDidResume:(id)arg1;
- (void)noteClientDidSuspend:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)prerequisiteMilestones;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (id)queue;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 toClients:(id)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
