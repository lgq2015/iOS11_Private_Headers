/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieCameraMotionResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    bool  _isFast;
    int  _motionType;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) bool isFast;
@property (nonatomic) int motionType;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFast;
- (void)mergeFrom:(id)arg1;
- (int)motionType;
- (bool)readFrom:(id)arg1;
- (void)setIsFast:(bool)arg1;
- (void)setMotionType:(int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
