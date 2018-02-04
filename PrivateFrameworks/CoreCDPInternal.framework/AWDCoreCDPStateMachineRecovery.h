/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface AWDCoreCDPStateMachineRecovery : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int secretType : 1; 
        unsigned int timestamp : 1; 
        unsigned int userDidReset : 1; 
    }  _has;
    long long  _secretType;
    unsigned long long  _timestamp;
    bool  _userDidReset;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasSecretType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserDidReset;
@property (nonatomic) long long secretType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool userDidReset;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasSecretType;
- (bool)hasTimestamp;
- (bool)hasUserDidReset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)secretType;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasSecretType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserDidReset:(bool)arg1;
- (void)setSecretType:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserDidReset:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)userDidReset;
- (void)writeTo:(id)arg1;

@end
