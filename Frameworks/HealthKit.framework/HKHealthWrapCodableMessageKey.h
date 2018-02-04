/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapCodableMessageKey : PBCodable <NSCopying> {
    NSData * _iv;
    NSData * _key;
}

@property (nonatomic, readonly) bool hasIv;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSData *iv;
@property (nonatomic, retain) NSData *key;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIv;
- (bool)hasKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)iv;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIv:(id)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
