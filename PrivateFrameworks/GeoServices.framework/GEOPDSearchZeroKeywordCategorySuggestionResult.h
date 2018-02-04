/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {
    NSMutableArray * _categorys;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zeroKeywordEntrys;
}

@property (nonatomic, retain) NSMutableArray *categorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *zeroKeywordEntrys;

+ (Class)categoryType;
+ (Class)zeroKeywordEntryType;

- (void).cxx_destruct;
- (void)addCategory:(id)arg1;
- (void)addZeroKeywordEntry:(id)arg1;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (void)clearCategorys;
- (void)clearZeroKeywordEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(id)arg1;
- (void)setZeroKeywordEntrys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zeroKeywordEntryAtIndex:(unsigned long long)arg1;
- (id)zeroKeywordEntrys;
- (unsigned long long)zeroKeywordEntrysCount;

@end
