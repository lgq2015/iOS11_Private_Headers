/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying> {
    NSMutableArray * _idsToArchives;
}

@property (nonatomic, retain) NSMutableArray *idsToArchives;

+ (Class)idsToArchiveType;
+ (id)options;

- (void).cxx_destruct;
- (void)addIdsToArchive:(id)arg1;
- (void)clearIdsToArchives;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;
- (id)idsToArchives;
- (unsigned long long)idsToArchivesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdsToArchives:(id)arg1;
- (void)writeTo:(id)arg1;

@end
