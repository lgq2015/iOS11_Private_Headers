/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nextStopMuids;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned long long*nextStopMuids;
@property (nonatomic, readonly) unsigned long long nextStopMuidsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addNextStopMuid:(unsigned long long)arg1;
- (void)clearNextStopMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)nextStopMuids;
- (unsigned long long)nextStopMuidsCount;
- (bool)readFrom:(id)arg1;
- (void)setNextStopMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
