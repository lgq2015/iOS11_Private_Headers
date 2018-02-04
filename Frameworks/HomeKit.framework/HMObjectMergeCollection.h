/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMObjectMergeCollection : NSObject {
    NSMapTable * _commonObjectsMaps;
    NSMutableArray * _currentAddedObjects;
    NSMutableArray * _currentExistingObjects;
    NSMutableArray * _currentModifiedObjects;
    HMObjectMergeOperations * _currentOperations;
    NSMutableArray * _currentRemovedObjects;
}

@property (nonatomic, readonly) NSArray *addedObjects;
@property (nonatomic, retain) NSMapTable *commonObjectsMaps;
@property (nonatomic, retain) NSMutableArray *currentAddedObjects;
@property (nonatomic, retain) NSMutableArray *currentExistingObjects;
@property (nonatomic, retain) NSMutableArray *currentModifiedObjects;
@property (nonatomic) HMObjectMergeOperations *currentOperations;
@property (nonatomic, retain) NSMutableArray *currentRemovedObjects;
@property (nonatomic, readonly) NSArray *existingObjects;
@property (getter=isModified, nonatomic, readonly) bool modified;
@property (nonatomic, readonly) unsigned long long modifiedCount;
@property (nonatomic, readonly) NSArray *modifiedObjects;
@property (nonatomic, readonly) NSArray *removedObjects;

- (void).cxx_destruct;
- (void)_enumerateObjectAdditionWithBlock:(id /* block */)arg1;
- (void)_enumerateObjectRemoveWithBlock:(id /* block */)arg1;
- (void)_mergeCommonObjects;
- (void)_replaceAddedObjectsWithObjectsFromArray:(id)arg1;
- (id)addedObjects;
- (id)commonObjectsMaps;
- (id)currentAddedObjects;
- (id)currentExistingObjects;
- (id)currentModifiedObjects;
- (id)currentOperations;
- (id)currentRemovedObjects;
- (id)existingObjects;
- (id)init;
- (id)initWithExistingObjects:(id)arg1 newObjects:(id)arg2 operations:(id)arg3;
- (bool)isModified;
- (void)mergeCommonObjectsNoMergeCount;
- (unsigned long long)modifiedCount;
- (id)modifiedObjects;
- (id)removedObjects;
- (void)setCommonObjectsMaps:(id)arg1;
- (void)setCurrentAddedObjects:(id)arg1;
- (void)setCurrentExistingObjects:(id)arg1;
- (void)setCurrentModifiedObjects:(id)arg1;
- (void)setCurrentOperations:(id)arg1;
- (void)setCurrentRemovedObjects:(id)arg1;

@end
