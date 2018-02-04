/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadNeedsDisambiguation : PBCodable <NSCopying> {
    NSMutableArray * _disambiguationItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *disambiguationItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)disambiguationItemsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDisambiguationItems:(id)arg1;
- (void)clearDisambiguationItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationItemsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
