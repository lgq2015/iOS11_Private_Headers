/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <NSCopying> {
    NSMutableArray * _callRecords;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *callRecords;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)callRecordsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addCallRecords:(id)arg1;
- (id)callRecords;
- (id)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallRecords:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
