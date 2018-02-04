/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKChangeSet : NSObject <NSCopying> {
    bool  _isDeleted;
    bool  _isModified;
    bool  _isNew;
    bool  _isSaved;
    bool  _isUndeleted;
    NSMutableDictionary * _multiValueAdditions;
    NSMutableDictionary * _multiValueRemovals;
    NSMutableDictionary * _singleValueChanges;
}

@property (nonatomic) bool isDeleted;
@property (nonatomic) bool isModified;
@property (nonatomic) bool isNew;
@property (nonatomic) bool isSaved;
@property (nonatomic) bool isUndeleted;
@property (nonatomic, retain) NSMutableDictionary *multiValueAdditions;
@property (nonatomic, retain) NSMutableDictionary *multiValueRemovals;
@property (nonatomic, retain) NSMutableDictionary *singleValueChanges;

- (void).cxx_destruct;
- (void)_cleanupEmptySetsForMultiValueKey:(id)arg1;
- (id)_initWithChangeSet:(id)arg1 filter:(id /* block */)arg2;
- (bool)_isNewAndUnsaved;
- (id)_uniqueIDToObjectMapForObjects:(id)arg1;
- (void)addChanges:(id)arg1;
- (void)addToChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3;
- (void)changeSingleValue:(id)arg1 forKey:(id)arg2 basedOn:(id)arg3 and:(id)arg4;
- (id)changedKeys;
- (id)changedMultiValueKeys;
- (id)changedSingleValueKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)forceChangeValue:(id)arg1 forKey:(id)arg2;
- (bool)hasChanges;
- (bool)hasUnsavedChangeForKey:(id)arg1;
- (bool)hasUnsavedChanges;
- (bool)hasUnsavedMultiValueAdditionForKey:(id)arg1;
- (bool)hasUnsavedMultiValueRemovalForKey:(id)arg1;
- (id)init;
- (id)initWithChangeSet:(id)arg1;
- (id)initWithChangeSet:(id)arg1 changesToKeep:(id)arg2;
- (id)initWithChangeSet:(id)arg1 changesToSkip:(id)arg2;
- (id)initWithSingleValueChanges:(id)arg1 multiValueAdditions:(id)arg2 multiValueRemovals:(id)arg3;
- (bool)isDeleted;
- (bool)isModified;
- (bool)isNew;
- (bool)isSaved;
- (bool)isUndeleted;
- (void)markChangesAsSaved;
- (id)multiValueAdditions;
- (id)multiValueRemovals;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeFromChanges:(id)arg1 forMultiValueKey:(id)arg2 basedOn:(id)arg3;
- (void)rollbackChanges;
- (void)setIsDeleted:(bool)arg1;
- (void)setIsModified:(bool)arg1;
- (void)setIsNew:(bool)arg1;
- (void)setIsSaved:(bool)arg1;
- (void)setIsUndeleted:(bool)arg1;
- (void)setMultiValueAdditions:(id)arg1;
- (void)setMultiValueRemovals:(id)arg1;
- (void)setSingleValueChanges:(id)arg1;
- (id)singleValueChanges;
- (id)summary;
- (id)unsavedMultiValueAddedObjectsForKey:(id)arg1;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)arg1;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2;
- (id)valueForSingleValueKey:(id)arg1 basedOn:(id)arg2 and:(id)arg3;
- (id)valuesForMultiValueKey:(id)arg1 basedOn:(id)arg2;

@end
