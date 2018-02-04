/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADSegmentUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int maxSegmentUpdateIntervalInSeconds : 1; 
        unsigned int segmentRefreshIntervalInSeconds : 1; 
    }  _has;
    NSString * _idDebug;
    double  _maxSegmentUpdateIntervalInSeconds;
    double  _segmentRefreshIntervalInSeconds;
}

@property (nonatomic, readonly) bool hasIdDebug;
@property (nonatomic) bool hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) bool hasSegmentRefreshIntervalInSeconds;
@property (nonatomic, retain) NSString *idDebug;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdDebug;
- (bool)hasMaxSegmentUpdateIntervalInSeconds;
- (bool)hasSegmentRefreshIntervalInSeconds;
- (unsigned long long)hash;
- (id)idDebug;
- (bool)isEqual:(id)arg1;
- (double)maxSegmentUpdateIntervalInSeconds;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)segmentRefreshIntervalInSeconds;
- (void)setHasMaxSegmentUpdateIntervalInSeconds:(bool)arg1;
- (void)setHasSegmentRefreshIntervalInSeconds:(bool)arg1;
- (void)setIdDebug:(id)arg1;
- (void)setMaxSegmentUpdateIntervalInSeconds:(double)arg1;
- (void)setSegmentRefreshIntervalInSeconds:(double)arg1;
- (void)writeTo:(id)arg1;

@end
