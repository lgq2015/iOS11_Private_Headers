/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieFeatureResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSData * _featureBlob;
    VCPProtoTime * _timestamp;
}

@property (nonatomic, retain) NSData *featureBlob;
@property (nonatomic, retain) VCPProtoTime *timestamp;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (id)featureBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureBlob:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
