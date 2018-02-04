/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _zoneSummarys;
}

@property (nonatomic, retain) NSMutableArray *zoneSummarys;

+ (Class)zoneSummaryType;

- (void).cxx_destruct;
- (void)addZoneSummary:(id)arg1;
- (void)clearZoneSummarys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setZoneSummarys:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;
- (id)zoneSummarys;
- (unsigned long long)zoneSummarysCount;

@end
