/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    struct { 
        unsigned int suggestionType : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _name;
    int  _suggestionType;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasSuggestionType;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int suggestionType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entriesType;

- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (bool)hasName;
- (bool)hasSuggestionType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setType:(int)arg1;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
