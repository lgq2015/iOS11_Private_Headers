/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionRetrieveRequest : PBRequest <NSCopying> {
    CKDPIdentifier * _identifier;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) CKDPIdentifier *identifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
