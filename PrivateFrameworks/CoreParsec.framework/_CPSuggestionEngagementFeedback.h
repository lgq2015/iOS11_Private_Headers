/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSuggestionEngagementFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSuggestionEngagementFeedback> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    _CPSearchSuggestionForFeedback * _suggestion;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasSuggestion;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, retain) _CPSearchSuggestionForFeedback *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (bool)hasSuggestion;
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
- (void)setSuggestion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestion;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
