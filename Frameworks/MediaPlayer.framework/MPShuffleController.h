/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPShuffleController : NSObject <NSSecureCoding> {
    NSMutableIndexSet * _availableShuffleIndexSet;
    <MPShuffleControllerDataSource> * _dataSource;
    bool  _isPendingFineGrainedInvalidation;
    bool  _isPendingGlobalInvalidation;
    unsigned long long  _itemCount;
    NSMapTable * _itemIdentifierToKnownCount;
    MPSparseArray * _originalIndexToItemIdentifier;
    MPSparseArray * _originalIndexToShuffledIndex;
    NSMutableArray * _pendingInvalidationRemovedIdentifiers;
}

@property (nonatomic) <MPShuffleControllerDataSource> *dataSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearPendingInvalidationInformation;
- (void)_commitPendingInvalidations;
- (unsigned long long)_generateShuffleIndexFromAvailableIndexSet;
- (void)_loadItemCount;
- (void)_loadItemCountIfPendingInvalidation;
- (void)_removeAllItemIdentifiers;
- (void)_removeItemIdentifierAtOriginalIndex:(unsigned long long)arg1;
- (void)_replaceItemIdentifierAtOriginalIndex:(unsigned long long)arg1 withItemIdentifier:(id)arg2;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)invalidateWithRemovedIdentifiers:(id)arg1;
- (unsigned long long)itemIndexForShuffledIndex:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)shuffle;
- (void)shuffleWithStartingIndex:(unsigned long long)arg1;
- (unsigned long long)shuffledIndexForItemIndex:(unsigned long long)arg1;

@end
