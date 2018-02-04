/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPulseRequest : PBRequest <NSCopying> {
    int  _apnsEnv;
    NSString * _etag;
    struct { 
        unsigned int lookbackWindowMillis : 1; 
        unsigned int apnsEnv : 1; 
        unsigned int reset : 1; 
    }  _has;
    long long  _lookbackWindowMillis;
    CKDPPulseData * _pulseData;
    NSData * _pushToken;
    bool  _reset;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic) int apnsEnv;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) bool hasApnsEnv;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic) bool hasLookbackWindowMillis;
@property (nonatomic, readonly) bool hasPulseData;
@property (nonatomic, readonly) bool hasPushToken;
@property (nonatomic) bool hasReset;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic) long long lookbackWindowMillis;
@property (nonatomic, retain) CKDPPulseData *pulseData;
@property (nonatomic, retain) NSData *pushToken;
@property (nonatomic) bool reset;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsApnsEnv:(id)arg1;
- (int)apnsEnv;
- (id)apnsEnvAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasApnsEnv;
- (bool)hasEtag;
- (bool)hasLookbackWindowMillis;
- (bool)hasPulseData;
- (bool)hasPushToken;
- (bool)hasReset;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)lookbackWindowMillis;
- (void)mergeFrom:(id)arg1;
- (id)pulseData;
- (id)pushToken;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (bool)reset;
- (Class)responseClass;
- (void)setApnsEnv:(int)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasApnsEnv:(bool)arg1;
- (void)setHasLookbackWindowMillis:(bool)arg1;
- (void)setHasReset:(bool)arg1;
- (void)setLookbackWindowMillis:(long long)arg1;
- (void)setPulseData:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setReset:(bool)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
