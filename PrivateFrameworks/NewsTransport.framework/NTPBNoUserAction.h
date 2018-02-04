/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBNoUserAction : PBCodable <NSCopying> {
    NSMutableArray * _visibleViews;
}

@property (nonatomic, retain) NSMutableArray *visibleViews;

+ (Class)visibleViewsType;

- (void).cxx_destruct;
- (void)addVisibleViews:(id)arg1;
- (void)clearVisibleViews;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVisibleViews:(id)arg1;
- (id)visibleViews;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleViewsCount;
- (void)writeTo:(id)arg1;

@end
