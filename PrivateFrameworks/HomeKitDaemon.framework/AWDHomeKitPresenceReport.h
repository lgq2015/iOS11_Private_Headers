/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitPresenceReport : PBCodable <NSCopying> {
    int  _authStatus;
    int  _computeStatus;
    int  _direction;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int authStatus : 1; 
        unsigned int computeStatus : 1; 
        unsigned int direction : 1; 
        unsigned int reason : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _reason;
    int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) int authStatus;
@property (nonatomic) int computeStatus;
@property (nonatomic) int direction;
@property (nonatomic) bool hasAuthStatus;
@property (nonatomic) bool hasComputeStatus;
@property (nonatomic) bool hasDirection;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reason;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAuthStatus:(id)arg1;
- (int)StringAsComputeStatus:(id)arg1;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (int)authStatus;
- (id)authStatusAsString:(int)arg1;
- (int)computeStatus;
- (id)computeStatusAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (id)directionAsString:(int)arg1;
- (bool)hasAuthStatus;
- (bool)hasComputeStatus;
- (bool)hasDirection;
- (bool)hasReason;
- (bool)hasResultErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (int)resultErrorCode;
- (void)setAuthStatus:(int)arg1;
- (void)setComputeStatus:(int)arg1;
- (void)setDirection:(int)arg1;
- (void)setHasAuthStatus:(bool)arg1;
- (void)setHasComputeStatus:(bool)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
