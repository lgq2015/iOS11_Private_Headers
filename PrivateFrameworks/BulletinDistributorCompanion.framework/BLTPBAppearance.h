/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAppearance : PBCodable <NSCopying> {
    bool  _destructive;
    struct { 
        unsigned int destructive : 1; 
    }  _has;
    BLTPBImage * _image;
    NSString * _title;
}

@property (nonatomic) bool destructive;
@property (nonatomic) bool hasDestructive;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) BLTPBImage *image;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)description;
- (bool)destructive;
- (id)dictionaryRepresentation;
- (bool)hasDestructive;
- (bool)hasImage;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setHasDestructive:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
