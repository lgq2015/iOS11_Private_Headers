/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYChange : PBCodable <NSCopying, SYChange> {
    NSData * _changeData;
    NSString * _objectId;
    NSString * _sequencer;
    int  _type;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSData *changeData;
@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChangeData;
@property (nonatomic, readonly) bool hasSequencer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *objectId;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, retain) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long version;

+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2;
+ (id)changeWithChangeObject:(id)arg1 serializer:(id)arg2 encodeUsingVersion:(long long)arg3;
+ (id)changeWithObject:(id)arg1 updateType:(int)arg2 store:(id)arg3;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)changeData;
- (id)changeObjectWithSerializer:(id)arg1;
- (id)changeObjectWithSerializer:(id)arg1 encodedByVersion:(long long)arg2;
- (long long)changeType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeData;
- (bool)hasSequencer;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectForStore:(id)arg1;
- (id)objectId;
- (id)objectIdentifier;
- (bool)readFrom:(id)arg1;
- (id)sequencer;
- (void)setChangeData:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setSequencer:(id)arg1;
- (void)setType:(int)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
