/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceQueryServer : HDQueryServer <HDDataObserver> {
    bool  _deliversUpdates;
    NSMutableSet * _sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_sourceAdded:(id)arg1;
- (void)_queue_start;
- (bool)_shouldListenForUpdates;
- (void)_sourcesForObjectsOfType:(id)arg1 filter:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (id)requiredEntitlements;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)sourceClientProxy;

@end
