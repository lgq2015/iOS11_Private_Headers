/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncRestore : PBCodable <NSCopying> {
    struct { 
        unsigned int objectType : 1; 
    }  _has;
    NSMutableArray * _objectDatas;
    int  _objectType;
}

@property (nonatomic) bool hasObjectType;
@property (nonatomic, retain) NSMutableArray *objectDatas;
@property (nonatomic) int objectType;

+ (Class)objectDataType;

- (void).cxx_destruct;
- (int)StringAsObjectType:(id)arg1;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (id)objectDatas;
- (unsigned long long)objectDatasCount;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)writeTo:(id)arg1;

@end