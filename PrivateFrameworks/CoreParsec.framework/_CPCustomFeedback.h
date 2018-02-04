/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCustomFeedback : PBCodable <NSSecureCoding, _CPCustomFeedback, _CPProcessableFeedback> {
    int  _feedbackType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
    }  _has;
    NSData * _jsonFeedback;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic) int feedbackType;
@property (nonatomic, readonly) bool hasFeedbackType;
@property (nonatomic, readonly) bool hasJsonFeedback;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *jsonFeedback;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (bool)hasFeedbackType;
- (bool)hasJsonFeedback;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)jsonFeedback;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setFeedbackType:(int)arg1;
- (void)setJsonFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
