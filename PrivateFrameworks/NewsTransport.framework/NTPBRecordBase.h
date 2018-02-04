/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBRecordBase : PBCodable <NSCopying> {
    NTPBDate * _assetURLsDate;
    int  _cacheLifetimeHint;
    NSString * _changeTag;
    bool  _deletedFromCloud;
    NTPBDate * _fetchDate;
    struct { 
        unsigned int cacheLifetimeHint : 1; 
        unsigned int recordType : 1; 
        unsigned int deletedFromCloud : 1; 
    }  _has;
    NSString * _identifier;
    NTPBDate * _modificationDate;
    int  _recordType;
}

@property (nonatomic, retain) NTPBDate *assetURLsDate;
@property (nonatomic) int cacheLifetimeHint;
@property (nonatomic, retain) NSString *changeTag;
@property (nonatomic) bool deletedFromCloud;
@property (nonatomic, retain) NTPBDate *fetchDate;
@property (nonatomic, readonly) bool hasAssetURLsDate;
@property (nonatomic) bool hasCacheLifetimeHint;
@property (nonatomic, readonly) bool hasChangeTag;
@property (nonatomic) bool hasDeletedFromCloud;
@property (nonatomic, readonly) bool hasExpiredAssetURLs;
@property (nonatomic, readonly) bool hasFetchDate;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModificationDate;
@property (nonatomic) bool hasRecordType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NTPBDate *modificationDate;
@property (nonatomic, readonly) bool needsAssetURLRefresh;
@property (nonatomic) int recordType;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)assetURLsDate;
- (int)cacheLifetimeHint;
- (id)changeTag;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)deletedFromCloud;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchDate;
- (bool)hasAssetURLsDate;
- (bool)hasCacheLifetimeHint;
- (bool)hasChangeTag;
- (bool)hasDeletedFromCloud;
- (bool)hasFetchDate;
- (bool)hasIdentifier;
- (bool)hasModificationDate;
- (bool)hasRecordType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modificationDate;
- (bool)readFrom:(id)arg1;
- (int)recordType;
- (void)setAssetURLsDate:(id)arg1;
- (void)setCacheLifetimeHint:(int)arg1;
- (void)setChangeTag:(id)arg1;
- (void)setDeletedFromCloud:(bool)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setHasCacheLifetimeHint:(bool)arg1;
- (void)setHasDeletedFromCloud:(bool)arg1;
- (void)setHasRecordType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setRecordType:(int)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (bool)fc_isCachedAgeGreaterThan:(double)arg1;
- (bool)fc_isCachedAgeLessThan:(double)arg1;
- (bool)hasExpiredAssetURLs;
- (bool)needsAssetURLRefresh;

@end
