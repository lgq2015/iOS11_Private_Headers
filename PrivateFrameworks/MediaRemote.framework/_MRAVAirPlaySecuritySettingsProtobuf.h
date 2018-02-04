/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int securityType : 1; 
    }  _has;
    NSString * _password;
    int  _securityType;
}

@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) int securityType;

- (int)StringAsSecurityType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassword;
- (bool)hasSecurityType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)password;
- (bool)readFrom:(id)arg1;
- (int)securityType;
- (id)securityTypeAsString:(int)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSecurityType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
