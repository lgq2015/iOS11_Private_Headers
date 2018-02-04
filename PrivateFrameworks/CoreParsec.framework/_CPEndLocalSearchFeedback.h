/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPEndLocalSearchFeedback : PBCodable <NSSecureCoding, _CPEndLocalSearchFeedback, _CPFeedbackUUID, _CPProcessableFeedback> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) bool requiresQueryId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
