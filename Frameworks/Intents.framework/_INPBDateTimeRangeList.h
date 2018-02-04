/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTimeRangeList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _dateRanges;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, retain) NSMutableArray *dateRanges;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)dateRangeType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDateRange:(id)arg1;
- (void)clearDateRanges;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRangeAtIndex:(unsigned long long)arg1;
- (id)dateRanges;
- (unsigned long long)dateRangesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDateRanges:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
