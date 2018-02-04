/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecord : PBCodable <NSCopying> {
    NSMutableArray * _conflictLoserEtags;
    FCCKPIdentifier * _createdBy;
    NSString * _etag;
    NSMutableArray * _fields;
    FCCKPIdentifier * _modifiedBy;
    NSString * _modifiedByDevice;
    FCCKPRecordIdentifier * _recordIdentifier;
    FCCKPDateStatistics * _timeStatistics;
    FCCKPRecordType * _type;
}

@property (nonatomic, retain) NSMutableArray *conflictLoserEtags;
@property (nonatomic, retain) FCCKPIdentifier *createdBy;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic, readonly) bool hasCreatedBy;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasModifiedBy;
@property (nonatomic, readonly) bool hasModifiedByDevice;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasTimeStatistics;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) FCCKPIdentifier *modifiedBy;
@property (nonatomic, retain) NSString *modifiedByDevice;
@property (nonatomic, retain) FCCKPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) FCCKPDateStatistics *timeStatistics;
@property (nonatomic, retain) FCCKPRecordType *type;

- (void)addConflictLoserEtags:(id)arg1;
- (void)addFields:(id)arg1;
- (void)clearConflictLoserEtags;
- (void)clearFields;
- (id)conflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdBy;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (bool)hasCreatedBy;
- (bool)hasEtag;
- (bool)hasModifiedBy;
- (bool)hasModifiedByDevice;
- (bool)hasRecordIdentifier;
- (bool)hasTimeStatistics;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedBy;
- (id)modifiedByDevice;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setCreatedBy:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setModifiedBy:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (void)setType:(id)arg1;
- (id)timeStatistics;
- (id)type;
- (void)writeTo:(id)arg1;

@end
