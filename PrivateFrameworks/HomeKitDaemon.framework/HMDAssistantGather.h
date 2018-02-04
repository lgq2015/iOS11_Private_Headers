/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantGather : HMFObject <HMFLogging> {
    NSArray * _currentHomekitObjects;
    HMDHomeManager * _manager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSString *currentHomeName;
@property (nonatomic, readonly) NSUUID *currentHomeUUID;
@property (nonatomic, retain) NSArray *currentHomekitObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long homeCount;
@property (nonatomic, readonly) NSArray *homeKitObjects;
@property (nonatomic) HMDHomeManager *manager;
@property (nonatomic, readonly) NSString *primaryHomeName;
@property (nonatomic, readonly) NSUUID *primaryHomeUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_gatherHomeKitObjects;
- (id)_getCurrentHome;
- (id)_getPrimaryHome;
- (id)currentHomeName;
- (id)currentHomeUUID;
- (id)currentHomekitObjects;
- (void)gatherHomeKitObjects;
- (void)getSyncEntityObjectsWithValidity:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)homeCount;
- (id)homeKitObjects;
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;
- (id)manager;
- (unsigned long long)numberOfHomeKitObjects;
- (id)primaryHomeName;
- (id)primaryHomeUUID;
- (void)setCurrentHomekitObjects:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
