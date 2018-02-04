/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionsMapping : PBCodable <NSCopying> {
    NSMutableArray * _identifiers;
}

@property (nonatomic, retain) NSMutableArray *identifiers;

+ (Class)identifiersType;

- (void).cxx_destruct;
- (void)addIdentifiers:(id)arg1;
- (void)clearIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifiers;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
