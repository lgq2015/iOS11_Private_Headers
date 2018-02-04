/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADOptOutRequest : PBRequest <NSCopying> {
    NSData * _dPID;
    struct { 
        unsigned int statusChangeTimestamp : 1; 
        unsigned int transmitTimestamp : 1; 
        unsigned int timezone : 1; 
        unsigned int optedOutStatus : 1; 
    }  _has;
    NSData * _iAdID;
    bool  _optedOutStatus;
    double  _statusChangeTimestamp;
    float  _timezone;
    double  _transmitTimestamp;
}

@property (nonatomic, retain) NSData *dPID;
@property (nonatomic, readonly) bool hasDPID;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic) bool hasOptedOutStatus;
@property (nonatomic) bool hasStatusChangeTimestamp;
@property (nonatomic) bool hasTimezone;
@property (nonatomic) bool hasTransmitTimestamp;
@property (nonatomic, retain) NSData *iAdID;
@property (nonatomic) bool optedOutStatus;
@property (nonatomic) double statusChangeTimestamp;
@property (nonatomic) float timezone;
@property (nonatomic) double transmitTimestamp;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDPID;
- (bool)hasIAdID;
- (bool)hasOptedOutStatus;
- (bool)hasStatusChangeTimestamp;
- (bool)hasTimezone;
- (bool)hasTransmitTimestamp;
- (unsigned long long)hash;
- (id)iAdID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)optedOutStatus;
- (bool)readFrom:(id)arg1;
- (void)setDPID:(id)arg1;
- (void)setHasOptedOutStatus:(bool)arg1;
- (void)setHasStatusChangeTimestamp:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setHasTransmitTimestamp:(bool)arg1;
- (void)setIAdID:(id)arg1;
- (void)setOptedOutStatus:(bool)arg1;
- (void)setStatusChangeTimestamp:(double)arg1;
- (void)setTimezone:(float)arg1;
- (void)setTransmitTimestamp:(double)arg1;
- (double)statusChangeTimestamp;
- (float)timezone;
- (double)transmitTimestamp;
- (void)writeTo:(id)arg1;

@end
