/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATPError : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    long long  _domainCode;
    NSString * _errorDescription;
    struct { 
        unsigned int domainCode : 1; 
        unsigned int code : 1; 
    }  _has;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) long long domainCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasDomainCode;
@property (nonatomic, readonly) bool hasErrorDescription;

- (void).cxx_destruct;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (long long)domainCode;
- (id)errorDescription;
- (bool)hasCode;
- (bool)hasDomain;
- (bool)hasDomainCode;
- (bool)hasErrorDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasDomainCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
