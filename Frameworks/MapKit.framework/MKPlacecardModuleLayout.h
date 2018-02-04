/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacecardModuleLayout : PBCodable <NSCopying> {
    NSMutableArray * _modules;
}

@property (nonatomic, retain) NSMutableArray *modules;

+ (Class)modulesType;

- (void).cxx_destruct;
- (void)addModules:(id)arg1;
- (void)clearModules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modules;
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (bool)readFrom:(id)arg1;
- (void)setModules:(id)arg1;
- (void)writeTo:(id)arg1;

@end
