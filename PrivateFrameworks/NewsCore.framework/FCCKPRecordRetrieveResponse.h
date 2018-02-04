/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordRetrieveResponse : PBCodable <NSCopying> {
    bool  _clientVersionETagMatch;
    struct { 
        unsigned int clientVersionETagMatch : 1; 
    }  _has;
    FCCKPRecord * _record;
}

@property (nonatomic) bool clientVersionETagMatch;
@property (nonatomic) bool hasClientVersionETagMatch;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, retain) FCCKPRecord *record;

- (bool)clientVersionETagMatch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientVersionETagMatch;
- (bool)hasRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setClientVersionETagMatch:(bool)arg1;
- (void)setHasClientVersionETagMatch:(bool)arg1;
- (void)setRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
