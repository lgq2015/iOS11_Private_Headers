/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _responses;
    int  _statusCode;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *responses;
@property (nonatomic) int statusCode;

+ (Class)responseType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseAtIndex:(unsigned long long)arg1;
- (id)responses;
- (unsigned long long)responsesCount;
- (void)setHasStatusCode:(bool)arg1;
- (void)setResponses:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
