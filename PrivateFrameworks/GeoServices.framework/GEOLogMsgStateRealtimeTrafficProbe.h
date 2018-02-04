/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {
    struct { 
        unsigned int recvTime : 1; 
        unsigned int probeCount : 1; 
    }  _has;
    int  _probeCount;
    long long  _recvTime;
    NSString * _tripId;
}

@property (nonatomic) bool hasProbeCount;
@property (nonatomic) bool hasRecvTime;
@property (nonatomic, readonly) bool hasTripId;
@property (nonatomic) int probeCount;
@property (nonatomic) long long recvTime;
@property (nonatomic, retain) NSString *tripId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProbeCount;
- (bool)hasRecvTime;
- (bool)hasTripId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)probeCount;
- (bool)readFrom:(id)arg1;
- (long long)recvTime;
- (void)setHasProbeCount:(bool)arg1;
- (void)setHasRecvTime:(bool)arg1;
- (void)setProbeCount:(int)arg1;
- (void)setRecvTime:(long long)arg1;
- (void)setTripId:(id)arg1;
- (id)tripId;
- (void)writeTo:(id)arg1;

@end
