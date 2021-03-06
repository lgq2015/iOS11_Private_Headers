/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSource : EKPersistentObject

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) CDBSourceConstraints *constraints;
@property (nonatomic, copy) NSNumber *defaultAlarmOffset;
@property (nonatomic) bool disabled;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic) bool onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) long long sourceType;
@property (nonatomic) int strictestEventPrivateValue;
@property (nonatomic, copy) NSString *title;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)constraints;
- (id)defaultAlarmOffset;
- (id)description;
- (bool)disabled;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (int)flags;
- (id)lastSyncEndDate;
- (unsigned long long)lastSyncError;
- (id)lastSyncStartDate;
- (bool)onlyCreatorCanModify;
- (int)preferredEventPrivateValue;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFlags:(int)arg1;
- (void)setLastSyncEndDate:(id)arg1;
- (void)setLastSyncError:(unsigned long long)arg1;
- (void)setLastSyncStartDate:(id)arg1;
- (void)setOnlyCreatorCanModify:(bool)arg1;
- (void)setPreferredEventPrivateValue:(int)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStrictestEventPrivateValue:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (long long)sourceType;
- (int)strictestEventPrivateValue;
- (id)title;

@end
