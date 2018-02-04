/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncChange : PBCodable <HDNanoSyncDescription, HDSyncChange, NSCopying> {
    bool  _complete;
    long long  _endAnchor;
    struct { 
        unsigned int endAnchor : 1; 
        unsigned int sequence : 1; 
        unsigned int startAnchor : 1; 
        unsigned int objectType : 1; 
        unsigned int complete : 1; 
        unsigned int speculative : 1; 
    }  _has;
    NSMutableArray * _objectDatas;
    int  _objectType;
    NSMutableArray * _requiredAnchors;
    long long  _sequence;
    bool  _speculative;
    long long  _startAnchor;
}

@property (nonatomic) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool done;
@property (nonatomic) long long endAnchor;
@property (nonatomic) bool hasComplete;
@property (nonatomic) bool hasEndAnchor;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) bool hasSequence;
@property (nonatomic) bool hasSpeculative;
@property (nonatomic) bool hasStartAnchor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *objectDatas;
@property (nonatomic) int objectType;
@property (nonatomic, retain) NSMutableArray *requiredAnchors;
@property (nonatomic) long long sequence;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (getter=isSpeculative, nonatomic, readonly) bool speculative;
@property (nonatomic) bool speculative;
@property (nonatomic) long long startAnchor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct HDSyncAnchorRange { long long x1; long long x2; } syncAnchorRange;

+ (id)changeWithNanoSyncEntityClass:(Class)arg1;
+ (Class)objectDataType;
+ (Class)requiredAnchorsType;

- (void).cxx_destruct;
- (int)StringAsObjectType:(id)arg1;
- (Class)_syncEntityClass;
- (void)addObjectData:(id)arg1;
- (void)addRequiredAnchors:(id)arg1;
- (void)clearObjectDatas;
- (void)clearRequiredAnchors;
- (bool)complete;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)done;
- (long long)endAnchor;
- (bool)hasComplete;
- (bool)hasEndAnchor;
- (bool)hasObjectType;
- (bool)hasSequence;
- (bool)hasSpeculative;
- (bool)hasStartAnchor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSpeculative;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (Class)nanoSyncEntityClass;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (id)objectDatas;
- (unsigned long long)objectDatasCount;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)requiredAnchorMapWithError:(id*)arg1;
- (id)requiredAnchors;
- (id)requiredAnchorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requiredAnchorsCount;
- (long long)sequence;
- (id)sequenceNumber;
- (void)setComplete:(bool)arg1;
- (void)setEndAnchor:(long long)arg1;
- (void)setHasComplete:(bool)arg1;
- (void)setHasEndAnchor:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setHasSequence:(bool)arg1;
- (void)setHasSpeculative:(bool)arg1;
- (void)setHasStartAnchor:(bool)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 requiredAnchorMap:(id)arg3;
- (void)setRequiredAnchors:(id)arg1;
- (void)setSequence:(long long)arg1;
- (void)setSequenceNumber:(long long)arg1 done:(bool)arg2;
- (void)setSpeculative:(bool)arg1;
- (void)setStartAnchor:(long long)arg1;
- (bool)speculative;
- (id)speculativeCopy;
- (long long)startAnchor;
- (struct HDSyncAnchorRange { long long x1; long long x2; })syncAnchorRange;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end
