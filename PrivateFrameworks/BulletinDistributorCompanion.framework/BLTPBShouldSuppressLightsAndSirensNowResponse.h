/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldSuppress : 1; 
    }  _has;
    bool  _shouldSuppress;
}

@property (nonatomic) bool hasShouldSuppress;
@property (nonatomic) bool shouldSuppress;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldSuppress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldSuppress:(bool)arg1;
- (void)setShouldSuppress:(bool)arg1;
- (bool)shouldSuppress;
- (void)writeTo:(id)arg1;

@end
