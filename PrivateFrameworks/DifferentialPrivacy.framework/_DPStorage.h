/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPStorage : NSObject <_DPMaintenance> {
    NSDictionary * _converterFromClass;
    NSDictionary * _converterFromEntity;
    _DPCoreDataStorage * _coredataStorage;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readOnly;
}

@property (nonatomic, readonly) NSDictionary *converterFromClass;
@property (nonatomic, readonly) NSDictionary *converterFromEntity;
@property (nonatomic, readonly) _DPCoreDataStorage *coredataStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool readOnly;

+ (id)createFetchRequestFor:(id)arg1 entityName:(id)arg2 predicate:(id)arg3 fetchLimit:(unsigned long long)arg4 fetchOffset:(unsigned long long)arg5;
+ (id)entitiesRequiringMaintenance;
+ (id)errorStringFor:(long long)arg1;
+ (id)storageWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (void).cxx_destruct;
- (id)converterFromClass;
- (id)converterFromEntity;
- (id)coredataStorage;
- (void)dealloc;
- (void)deleteRecords:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)deleteStorageWithObliterationOption:(bool)arg1;
- (void)fetchKeynamesFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)fetchRecordsFor:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 fetchOffset:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)flush;
- (void)handleEmptyArrayError:(long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDirectory:(id)arg1 readOnly:(bool)arg2;
- (id)queue;
- (bool)readOnly;
- (id)removeBadObjects:(id)arg1;
- (void)saveRecords:(id)arg1 andFlush:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)saveRecords:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (void)scheduleStorageCullingWithName:(id)arg1 database:(id)arg2;
- (void)updateRecords:(id)arg1 withCompletion:(id /* block */)arg2;

@end
