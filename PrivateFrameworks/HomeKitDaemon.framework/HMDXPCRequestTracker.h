/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate> {
    NSObject<OS_dispatch_group> * _activeMessageTracker;
    NSString * _clientName;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _pendingRequests;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMFTimer * _watchdogTimer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *activeMessageTracker;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingRequests;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly, copy) NSSet *requestIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMFTimer *watchdogTimer;

- (void).cxx_destruct;
- (void)__sendReponseForRequest:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)activeMessageTracker;
- (void)addRequestWithIdentifier:(id)arg1 messageName:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)clear;
- (id)clientName;
- (id)clientQueue;
- (bool)containsMessageWithIdentifier:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)pendingRequests;
- (id)propertyQueue;
- (void)removeRequestWithIdentifier:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)requestIdentifiers;
- (void)setActiveMessageTracker:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)watchdogTimer;

@end
