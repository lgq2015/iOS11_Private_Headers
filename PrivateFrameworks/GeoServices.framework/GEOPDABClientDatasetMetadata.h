/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDABClientDatasetMetadata : PBCodable <NSCopying> {
    unsigned int  _bucketId;
    unsigned int  _datasetId;
    struct { 
        unsigned int bucketId : 1; 
        unsigned int datasetId : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int bucketId;
@property (nonatomic) unsigned int datasetId;
@property (nonatomic) bool hasBucketId;
@property (nonatomic) bool hasDatasetId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)bucketId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketId;
- (bool)hasDatasetId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketId:(unsigned int)arg1;
- (void)setDatasetId:(unsigned int)arg1;
- (void)setHasBucketId:(bool)arg1;
- (void)setHasDatasetId:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
