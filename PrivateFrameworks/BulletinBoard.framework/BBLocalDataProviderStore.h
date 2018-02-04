/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBLocalDataProviderStore : NSObject <BBDataProviderStore, BBLocalDataProviderFactoryStore> {
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _dataProvidersByUniversalSectionID;
    <BBDataProviderStoreDelegate> * _delegate;
    NSMutableArray * _localFactories;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (nonatomic, retain) NSMutableDictionary *dataProvidersBySectionID;
@property (nonatomic, retain) NSMutableDictionary *dataProvidersByUniversalSectionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *localFactories;
@property (readonly) Class superclass;

+ (id)localDataProviderStoreWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;

- (void).cxx_destruct;
- (void)_addDataProviderClass:(Class)arg1 performMigration:(bool)arg2;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg1;
- (void)_loadDataProviderPluginBundle:(id)arg1 performMigration:(bool)arg2;
- (void)_queue_addDataProvider:(id)arg1 performMigration:(bool)arg2;
- (void)_queue_removeDataProvider:(id)arg1;
- (void)addDataProvider:(id)arg1 performMigration:(bool)arg2;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 universalSectionID:(id)arg4;
- (id)dataProviderForSectionID:(id)arg1;
- (id)dataProviderForUniversalSectionID:(id)arg1;
- (id)dataProvidersBySectionID;
- (id)dataProvidersByUniversalSectionID;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 dataProviderQueue:(id)arg2;
- (void)loadAllDataProvidersAndPerformMigration:(bool)arg1;
- (id)localFactories;
- (void)performBlockOnDataProviders:(id /* block */)arg1;
- (void)removeDataProvider:(id)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (void)setDataProvidersBySectionID:(id)arg1;
- (void)setDataProvidersByUniversalSectionID:(id)arg1;
- (void)setLocalFactories:(id)arg1;

@end
