/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {
    BLTPBBulletin * _bulletin;
    double  _date;
    struct { 
        unsigned int date : 1; 
        unsigned int updateType : 1; 
        unsigned int shouldPlayLightsAndSirens : 1; 
        unsigned int trafficRestricted : 1; 
    }  _has;
    bool  _shouldPlayLightsAndSirens;
    bool  _trafficRestricted;
    unsigned int  _updateType;
}

@property (nonatomic, retain) BLTPBBulletin *bulletin;
@property (nonatomic) double date;
@property (nonatomic, readonly) bool hasBulletin;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasShouldPlayLightsAndSirens;
@property (nonatomic) bool hasTrafficRestricted;
@property (nonatomic) bool hasUpdateType;
@property (nonatomic) bool shouldPlayLightsAndSirens;
@property (nonatomic) bool trafficRestricted;
@property (nonatomic) unsigned int updateType;

- (void).cxx_destruct;
- (id)bulletin;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBulletin;
- (bool)hasDate;
- (bool)hasShouldPlayLightsAndSirens;
- (bool)hasTrafficRestricted;
- (bool)hasUpdateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasShouldPlayLightsAndSirens:(bool)arg1;
- (void)setHasTrafficRestricted:(bool)arg1;
- (void)setHasUpdateType:(bool)arg1;
- (void)setShouldPlayLightsAndSirens:(bool)arg1;
- (void)setTrafficRestricted:(bool)arg1;
- (void)setUpdateType:(unsigned int)arg1;
- (bool)shouldPlayLightsAndSirens;
- (bool)trafficRestricted;
- (unsigned int)updateType;
- (void)writeTo:(id)arg1;

@end
