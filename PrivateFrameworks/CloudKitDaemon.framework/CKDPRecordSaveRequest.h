/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveRequest : PBRequest <NSCopying> {
    CKDPRecordSaveRequestConflictLoserUpdate * _conflictLoserUpdate;
    NSMutableArray * _conflictLosersToResolves;
    NSString * _etag;
    NSMutableArray * _fieldsToDeleteIfExistOnMerges;
    struct { 
        unsigned int saveSemantics : 1; 
        unsigned int merge : 1; 
    }  _has;
    bool  _merge;
    NSString * _parentChainProtectionInfoTag;
    CKDPRecord * _record;
    NSString * _recordProtectionInfoTag;
    CKDPRequestedFields * _requestedFields;
    int  _saveSemantics;
    NSString * _shareEtag;
    CKDPRecordSaveRequestShareIdUpdate * _shareIDUpdate;
    NSString * _zoneProtectionInfoTag;
}

@property (nonatomic, retain) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate;
@property (nonatomic, retain) NSMutableArray *conflictLosersToResolves;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSMutableArray *fieldsToDeleteIfExistOnMerges;
@property (nonatomic, readonly) bool hasConflictLoserUpdate;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic) bool hasMerge;
@property (nonatomic, readonly) bool hasParentChainProtectionInfoTag;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, readonly) bool hasRecordProtectionInfoTag;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic) bool hasSaveSemantics;
@property (nonatomic, readonly) bool hasShareEtag;
@property (nonatomic, readonly) bool hasShareIDUpdate;
@property (nonatomic, readonly) bool hasZoneProtectionInfoTag;
@property (nonatomic) bool merge;
@property (nonatomic, retain) NSString *parentChainProtectionInfoTag;
@property (nonatomic, retain) CKDPRecord *record;
@property (nonatomic, retain) NSString *recordProtectionInfoTag;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic) int saveSemantics;
@property (nonatomic, retain) NSString *shareEtag;
@property (nonatomic, retain) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate;
@property (nonatomic, retain) NSString *zoneProtectionInfoTag;

+ (Class)conflictLosersToResolveType;
+ (Class)fieldsToDeleteIfExistOnMergeType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsSaveSemantics:(id)arg1;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)clearConflictLosersToResolves;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (id)conflictLoserUpdate;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (id)conflictLosersToResolves;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (id)fieldsToDeleteIfExistOnMerges;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (bool)hasConflictLoserUpdate;
- (bool)hasEtag;
- (bool)hasMerge;
- (bool)hasParentChainProtectionInfoTag;
- (bool)hasRecord;
- (bool)hasRecordProtectionInfoTag;
- (bool)hasRequestedFields;
- (bool)hasSaveSemantics;
- (bool)hasShareEtag;
- (bool)hasShareIDUpdate;
- (bool)hasZoneProtectionInfoTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)merge;
- (void)mergeFrom:(id)arg1;
- (id)parentChainProtectionInfoTag;
- (bool)readFrom:(id)arg1;
- (id)record;
- (id)recordProtectionInfoTag;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (int)saveSemantics;
- (id)saveSemanticsAsString:(int)arg1;
- (void)setConflictLoserUpdate:(id)arg1;
- (void)setConflictLosersToResolves:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFieldsToDeleteIfExistOnMerges:(id)arg1;
- (void)setHasMerge:(bool)arg1;
- (void)setHasSaveSemantics:(bool)arg1;
- (void)setMerge:(bool)arg1;
- (void)setParentChainProtectionInfoTag:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordProtectionInfoTag:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setSaveSemantics:(int)arg1;
- (void)setShareEtag:(id)arg1;
- (void)setShareIDUpdate:(id)arg1;
- (void)setZoneProtectionInfoTag:(id)arg1;
- (id)shareEtag;
- (id)shareIDUpdate;
- (void)writeTo:(id)arg1;
- (id)zoneProtectionInfoTag;

@end
