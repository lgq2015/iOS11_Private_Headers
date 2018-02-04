/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding> {
    unsigned long long  _initialSyncState;
    unsigned int  _migrationIndex;
    NSUUID * _pairingID;
    unsigned int  _syncSwitchIndex;
}

@property (nonatomic, readonly) bool hasCompletedInitialSync;
@property (nonatomic, readonly) bool hasCompletedSync;
@property (nonatomic) unsigned long long initialSyncState;
@property (nonatomic) unsigned int migrationIndex;
@property (nonatomic, retain) NSUUID *pairingID;
@property (nonatomic) unsigned int syncSwitchIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCompletedInitialOrMigrationSync;
- (bool)hasCompletedInitialSync;
- (bool)hasCompletedSync;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingID:(id)arg1 syncState:(unsigned long long)arg2;
- (unsigned long long)initialSyncState;
- (bool)isEqual:(id)arg1;
- (unsigned int)migrationIndex;
- (id)pairingID;
- (void)setInitialSyncState:(unsigned long long)arg1;
- (void)setMigrationIndex:(unsigned int)arg1;
- (void)setPairingID:(id)arg1;
- (void)setSyncSwitchIndex:(unsigned int)arg1;
- (unsigned int)syncSwitchIndex;

@end
