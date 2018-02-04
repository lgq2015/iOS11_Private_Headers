/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    NSMutableArray * _changedRecords;
    NSMutableArray * _changedShares;
    NSData * _clientChangeToken;
    struct { 
        unsigned int status : 1; 
        unsigned int pendingArchivedRecords : 1; 
    }  _has;
    bool  _pendingArchivedRecords;
    int  _status;
    NSData * _syncContinuationToken;
}

@property (nonatomic, retain) NSMutableArray *changedRecords;
@property (nonatomic, retain) NSMutableArray *changedShares;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, readonly) bool hasClientChangeToken;
@property (nonatomic) bool hasPendingArchivedRecords;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasSyncContinuationToken;
@property (nonatomic) bool pendingArchivedRecords;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *syncContinuationToken;

+ (Class)changedRecordType;
+ (Class)changedShareType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addChangedRecord:(id)arg1;
- (void)addChangedShare:(id)arg1;
- (id)changedRecordAtIndex:(unsigned long long)arg1;
- (id)changedRecords;
- (unsigned long long)changedRecordsCount;
- (id)changedShareAtIndex:(unsigned long long)arg1;
- (id)changedShares;
- (unsigned long long)changedSharesCount;
- (void)clearChangedRecords;
- (void)clearChangedShares;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientChangeToken;
- (bool)hasPendingArchivedRecords;
- (bool)hasStatus;
- (bool)hasSyncContinuationToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pendingArchivedRecords;
- (bool)readFrom:(id)arg1;
- (void)setChangedRecords:(id)arg1;
- (void)setChangedShares:(id)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setHasPendingArchivedRecords:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPendingArchivedRecords:(bool)arg1;
- (void)setStatus:(int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
