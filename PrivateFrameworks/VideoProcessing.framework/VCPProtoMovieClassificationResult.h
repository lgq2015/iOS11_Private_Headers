/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieClassificationResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSMutableArray * _classifications;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic, retain) NSMutableArray *classifications;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (Class)classificationType;
+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)addClassification:(id)arg1;
- (id)classificationAtIndex:(unsigned long long)arg1;
- (id)classifications;
- (unsigned long long)classificationsCount;
- (void)clearClassifications;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClassifications:(id)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
