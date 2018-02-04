/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSPlayerInfoContextToken : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionID : 1; 
    }  _has;
    unsigned long long  _sessionID;
    NSData * _token;
}

@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic, retain) NSData *token;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionID;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end