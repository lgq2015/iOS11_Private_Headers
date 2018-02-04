/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString * _etag;
    struct { 
        unsigned int type : 1; 
    }  _has;
    CKDPRecordIdentifier * _identifier;
    CKDPRecord * _record;
    int  _type;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) CKDPRecordIdentifier *identifier;
@property (nonatomic, retain) CKDPRecord *record;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasIdentifier;
- (bool)hasRecord;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (void)setEtag:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
