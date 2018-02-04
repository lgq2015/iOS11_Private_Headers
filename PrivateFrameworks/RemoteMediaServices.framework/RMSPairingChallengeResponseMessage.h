/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingChallengeResponseMessage : PBCodable <NSCopying> {
    NSString * _code;
    struct { 
        unsigned int sessionIdentifier : 1; 
        unsigned int userCancelled : 1; 
    }  _has;
    int  _sessionIdentifier;
    bool  _userCancelled;
}

@property (nonatomic, retain) NSString *code;
@property (nonatomic, readonly) bool hasCode;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) bool hasUserCancelled;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) bool userCancelled;

- (void).cxx_destruct;
- (id)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCode;
- (bool)hasSessionIdentifier;
- (bool)hasUserCancelled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setCode:(id)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setHasUserCancelled:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setUserCancelled:(bool)arg1;
- (bool)userCancelled;
- (void)writeTo:(id)arg1;

@end
