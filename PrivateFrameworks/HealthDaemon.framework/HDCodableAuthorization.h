/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAuthorization : PBCodable <NSCopying> {
    long long  _authorizationRequest;
    long long  _authorizationStatus;
    struct { 
        unsigned int authorizationRequest : 1; 
        unsigned int authorizationStatus : 1; 
        unsigned int modificationDate : 1; 
        unsigned int modificationEpoch : 1; 
        unsigned int objectType : 1; 
    }  _has;
    double  _modificationDate;
    long long  _modificationEpoch;
    long long  _objectType;
}

@property (nonatomic) long long authorizationRequest;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) bool hasAuthorizationRequest;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic) bool hasModificationEpoch;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) long long objectType;

- (long long)_authorizationRequest;
- (long long)_authorizationStatus;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (long long)authorizationRequest;
- (long long)authorizationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationRequest;
- (bool)hasAuthorizationStatus;
- (bool)hasModificationDate;
- (bool)hasModificationEpoch;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (long long)modificationEpoch;
- (long long)objectType;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationRequest:(long long)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setHasAuthorizationRequest:(bool)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasModificationEpoch:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setModificationEpoch:(long long)arg1;
- (void)setObjectType:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
