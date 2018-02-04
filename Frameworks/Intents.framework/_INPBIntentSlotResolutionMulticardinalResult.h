/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <NSCopying> {
    NSMutableArray * _resolutionResults;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *resolutionResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)resolutionResultsType;

- (void).cxx_destruct;
- (void)addResolutionResults:(id)arg1;
- (void)clearResolutionResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)resolutionResults;
- (id)resolutionResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resolutionResultsCount;
- (void)setResolutionResults:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end