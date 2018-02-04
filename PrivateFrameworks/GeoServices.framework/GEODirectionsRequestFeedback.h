/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequestFeedback : PBCodable <NSCopying> {
    NSString * _appIdentifier;
    struct { 
        unsigned int purpose : 1; 
        unsigned int source : 1; 
    }  _has;
    int  _purpose;
    NSString * _requestingAppId;
    int  _source;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic) bool hasPurpose;
@property (nonatomic, readonly) bool hasRequestingAppId;
@property (nonatomic) bool hasSource;
@property (nonatomic) int purpose;
@property (nonatomic, retain) NSString *requestingAppId;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (int)StringAsPurpose:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (id)appIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppIdentifier;
- (bool)hasPurpose;
- (bool)hasRequestingAppId;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithPurpose:(int)arg1;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2;
- (id)initWithPurpose:(int)arg1 andSource:(int)arg2 andIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestingAppId;
- (void)setAppIdentifier:(id)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setPurpose:(int)arg1;
- (void)setRequestingAppId:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
