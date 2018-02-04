/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudChange : HMFObject <HMDBackingStoreChangeObject> {
    unsigned long long  _applyType;
    unsigned long long  _changeType;
    HMDCloudRecord * _cloudRecord;
    HMDCloudRecord * _deletedCloudRecord;
    HMDBackingStoreModelObject * _objectChange;
    NSMutableSet * _rowIDsSet;
}

@property (getter=isAdded, nonatomic, readonly) bool addChange;
@property (nonatomic) unsigned long long applyType;
@property (nonatomic, readonly) HMDBackingStoreModelObject *change;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic, readonly) HMDCloudRecord *cloudRecord;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleteChange;
@property (nonatomic, readonly) HMDCloudRecord *deletedCloudRecord;
@property (nonatomic, readonly) NSSet *dependentUUIDs;
@property (readonly, copy) NSString *description;
@property (getter=isDropAfterApply, nonatomic, readonly) bool dropAfterApply;
@property (getter=isDropStagedAfterApply, nonatomic, readonly) bool dropStagedAfterApply;
@property (readonly) unsigned long long hash;
@property (getter=isInvalid, nonatomic, readonly) bool invalidChange;
@property (nonatomic, retain) HMDBackingStoreModelObject *objectChange;
@property (nonatomic, readonly) NSUUID *objectID;
@property (getter=isPushAfterApply, nonatomic, readonly) bool pushAfterApply;
@property (nonatomic, readonly) CKRecord *record;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) NSArray *rowIDs;
@property (nonatomic, readonly) NSMutableSet *rowIDsSet;
@property (readonly) Class superclass;
@property (getter=isUpdated, nonatomic, readonly) bool updateChange;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)_initWithObjectChange:(id)arg1 cloudObjectRecord:(id)arg2;
- (unsigned long long)applyType;
- (id)change;
- (unsigned long long)changeType;
- (id)cloudRecord;
- (id)deletedCloudRecord;
- (id)dependentUUIDs;
- (id)description;
- (void)forceChangeToDelete;
- (void)forceChangeToInvalid;
- (id)init;
- (id)initWithCloudObjectRecord:(id)arg1;
- (id)initWithObjectChange:(id)arg1;
- (bool)isAdded;
- (bool)isDeleted;
- (bool)isDropAfterApply;
- (bool)isDropStagedAfterApply;
- (bool)isInvalid;
- (bool)isPushAfterApply;
- (bool)isUpdated;
- (id)objectChange;
- (id)objectID;
- (id)record;
- (id)recordID;
- (void)replayChange:(id)arg1 stagedChange:(id)arg2;
- (id)rowIDs;
- (id)rowIDsSet;
- (void)setApplyType:(unsigned long long)arg1;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setObjectChange:(id)arg1;
- (id)shortDescription;
- (void)updateChangeWithRecord:(id)arg1;
- (void)updateCloudRecord:(id)arg1;
- (void)updateDeletedCloudRecord:(id)arg1;
- (void)updateWithObjectChange:(id)arg1;

@end
