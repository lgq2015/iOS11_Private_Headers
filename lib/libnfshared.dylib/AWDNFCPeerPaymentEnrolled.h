/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCPeerPaymentEnrolled : PBCodable <NSCopying> {
    unsigned long long  _duration;
    unsigned int  _errorCode;
    unsigned int  _errorStep;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int errorStep : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) unsigned int errorStep;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorStep;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)errorCode;
- (unsigned int)errorStep;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasErrorStep;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorStep:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorStep:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
