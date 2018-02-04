/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacecardModule : PBCodable <NSCopying> {
    struct { 
        unsigned int offset : 1; 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _margins;
    unsigned int  _offset;
    int  _type;
}

@property (nonatomic) bool hasOffset;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *margins;
@property (nonatomic) unsigned int offset;
@property (nonatomic) int type;

+ (Class)marginsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addMargins:(id)arg1;
- (void)clearMargins;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOffset;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)margins;
- (id)marginsAtIndex:(unsigned long long)arg1;
- (unsigned long long)marginsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (bool)readFrom:(id)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMargins:(id)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
