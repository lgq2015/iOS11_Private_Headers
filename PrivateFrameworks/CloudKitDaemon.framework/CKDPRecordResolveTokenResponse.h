/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {
    NSString * _container;
    int  _containerEnvironment;
    struct { 
        unsigned int containerEnvironment : 1; 
    }  _has;
    NSMutableArray * _records;
    CKDPShareMetadata * _shareMetadata;
    CKDPRecord * _shareRecord;
}

@property (nonatomic, retain) NSString *container;
@property (nonatomic) int containerEnvironment;
@property (nonatomic, readonly) bool hasContainer;
@property (nonatomic) bool hasContainerEnvironment;
@property (nonatomic, readonly) bool hasShareMetadata;
@property (nonatomic, readonly) bool hasShareRecord;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic, retain) CKDPShareMetadata *shareMetadata;
@property (nonatomic, retain) CKDPRecord *shareRecord;

+ (Class)recordType;

- (void).cxx_destruct;
- (int)StringAsContainerEnvironment:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)clearRecords;
- (id)container;
- (int)containerEnvironment;
- (id)containerEnvironmentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainer;
- (bool)hasContainerEnvironment;
- (bool)hasShareMetadata;
- (bool)hasShareRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (id)records;
- (unsigned long long)recordsCount;
- (void)setContainer:(id)arg1;
- (void)setContainerEnvironment:(int)arg1;
- (void)setHasContainerEnvironment:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)setShareMetadata:(id)arg1;
- (void)setShareRecord:(id)arg1;
- (id)shareMetadata;
- (id)shareRecord;
- (void)writeTo:(id)arg1;

@end
