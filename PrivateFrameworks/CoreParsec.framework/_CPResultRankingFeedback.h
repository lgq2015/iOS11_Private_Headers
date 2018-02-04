/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultRankingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultRankingFeedback> {
    NSArray * _duplicateResults;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int localResultPosition : 1; 
        unsigned int personalizationScore : 1; 
    }  _has;
    NSArray * _hiddenResults;
    unsigned int  _localResultPosition;
    double  _personalizationScore;
    _CPSearchResultForFeedback * _result;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *duplicateResults;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasLocalResultPosition;
@property (nonatomic, readonly) bool hasPersonalizationScore;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hiddenResults;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addDuplicateResults:(id)arg1;
- (void)addHiddenResults:(id)arg1;
- (void)clearDuplicateResults;
- (void)clearHiddenResults;
- (id)dictionaryRepresentation;
- (id)duplicateResults;
- (id)duplicateResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateResultsCount;
- (id)feedbackJSON;
- (bool)hasLocalResultPosition;
- (bool)hasPersonalizationScore;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hiddenResults;
- (id)hiddenResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hiddenResultsCount;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)localResultPosition;
- (double)personalizationScore;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)result;
- (void)setDuplicateResults:(id)arg1;
- (void)setHiddenResults:(id)arg1;
- (void)setLocalResultPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setResult:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
