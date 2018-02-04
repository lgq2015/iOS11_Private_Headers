/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardViewAppearFeedback : PBCodable <NSSecureCoding, _CPCardViewAppearFeedback, _CPProcessableFeedback> {
    _CPCardForFeedback * _card;
    NSString * _fbr;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int level : 1; 
    }  _has;
    unsigned int  _level;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) _CPCardForFeedback *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *fbr;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasCard;
@property (nonatomic, readonly) bool hasFbr;
@property (nonatomic, readonly) bool hasLevel;
@property (nonatomic, readonly) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int level;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)card;
- (id)dictionaryRepresentation;
- (id)fbr;
- (id)feedbackJSON;
- (bool)hasCard;
- (bool)hasFbr;
- (bool)hasLevel;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)level;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setCard:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
