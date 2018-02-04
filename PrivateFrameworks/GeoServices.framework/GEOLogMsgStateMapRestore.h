/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapRestore : PBCodable <NSCopying> {
    NSMutableArray * _targetLayouts;
}

@property (nonatomic, retain) NSMutableArray *targetLayouts;

+ (Class)targetLayoutType;

- (void).cxx_destruct;
- (void)addTargetLayout:(id)arg1;
- (void)clearTargetLayouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTargetLayouts:(id)arg1;
- (id)targetLayoutAtIndex:(unsigned long long)arg1;
- (id)targetLayouts;
- (unsigned long long)targetLayoutsCount;
- (void)writeTo:(id)arg1;

@end
