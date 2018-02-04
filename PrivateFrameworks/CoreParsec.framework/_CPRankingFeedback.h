/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPRankingFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPRankingFeedback> {
    double  _blendingDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int blendingDuration : 1; 
    }  _has;
    NSArray * _sections;
    unsigned long long  _timestamp;
}

@property (nonatomic) double blendingDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasBlendingDuration;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (double)blendingDuration;
- (void)clearSections;
- (id)dictionaryRepresentation;
- (bool)hasBlendingDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setBlendingDuration:(double)arg1;
- (void)setSections:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
