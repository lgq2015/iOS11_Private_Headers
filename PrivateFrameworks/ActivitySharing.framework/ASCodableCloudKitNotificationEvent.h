/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableCloudKitNotificationEvent : PBCodable <NSCopying> {
    double  _date;
    struct { 
        unsigned int date : 1; 
        unsigned int triggerSnapshotIndex : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _triggerSnapshotIndex;
    NSData * _triggerUUID;
    long long  _type;
}

@property (nonatomic) double date;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasTriggerSnapshotIndex;
@property (nonatomic, readonly) bool hasTriggerUUID;
@property (nonatomic) bool hasType;
@property (nonatomic) long long triggerSnapshotIndex;
@property (nonatomic, retain) NSData *triggerUUID;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasTriggerSnapshotIndex;
- (bool)hasTriggerUUID;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasTriggerSnapshotIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTriggerSnapshotIndex:(long long)arg1;
- (void)setTriggerUUID:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)triggerSnapshotIndex;
- (id)triggerUUID;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
