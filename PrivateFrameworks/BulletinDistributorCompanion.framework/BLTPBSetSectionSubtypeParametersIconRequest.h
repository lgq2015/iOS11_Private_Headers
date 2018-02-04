/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {
    bool  _defaultSubtype;
    struct { 
        unsigned int subtypeID : 1; 
        unsigned int defaultSubtype : 1; 
    }  _has;
    BLTPBSectionIcon * _icon;
    NSString * _sectionID;
    unsigned long long  _subtypeID;
}

@property (nonatomic) bool defaultSubtype;
@property (nonatomic) bool hasDefaultSubtype;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool hasSubtypeID;
@property (nonatomic, retain) BLTPBSectionIcon *icon;
@property (nonatomic, retain) NSString *sectionID;
@property (nonatomic) unsigned long long subtypeID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultSubtype;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultSubtype;
- (bool)hasIcon;
- (bool)hasSectionID;
- (bool)hasSubtypeID;
- (unsigned long long)hash;
- (id)icon;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setDefaultSubtype:(bool)arg1;
- (void)setHasDefaultSubtype:(bool)arg1;
- (void)setHasSubtypeID:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtypeID:(unsigned long long)arg1;
- (unsigned long long)subtypeID;
- (void)writeTo:(id)arg1;

@end
