/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNetworkSession : PBCodable <NSCopying> {
    int  _cellularRadioAccessTechnology;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int wifiReachable : 1; 
    }  _has;
    unsigned long long  _sessionID;
    bool  _wifiReachable;
}

@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic) bool hasCellularRadioAccessTechnology;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasWifiReachable;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) bool wifiReachable;

- (int)cellularRadioAccessTechnology;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCellularRadioAccessTechnology;
- (bool)hasSessionID;
- (bool)hasWifiReachable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sessionID;
- (void)setCellularRadioAccessTechnology:(int)arg1;
- (void)setHasCellularRadioAccessTechnology:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasWifiReachable:(bool)arg1;
- (void)setSessionID:(unsigned long long)arg1;
- (void)setWifiReachable:(bool)arg1;
- (bool)wifiReachable;
- (void)writeTo:(id)arg1;

@end
