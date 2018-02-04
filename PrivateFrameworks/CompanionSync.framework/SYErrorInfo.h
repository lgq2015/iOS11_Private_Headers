/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYErrorInfo : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    NSData * _userInfo;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasUserInfo;
@property (nonatomic, retain) NSData *userInfo;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_usefulDescription;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasUserInfo;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)writeTo:(id)arg1;

@end
