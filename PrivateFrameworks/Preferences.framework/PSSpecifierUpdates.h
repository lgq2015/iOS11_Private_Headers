/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdates : NSObject <NSCopying> {
    PSSpecifierUpdateContext * _context;
    NSMutableArray * _currentSpecifiers;
    PSSpecifierGroupIndex * _groupIndex;
    NSArray * _originalSpecifiers;
    NSMutableArray * _updates;
    bool  _wantsDebugCallbacks;
}

@property (nonatomic, copy) PSSpecifierUpdateContext *context;
@property (nonatomic, readonly, copy) NSArray *currentSpecifiers;
@property (nonatomic, readonly, copy) PSSpecifierGroupIndex *groupIndex;
@property (nonatomic, readonly, copy) NSArray *originalSpecifiers;
@property (nonatomic, readonly, copy) NSArray *updates;

+ (void)_assertSpecifierIDsAreUnique:(id)arg1;
+ (Class)_groupIndexClass;
+ (bool)_wantsDebugCallbacks;
+ (id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(id /* block */)arg3;
+ (id)updatesWithSpecifiers:(id)arg1;

- (void).cxx_destruct;
- (bool)_addAndApplyOperation:(id)arg1;
- (void)_didApplyOperation:(id)arg1;
- (bool)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_groupIndexCreatingIfNecessary;
- (id)_init;
- (id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3;
- (void)_operationFailed:(id)arg1 reason:(id)arg2;
- (bool)appendSpecifier:(id)arg1;
- (bool)appendSpecifier:(id)arg1 toGroup:(id)arg2;
- (bool)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (bool)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2;
- (bool)appendSpecifiers:(id)arg1;
- (bool)appendSpecifiers:(id)arg1 toGroup:(id)arg2;
- (bool)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2;
- (bool)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSpecifiers;
- (id)description;
- (void)enumerateUpdatesUsingBlock:(id /* block */)arg1;
- (id)groupIndex;
- (unsigned long long)indexOfSpecifier:(id)arg1;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (id)init;
- (id)initWithSpecifiers:(id)arg1;
- (id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2;
- (bool)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (bool)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2;
- (bool)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (bool)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2;
- (bool)insertSpecifier:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)insertSpecifier:(id)arg1 atIndexPath:(id)arg2;
- (bool)moveSpecifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (bool)moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (bool)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)originalSpecifiers;
- (bool)reloadSpecifier:(id)arg1;
- (bool)reloadSpecifierAtIndex:(unsigned long long)arg1;
- (bool)reloadSpecifierAtIndexPath:(id)arg1;
- (bool)reloadSpecifierWithID:(id)arg1;
- (bool)reloadSpecifiers:(id)arg1;
- (bool)reloadSpecifiersInGroup:(id)arg1;
- (bool)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (bool)reloadSpecifiersInGroupWithID:(id)arg1;
- (bool)reloadSpecifiersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)reloadSpecifiersWithIDs:(id)arg1;
- (bool)removeSpecifier:(id)arg1;
- (bool)removeSpecifierAtIndex:(unsigned long long)arg1;
- (bool)removeSpecifierAtIndexPath:(id)arg1;
- (bool)removeSpecifierWithID:(id)arg1;
- (bool)removeSpecifiers:(id)arg1;
- (bool)removeSpecifiersInGroup:(id)arg1;
- (bool)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1;
- (bool)removeSpecifiersInGroupWithID:(id)arg1;
- (bool)removeSpecifiersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)removeSpecifiersWithIDs:(id)arg1;
- (void)setContext:(id)arg1;
- (id)specifierForID:(id)arg1;
- (id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)arg1;
- (id)stepByStepDescription;
- (bool)swapSpecifier:(id)arg1 withSpecifier:(id)arg2;
- (bool)swapSpecifierAtIndex:(unsigned long long)arg1 withSpecifierAtIndex:(unsigned long long)arg2;
- (id)updates;

@end
