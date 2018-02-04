/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying> {
    NSString * _containerScopedUserId;
    NSString * _token;
}

@property (nonatomic, retain) NSString *containerScopedUserId;
@property (nonatomic, readonly) bool hasContainerScopedUserId;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (id)containerScopedUserId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerScopedUserId;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerScopedUserId:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end
