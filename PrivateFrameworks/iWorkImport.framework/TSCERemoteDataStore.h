/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataStore : TSPObject {
    NSMutableDictionary * _cachedStocks;
    TSCECalculationEngine * _calculationEngine;
    <TSCERemoteDataStoreDelegate> * _delegate;
    bool  _hasInterestingKeys;
    TSCERemoteDataSpecifierSet * _interestingKeys;
    NSMutableDictionary * _ownerMap;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registeredWithCoordinator;
    TSCERemoteDataValueMap * _remoteDataMap;
    double  _remoteDataSyncKey;
    NSObject<OS_dispatch_semaphore> * _tspSemaphore;
    NSMutableSet * _unSyncedStocks;
    NSOperationQueue * _updateQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedStocks;
@property (nonatomic) TSCECalculationEngine *calculationEngine;
@property (nonatomic, readonly) TSCERemoteDataCoordinator *coordinator;
@property (nonatomic) <TSCERemoteDataStoreDelegate> *delegate;
@property (nonatomic, readonly) bool hasArchivableState;
@property (nonatomic, readonly) bool hasFullyPopulatedCache;
@property (nonatomic) bool hasInterestingKeys;
@property (nonatomic, readonly) TSCERemoteDataSpecifierSet *interestingKeys;
@property (nonatomic, readonly) NSMutableDictionary *ownerMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredWithCoordinator;
@property (nonatomic, readonly) TSCERemoteDataValueMap *remoteDataMap;
@property (nonatomic) double remoteDataSyncKey;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *tspSemaphore;
@property (nonatomic, retain) NSMutableSet *unSyncedStocks;
@property (nonatomic, readonly) NSOperationQueue *updateQueue;

- (void).cxx_destruct;
- (void)addRemoteDataInterest:(id)arg1 forOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (struct NSDictionary { Class x1; }*)allQuotes;
- (id)allRemoteData;
- (id)cachedQuoteForSymbol:(id)arg1;
- (id)cachedStocks;
- (id)calculationEngine;
- (id)coordinator;
- (void)dealloc;
- (id)delegate;
- (bool)hasArchivableState;
- (bool)hasFullyPopulatedCache;
- (bool)hasInterestingKeys;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2;
- (id)interestingKeys;
- (void)loadFromUnarchiver:(id)arg1;
- (id)ownerMap;
- (id)p_dictionaryForRemoteData:(id)arg1;
- (void)p_initializeQueue;
- (bool)p_isInCollaborationMode;
- (void)p_recursiveWriteWillModify:(bool)arg1 withBlock:(id /* block */)arg2;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })p_tsceValueFromTsceCellValue:(id)arg1;
- (id)p_updateCachesWithMap:(id)arg1 quotes:(struct NSDictionary { Class x1; }*)arg2 overwriteValues:(bool)arg3;
- (id)queue;
- (void)registerWithCoordinator;
- (bool)registeredWithCoordinator;
- (void)remoteDataDidUpdateValues:(id)arg1 quotes:(struct NSDictionary { Class x1; }*)arg2;
- (id)remoteDataMap;
- (double)remoteDataSyncKey;
- (void)removeRemoteDataInterest:(id)arg1 forOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasInterestingKeys:(bool)arg1;
- (void)setRegisteredWithCoordinator:(bool)arg1;
- (void)setRemoteDataSyncKey:(double)arg1;
- (void)setUnSyncedStocks:(id)arg1;
- (id)tspSemaphore;
- (id)unSyncedStocks;
- (void)unregisterWithCoordinator;
- (id)updateQueue;
- (void)updateWithRemoteDataMap:(id)arg1 quotes:(struct NSDictionary { Class x1; }*)arg2 syncKey:(double)arg3;
- (struct TSCEValue { unsigned long long x1[10]; int x2; })valueForRemoteData:(id)arg1;

@end
