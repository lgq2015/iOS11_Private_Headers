/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPBMetadataService : PBCodable <NSCopying> {
    NSString * _desc;
    NSString * _type;
}

@property (nonatomic, retain) NSString *desc;
@property (nonatomic, readonly) bool hasDesc;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)desc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDesc;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDesc:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
