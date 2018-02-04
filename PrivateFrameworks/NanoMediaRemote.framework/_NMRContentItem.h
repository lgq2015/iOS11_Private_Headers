/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRContentItem : PBCodable <NSCopying> {
    NSString * _identifier;
    _NMRContentItemMetadata * _metadata;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _NMRContentItemMetadata *metadata;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
