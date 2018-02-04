/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBSize : PBCodable <NSCopying> {
    float  _height;
    float  _width;
}

@property (nonatomic) float height;
@property (nonatomic) float width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (float)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)writeTo:(id)arg1;

@end
