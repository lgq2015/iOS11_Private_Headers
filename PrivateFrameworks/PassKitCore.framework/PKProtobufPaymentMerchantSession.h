/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentMerchantSession : PBCodable <NSCopying> {
    NSString * _displayName;
    NSString * _domain;
    unsigned long long  _epochTimestamp;
    struct { 
        unsigned int epochTimestamp : 1; 
    }  _has;
    NSString * _merchantIdentifier;
    NSString * _nonce;
    NSString * _retryNonce;
    NSString * _sessionIdentifier;
    NSData * _signature;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) unsigned long long epochTimestamp;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasEpochTimestamp;
@property (nonatomic, readonly) bool hasMerchantIdentifier;
@property (nonatomic, readonly) bool hasNonce;
@property (nonatomic, readonly) bool hasRetryNonce;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic, retain) NSString *merchantIdentifier;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)domain;
- (unsigned long long)epochTimestamp;
- (bool)hasDisplayName;
- (bool)hasDomain;
- (bool)hasEpochTimestamp;
- (bool)hasMerchantIdentifier;
- (bool)hasNonce;
- (bool)hasRetryNonce;
- (bool)hasSessionIdentifier;
- (bool)hasSignature;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)nonce;
- (bool)readFrom:(id)arg1;
- (id)retryNonce;
- (id)sessionIdentifier;
- (void)setDisplayName:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEpochTimestamp:(unsigned long long)arg1;
- (void)setHasEpochTimestamp:(bool)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setRetryNonce:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;
- (void)writeTo:(id)arg1;

@end
