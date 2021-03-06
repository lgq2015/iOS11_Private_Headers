/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPParsecFeedback : PBCodable <NSSecureCoding, _CPParsecFeedback> {
    struct { 
        unsigned int queryId : 1; 
        unsigned int relTimestamp : 1; 
    }  _has;
    NSString * _parsecDeveloperID;
    _CPFeedbackPayload * _payload;
    unsigned long long  _queryId;
    unsigned long long  _relTimestamp;
    NSString * _userAgent;
    NSString * _userGuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasParsecDeveloperID;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasQueryId;
@property (nonatomic, readonly) bool hasRelTimestamp;
@property (nonatomic, readonly) bool hasUserAgent;
@property (nonatomic, readonly) bool hasUserGuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *parsecDeveloperID;
@property (nonatomic, retain) _CPFeedbackPayload *payload;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) unsigned long long relTimestamp;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, copy) NSString *userGuid;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasParsecDeveloperID;
- (bool)hasPayload;
- (bool)hasQueryId;
- (bool)hasRelTimestamp;
- (bool)hasUserAgent;
- (bool)hasUserGuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parsecDeveloperID;
- (id)payload;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (unsigned long long)relTimestamp;
- (bool)requiresQueryId;
- (void)setParsecDeveloperID:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRelTimestamp:(unsigned long long)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserGuid:(id)arg1;
- (id)userAgent;
- (id)userGuid;
- (void)writeTo:(id)arg1;

@end
