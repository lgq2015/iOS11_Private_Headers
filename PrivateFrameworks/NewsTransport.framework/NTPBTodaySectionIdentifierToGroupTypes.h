/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _groupTypes;
    NSString * _personalizationSectionIdentifier;
}

@property (nonatomic, readonly) int*groupTypes;
@property (nonatomic, readonly) unsigned long long groupTypesCount;
@property (nonatomic, retain) NSString *personalizationSectionIdentifier;

- (void).cxx_destruct;
- (int)StringAsGroupTypes:(id)arg1;
- (void)addGroupTypes:(int)arg1;
- (void)clearGroupTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int*)groupTypes;
- (id)groupTypesAsString:(int)arg1;
- (int)groupTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupTypesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personalizationSectionIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setGroupTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPersonalizationSectionIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
