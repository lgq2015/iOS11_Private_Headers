/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSectionEngagementFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSectionEngagementFeedback> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int triggerEvent : 1; 
    }  _has;
    _CPResultSectionForFeedback * _section;
    unsigned long long  _timestamp;
    int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasSection;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTriggerEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, retain) _CPResultSectionForFeedback *section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (bool)hasSection;
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
- (id)section;
- (void)setSection:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end