/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSampleQueryServer : HDBatchedQueryServer {
    NSObject<OS_dispatch_queue> * _batchQueue;
    bool  _includeTimeZones;
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) bool includeTimeZones;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) NSArray *sortDescriptors;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)includeTimeZones;
- (id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (unsigned long long)limit;
- (id)requiredEntitlements;
- (id)sampleClientProxy;
- (id)sortDescriptors;

@end
