/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryIndexs;
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
    }  _has;
    unsigned int  _hourOfDay;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int*categoryIndexs;
@property (nonatomic, readonly) unsigned long long categoryIndexsCount;
@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addCategoryIndex:(unsigned int)arg1;
- (unsigned int)categoryIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)categoryIndexs;
- (unsigned long long)categoryIndexsCount;
- (void)clearCategoryIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayOfWeek;
- (bool)hasHourOfDay;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
