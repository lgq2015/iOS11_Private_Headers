/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying> {
    bool  _forceFetch;
    struct { 
        unsigned int forceFetch : 1; 
    }  _has;
    NSString * _routingKey;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
}

@property (nonatomic) bool forceFetch;
@property (nonatomic) bool hasForceFetch;
@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) NSData *shortTokenHash;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)forceFetch;
- (bool)hasForceFetch;
- (bool)hasRoutingKey;
- (bool)hasShareId;
- (bool)hasShortTokenHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)routingKey;
- (void)setForceFetch:(bool)arg1;
- (void)setHasForceFetch:(bool)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)shareId;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
