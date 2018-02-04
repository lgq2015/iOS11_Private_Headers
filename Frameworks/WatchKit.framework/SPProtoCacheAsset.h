/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoCacheAsset : PBCodable <NSCopying> {
    double  _accessDate;
    NSString * _key;
    unsigned long long  _size;
    unsigned int  _state;
}

@property (nonatomic) double accessDate;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned int state;

- (void).cxx_destruct;
- (double)accessDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned long long)size;
- (unsigned int)state;
- (void)writeTo:(id)arg1;

@end
