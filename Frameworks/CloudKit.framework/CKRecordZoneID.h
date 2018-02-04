/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneID : NSObject <CKSQLiteItem, CKXPCSuitableString, ICHasDatabaseScope, NSCopying, NSSecureCoding, PQLValuable> {
    NSString * _ownerName;
    NSString * _zoneName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *ownerName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *zoneName;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)cachedRecordZoneIDWithName:(id)arg1 ownerName:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)ckShortDescription;
- (long long)compareToRecordZoneID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (bool)isDefaultRecordZoneID;
- (bool)isEqual:(id)arg1;
- (id)ownerName;
- (id)sqliteRepresentation;
- (id)zoneName;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_masterZoneIDForSyncCircleIdentifier:(id)arg1;
+ (id)hd_zoneIDWithSyncCircleIdentifier:(id)arg1 storeIdentifier:(id)arg2;

- (bool)hd_isMasterZoneIDForSyncCircleIdentifier:(id*)arg1;
- (bool)hd_splitIntoSyncCircleIdentifier:(id*)arg1 storeIdentifier:(id*)arg2;
- (id)hd_storeIdentifier;
- (id)hd_syncCircleIdentifier;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (long long)databaseScope;
- (bool)ic_isOwnedByCurrentUser;
- (id)ic_loggingDescription;

@end
