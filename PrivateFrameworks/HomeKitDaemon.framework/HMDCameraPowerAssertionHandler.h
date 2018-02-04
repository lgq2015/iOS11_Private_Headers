/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging> {
    NSMutableSet * _currentRequestHandlerSessionIDs;
    unsigned int  _powerAssertion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableSet *currentRequestHandlerSessionIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int powerAssertion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)currentRequestHandlerSessionIDs;
- (void)deregisterRemoteRequestHandler:(id)arg1;
- (id)init;
- (unsigned int)powerAssertion;
- (void)registerRemoteRequestHandler:(id)arg1;
- (void)setPowerAssertion:(unsigned int)arg1;
- (id)workQueue;

@end
