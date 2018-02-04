/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementSetNewAuthRandomResponse : PBCodable <NSCopying> {
    NSData * _challengeResponse;
    NSData * _cryptogram;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSData *challengeResponse;
@property (nonatomic, retain) NSData *cryptogram;
@property (nonatomic, readonly) bool hasChallengeResponse;
@property (nonatomic, readonly) bool hasCryptogram;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (id)challengeResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cryptogram;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChallengeResponse;
- (bool)hasCryptogram;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setCryptogram:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
