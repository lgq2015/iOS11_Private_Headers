/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying> {
    int  _action;
    int  _failureReason;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int action : 1; 
        unsigned int failureReason : 1; 
        unsigned int stage : 1; 
        unsigned int retryExpected : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _retryExpected;
    int  _stage;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) int action;
@property (nonatomic) int failureReason;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasRetryExpected;
@property (nonatomic) bool hasStage;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool retryExpected;
@property (nonatomic) int stage;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAction:(id)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (int)StringAsStage:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (id)failureReasonAsString:(int)arg1;
- (bool)hasAction;
- (bool)hasFailureReason;
- (bool)hasRetryExpected;
- (bool)hasStage;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)retryExpected;
- (void)setAction:(int)arg1;
- (void)setFailureReason:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasRetryExpected:(bool)arg1;
- (void)setHasStage:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRetryExpected:(bool)arg1;
- (void)setStage:(int)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)stage;
- (id)stageAsString:(int)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
