/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConcurrentCellIterator : NSObject {
    NSMutableArray * _arrayOfArraysOfRowRocks;
    unsigned long long  _flags;
    TSTCellRegion * _forcingRegion;
    TSUWidthLimitedQueue * _queue;
    TSTCellRegion * _region;
    unsigned long long  _searchFlags;
    TSTInfo * _tableInfo;
}

@property (nonatomic, retain) NSMutableArray *arrayOfArraysOfRowRocks;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, retain) TSTCellRegion *forcingRegion;
@property (nonatomic) TSUWidthLimitedQueue *queue;
@property (nonatomic, retain) TSTCellRegion *region;
@property (nonatomic) unsigned long long searchFlags;
@property (nonatomic, retain) TSTInfo *tableInfo;

+ (id)p_sharedQueue;

- (void).cxx_destruct;
- (id)arrayOfArraysOfRowRocks;
- (id)collectRowRocks;
- (void)enumerateConcurrentlyUsingRowBeginBlock:(id /* block */)arg1 concurrentBlock:(id /* block */)arg2 finalBlock:(id /* block */)arg3;
- (unsigned long long)flags;
- (id)forcingRegion;
- (id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5;
- (id)p_subRegionsOfRegion:(id)arg1;
- (id)queue;
- (id)region;
- (unsigned long long)searchFlags;
- (void)setArrayOfArraysOfRowRocks:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setForcingRegion:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSearchFlags:(unsigned long long)arg1;
- (void)setTableInfo:(id)arg1;
- (id)tableInfo;
- (void)waitForConcurrentEnumerationToComplete;

@end