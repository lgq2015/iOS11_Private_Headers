/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <NSSecureCoding, _CPMapsCardSectionEngagementFeedback, _CPProcessableFeedback> {
    int  _actionCardType;
    NSString * _cardSectionId;
    _CPPunchoutForFeedback * _destination;
    int  _feedbackType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int triggerEvent : 1; 
        unsigned int actionCardType : 1; 
        unsigned int feedbackType : 1; 
    }  _has;
    NSString * _resultId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (nonatomic) int actionCardType;
@property (nonatomic, copy) NSString *cardSectionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPPunchoutForFeedback *destination;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) int feedbackType;
@property (nonatomic, readonly) bool hasActionCardType;
@property (nonatomic, readonly) bool hasCardSectionId;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasFeedbackType;
@property (nonatomic, readonly) bool hasResultId;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTriggerEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (int)actionCardType;
- (id)cardSectionId;
- (id)destination;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (bool)hasActionCardType;
- (bool)hasCardSectionId;
- (bool)hasDestination;
- (bool)hasFeedbackType;
- (bool)hasResultId;
- (bool)hasTimestamp;
- (bool)hasTriggerEvent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)resultId;
- (void)setActionCardType:(int)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setResultId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
