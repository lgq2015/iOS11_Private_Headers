/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int supportsMultipleAddresses : 1; 
    }  _has;
    NSString * _personID;
    bool  _supportsMultipleAddresses;
    NSString * _token;
}

@property (nonatomic, readonly) bool hasPersonID;
@property (nonatomic) bool hasSupportsMultipleAddresses;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic) bool supportsMultipleAddresses;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPersonID;
- (bool)hasSupportsMultipleAddresses;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personID;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasSupportsMultipleAddresses:(bool)arg1;
- (void)setPersonID:(id)arg1;
- (void)setSupportsMultipleAddresses:(bool)arg1;
- (void)setToken:(id)arg1;
- (bool)supportsMultipleAddresses;
- (id)token;
- (void)writeTo:(id)arg1;

@end
