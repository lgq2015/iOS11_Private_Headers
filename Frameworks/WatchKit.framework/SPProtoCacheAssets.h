/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoCacheAssets : PBCodable <NSCopying> {
    NSMutableArray * _assets;
}

@property (nonatomic, retain) NSMutableArray *assets;

+ (Class)assetsType;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)writeTo:(id)arg1;

@end
