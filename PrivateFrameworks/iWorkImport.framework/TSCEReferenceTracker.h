/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning> {
    TSCECalculationEngine * _calculationEngine;
    <TSCEReferenceTrackerDelegate> * _delegate;
    struct vector<TSCEFormulaID, std::__1::allocator<TSCEFormulaID> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSCEFormulaID *, std::__1::allocator<TSCEFormulaID> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _formulaIDsToRewrite;
    bool  _isRegisteredWithCalculationEngine;
    unsigned long long  _nextEmptyTrackedReferencesIndex;
    unsigned long long  _numberOfTrackedReferences;
    struct UUIDData<TSP::UUIDData> { 
        union { 
            unsigned char _uuid[16]; 
            struct { 
                unsigned char byte0; 
                unsigned char byte1; 
                unsigned char byte2; 
                unsigned char byte3; 
                unsigned char byte4; 
                unsigned char byte5; 
                unsigned char byte6; 
                unsigned char byte7; 
                unsigned char byte8; 
                unsigned char byte9; 
                unsigned char byte10; 
                unsigned char byte11; 
                unsigned char byte12; 
                unsigned char byte13; 
                unsigned char byte14; 
                unsigned char byte15; 
            } _cfuuid; 
            struct { 
                unsigned long long _lower; 
                unsigned long long _upper; 
            } ; 
        } ; 
    }  _ownerUUID;
    NSMutableArray * _trackedReferences;
    NSLock * _trackedRefsLock;
}

@property (nonatomic, readonly) TSCECalculationEngine *calculationEngine;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TSCEReferenceTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)allTrackedReferences;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (void)beginTrackingReference:(id)arg1;
- (id)beginTrackingReferenceWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)beginTrackingReferenceWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)beginTrackingReferenceWithSpanningRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_1_2_1; struct TSUCellCoord { unsigned short x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; } x_1_2_2; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; unsigned char x2; }*)arg1;
- (id)calculationEngine;
- (id)cellRangeWasInserted:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)delegate;
- (void)endTrackingReference:(id)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })formulaOwnerUID;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)numberOfTrackedReferences;
- (id)objectToArchiveInDependencyTracker;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4;
- (void)registerWithCalculationEngine:(bool)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 rewriteSpec:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)setCalculationEngine:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFormulaOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)trackedReferenceAtID:(struct { unsigned int x1 : 24; })arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (bool)trackedReferencesExistForTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)unregisterFromCalculationEngine;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
