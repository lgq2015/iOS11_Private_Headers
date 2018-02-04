/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {
    CKDPAssetsToDownload * _assetsToDownload;
    NSData * _continuationMarker;
    struct { 
        unsigned int limit : 1; 
    }  _has;
    unsigned int  _limit;
    CKDPQuery * _query;
    CKDPRequestedFields * _requestedFields;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasAssetsToDownload;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic) bool hasLimit;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) unsigned int limit;
@property (nonatomic, retain) CKDPQuery *query;
@property (nonatomic, retain) CKDPRequestedFields *requestedFields;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)assetsToDownload;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetsToDownload;
- (bool)hasContinuationMarker;
- (bool)hasLimit;
- (bool)hasQuery;
- (bool)hasRequestedFields;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setAssetsToDownload:(id)arg1;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
