/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateMetadata : NSObject {
    NSString * _ckIdentityRecordName;
    bool  _hasChanges;
    bool  _hasCheckedCKIdentity;
    bool  _hasInitializedZone;
    bool  _hasInitializedZoneSubscription;
    NSPersistentHistoryToken * _lastHistoryToken;
    bool  _loaded;
    CKServerChangeToken * _previousServerChangeToken;
    NSPersistentStore * _store;
}

@property (setter=setCKIdentityRecordName:, nonatomic, retain) NSString *ckIdentityRecordName;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) bool hasCheckedCKIdentity;
@property (nonatomic) bool hasInitializedZone;
@property (nonatomic) bool hasInitializedZoneSubscription;
@property (nonatomic, retain) NSPersistentHistoryToken *lastHistoryToken;
@property (nonatomic, readonly) bool loaded;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, readonly) NSPersistentStore *store;

+ (id)allDefaultsKeys;

- (void).cxx_destruct;
- (id)ckIdentityRecordName;
- (void)dealloc;
- (bool)hasChanges;
- (bool)hasCheckedCKIdentity;
- (bool)hasInitializedZone;
- (bool)hasInitializedZoneSubscription;
- (id)initWithStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastHistoryToken;
- (bool)load:(id*)arg1;
- (bool)loaded;
- (id)previousServerChangeToken;
- (bool)safeString:(id)arg1 isEqualToString:(id)arg2;
- (bool)save:(id*)arg1;
- (void)setCKIdentityRecordName:(id)arg1;
- (void)setHasCheckedCKIdentity:(bool)arg1;
- (void)setHasInitializedZone:(bool)arg1;
- (void)setHasInitializedZoneSubscription:(bool)arg1;
- (void)setLastHistoryToken:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (id)store;

@end
