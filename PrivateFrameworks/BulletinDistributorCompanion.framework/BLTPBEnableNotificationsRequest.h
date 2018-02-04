/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBEnableNotificationsRequest : PBRequest <NSCopying> {
    bool  _enabled;
    struct { 
        unsigned int enabled : 1; 
        unsigned int mirror : 1; 
    }  _has;
    bool  _mirror;
    NSString * _sectionID;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasMirror;
@property (nonatomic, readonly) bool hasSectionID;
@property (nonatomic) bool mirror;
@property (nonatomic, retain) NSString *sectionID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasEnabled;
- (bool)hasMirror;
- (bool)hasSectionID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)mirror;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasMirror:(bool)arg1;
- (void)setMirror:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
