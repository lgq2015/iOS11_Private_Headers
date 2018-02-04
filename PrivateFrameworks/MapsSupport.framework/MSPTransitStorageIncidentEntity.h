/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    struct { 
        unsigned int muid : 1; 
    }  _has;
    unsigned long long  _muid;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nextStopsMuids;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNextStopIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic, readonly) unsigned long long*nextStopsMuids;
@property (nonatomic, readonly) unsigned long long nextStopsMuidsCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addNextStopsMuids:(unsigned long long)arg1;
- (void)clearNextStopsMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMuid;
- (bool)hasNextStopIDs;
- (unsigned long long)hash;
- (id)initWithIncidentEntity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nextStopIDs;
- (unsigned long long*)nextStopsMuids;
- (unsigned long long)nextStopsMuidsAtIndex:(unsigned long long)arg1;
- (unsigned long long)nextStopsMuidsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNextStopsMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
