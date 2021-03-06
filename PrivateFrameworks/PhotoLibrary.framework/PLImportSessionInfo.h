/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImportSessionInfo : NSObject {
    NSMutableIndexSet * _completedIndexes;
    NSMutableIndexSet * _errorIndexes;
    bool  _importComplete;
    NSMutableIndexSet * _importIndexes;
    bool  _importStopped;
    bool  _importingSelection;
    NSMutableIndexSet * _inProgressIndexes;
}

@property (nonatomic, readonly, retain) NSIndexSet *completedIndexes;
@property (nonatomic, readonly, retain) NSIndexSet *errorIndexes;
@property (nonatomic) bool importComplete;
@property (nonatomic, readonly, retain) NSIndexSet *importIndexes;
@property (nonatomic) bool importStopped;
@property (nonatomic) bool importingSelection;
@property (nonatomic, readonly, retain) NSIndexSet *inProgressIndexes;

- (void).cxx_destruct;
- (bool)_isImportCompleteForIndex:(unsigned long long)arg1;
- (void)addIndexToImport:(unsigned long long)arg1;
- (void)beginImportForIndex:(unsigned long long)arg1;
- (void)completeImportForIndex:(unsigned long long)arg1 error:(bool)arg2;
- (id)completedIndexes;
- (id)errorIndexes;
- (bool)importComplete;
- (id)importIndexes;
- (bool)importStopped;
- (bool)importingSelection;
- (id)inProgressIndexes;
- (id)initWithImportIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)setImportComplete:(bool)arg1;
- (void)setImportStopped:(bool)arg1;
- (void)setImportingSelection:(bool)arg1;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2;

@end
