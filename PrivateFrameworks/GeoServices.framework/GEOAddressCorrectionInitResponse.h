/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {
    NSMutableArray * _address;
    NSString * _addressID;
    GEOLocation * _addressLocation;
    struct { 
        unsigned int numberOfVisitsBucketSize : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    unsigned int  _numberOfVisitsBucketSize;
    int  _statusCode;
}

@property (nonatomic, retain) NSMutableArray *address;
@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, retain) GEOLocation *addressLocation;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, readonly) bool hasAddressLocation;
@property (nonatomic) bool hasNumberOfVisitsBucketSize;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (nonatomic) int statusCode;

+ (Class)addressType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)address;
- (id)addressAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressCount;
- (id)addressID;
- (id)addressLocation;
- (void)clearAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (bool)hasAddressLocation;
- (bool)hasNumberOfVisitsBucketSize;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucketSize;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setAddressLocation:(id)arg1;
- (void)setHasNumberOfVisitsBucketSize:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setNumberOfVisitsBucketSize:(unsigned int)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
