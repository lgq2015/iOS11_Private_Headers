/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordType : PBCodable <NSCopying> {
    NSString * _name;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
