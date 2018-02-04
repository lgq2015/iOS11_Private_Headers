/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacecardModuleMargin : PBCodable <NSCopying> {
    struct { 
        unsigned int margin : 1; 
        unsigned int topModuleType : 1; 
    }  _has;
    unsigned int  _margin;
    int  _topModuleType;
}

@property (nonatomic) bool hasMargin;
@property (nonatomic) bool hasTopModuleType;
@property (nonatomic) unsigned int margin;
@property (nonatomic) int topModuleType;

- (int)StringAsTopModuleType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMargin;
- (bool)hasTopModuleType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)margin;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMargin:(bool)arg1;
- (void)setHasTopModuleType:(bool)arg1;
- (void)setMargin:(unsigned int)arg1;
- (void)setTopModuleType:(int)arg1;
- (int)topModuleType;
- (id)topModuleTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
