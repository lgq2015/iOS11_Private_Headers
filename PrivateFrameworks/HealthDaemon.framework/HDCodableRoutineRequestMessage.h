/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {
    HDCodableRoutineLocationRequest * _fetchLocationRequest;
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    NSString * _requestIdentifier;
    int  _requestType;
    HDCodableRoutineScenarioTriggeredRequest * _scenarioTriggeredRequest;
}

@property (nonatomic, retain) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (nonatomic, readonly) bool hasFetchLocationRequest;
@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) bool hasScenarioTriggeredRequest;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic) int requestType;
@property (nonatomic, retain) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchLocationRequest;
- (bool)hasFetchLocationRequest;
- (bool)hasRequestIdentifier;
- (bool)hasRequestType;
- (bool)hasScenarioTriggeredRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (id)scenarioTriggeredRequest;
- (void)setFetchLocationRequest:(id)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setScenarioTriggeredRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
