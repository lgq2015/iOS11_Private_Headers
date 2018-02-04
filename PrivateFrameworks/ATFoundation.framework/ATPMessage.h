/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATPMessage : PBCodable <NSCopying> {
    bool  _additionalPayload;
    struct { 
        unsigned int messageID : 1; 
        unsigned int messageType : 1; 
        unsigned int sessionID : 1; 
        unsigned int additionalPayload : 1; 
    }  _has;
    unsigned int  _messageID;
    int  _messageType;
    NSData * _parameters;
    NSData * _paramsSignature;
    NSData * _payload;
    NSData * _payloadSignature;
    ATPRequest * _request;
    ATPResponse * _response;
    unsigned int  _sessionID;
    ATPError * _streamError;
}

@property (nonatomic) bool additionalPayload;
@property (nonatomic) bool hasAdditionalPayload;
@property (nonatomic) bool hasMessageID;
@property (nonatomic) bool hasMessageType;
@property (nonatomic, readonly) bool hasParameters;
@property (nonatomic, readonly) bool hasParamsSignature;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasPayloadSignature;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasStreamError;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) int messageType;
@property (nonatomic, retain) NSData *parameters;
@property (nonatomic, retain) NSData *paramsSignature;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSData *payloadSignature;
@property (nonatomic, retain) ATPRequest *request;
@property (nonatomic, retain) ATPResponse *response;
@property (nonatomic) unsigned int sessionID;
@property (nonatomic, retain) ATPError *streamError;

- (void).cxx_destruct;
- (bool)additionalPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formattedDescription;
- (bool)hasAdditionalPayload;
- (bool)hasMessageID;
- (bool)hasMessageType;
- (bool)hasParameters;
- (bool)hasParamsSignature;
- (bool)hasPayload;
- (bool)hasPayloadSignature;
- (bool)hasRequest;
- (bool)hasResponse;
- (bool)hasSessionID;
- (bool)hasStreamError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageID;
- (int)messageType;
- (id)parameters;
- (id)paramsSignature;
- (id)payload;
- (id)payloadSignature;
- (bool)readFrom:(id)arg1;
- (id)request;
- (id)response;
- (unsigned int)sessionID;
- (void)setAdditionalPayload:(bool)arg1;
- (void)setHasAdditionalPayload:(bool)arg1;
- (void)setHasMessageID:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setMessageType:(int)arg1;
- (void)setParameters:(id)arg1;
- (void)setParamsSignature:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadSignature:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setStreamError:(id)arg1;
- (id)streamError;
- (void)writeTo:(id)arg1;

@end
