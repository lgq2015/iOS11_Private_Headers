/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareMetadata : PBCodable <NSCopying> {
    CKDPParticipant * _callerParticipant;
    struct { 
        unsigned int participantPermission : 1; 
        unsigned int participantState : 1; 
        unsigned int participantType : 1; 
    }  _has;
    CKDPParticipant * _ownerParticipant;
    int  _participantPermission;
    int  _participantState;
    int  _participantType;
    NSData * _protectedFullToken;
    CKDPRecordType * _rootRecordType;
    NSString * _routingKey;
}

@property (nonatomic, retain) CKDPParticipant *callerParticipant;
@property (nonatomic, readonly) bool hasCallerParticipant;
@property (nonatomic, readonly) bool hasOwnerParticipant;
@property (nonatomic) bool hasParticipantPermission;
@property (nonatomic) bool hasParticipantState;
@property (nonatomic) bool hasParticipantType;
@property (nonatomic, readonly) bool hasProtectedFullToken;
@property (nonatomic, readonly) bool hasRootRecordType;
@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, retain) CKDPParticipant *ownerParticipant;
@property (nonatomic) int participantPermission;
@property (nonatomic) int participantState;
@property (nonatomic) int participantType;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) CKDPRecordType *rootRecordType;
@property (nonatomic, retain) NSString *routingKey;

- (void).cxx_destruct;
- (int)StringAsParticipantPermission:(id)arg1;
- (int)StringAsParticipantState:(id)arg1;
- (int)StringAsParticipantType:(id)arg1;
- (id)_participantPermissionCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantTypeCKLogValue;
- (id)callerParticipant;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallerParticipant;
- (bool)hasOwnerParticipant;
- (bool)hasParticipantPermission;
- (bool)hasParticipantState;
- (bool)hasParticipantType;
- (bool)hasProtectedFullToken;
- (bool)hasRootRecordType;
- (bool)hasRoutingKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerParticipant;
- (int)participantPermission;
- (id)participantPermissionAsString:(int)arg1;
- (int)participantState;
- (id)participantStateAsString:(int)arg1;
- (int)participantType;
- (id)participantTypeAsString:(int)arg1;
- (id)protectedFullToken;
- (bool)readFrom:(id)arg1;
- (id)rootRecordType;
- (id)routingKey;
- (void)setCallerParticipant:(id)arg1;
- (void)setHasParticipantPermission:(bool)arg1;
- (void)setHasParticipantState:(bool)arg1;
- (void)setHasParticipantType:(bool)arg1;
- (void)setOwnerParticipant:(id)arg1;
- (void)setParticipantPermission:(int)arg1;
- (void)setParticipantState:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setRootRecordType:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
