/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSectionRankingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSectionRankingFeedback> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int localSectionPosition : 1; 
        unsigned int personalizationScore : 1; 
    }  _has;
    unsigned int  _localSectionPosition;
    double  _personalizationScore;
    NSArray * _results;
    _CPResultSectionForFeedback * _section;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasLocalSectionPosition;
@property (nonatomic, readonly) bool hasPersonalizationScore;
@property (nonatomic, readonly) bool hasSection;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int localSectionPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, retain) _CPResultSectionForFeedback *section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (bool)hasLocalSectionPosition;
- (bool)hasPersonalizationScore;
- (bool)hasSection;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)localSectionPosition;
- (double)personalizationScore;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (id)section;
- (void)setLocalSectionPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResults:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
