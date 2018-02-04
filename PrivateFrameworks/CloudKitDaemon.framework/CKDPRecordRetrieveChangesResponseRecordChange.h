/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {
    NSString * _etag;
    struct { 
        unsigned int type : 1; 
    }  _has;
    CKDPRecord * _record;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRecordType * _recordType;
    int  _type;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasRecord;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasRecordType;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) CKDPRecord *record;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRecordType *recordType;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasRecord;
- (bool)hasRecordIdentifier;
- (bool)hasRecordType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)record;
- (id)recordIdentifier;
- (id)recordType;
- (void)setEtag:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
