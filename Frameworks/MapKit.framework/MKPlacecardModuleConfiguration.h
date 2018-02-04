/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacecardModuleConfiguration : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _version;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)entriesType;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
