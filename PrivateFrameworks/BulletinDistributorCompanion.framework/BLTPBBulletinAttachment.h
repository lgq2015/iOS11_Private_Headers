/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBulletinAttachment : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int isUpdated : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isUpdated;
    unsigned int  _type;
    NSString * _uRL;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsUpdated;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isUpdated;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSString *uRL;

- (void).cxx_destruct;
- (id)attachmentURLURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasIsUpdated;
- (bool)hasType;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isUpdated;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsUpdated:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUpdated:(bool)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setURL:(id)arg1;
- (unsigned int)type;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end
