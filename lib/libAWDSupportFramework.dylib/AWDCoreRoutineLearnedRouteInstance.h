/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLearnedRouteInstance : PBCodable <NSCopying> {
    int  _failureReason;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int failureReason : 1; 
        unsigned int latitudeTruncated : 1; 
        unsigned int length : 1; 
        unsigned int longitudeTruncated : 1; 
        unsigned int numberOfFilteredLocations : 1; 
        unsigned int numberOfInputLocations : 1; 
        unsigned int recoveryTime : 1; 
    }  _has;
    int  _latitudeTruncated;
    int  _length;
    NSMutableArray * _locationTypeHistograms;
    int  _longitudeTruncated;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _majorGapLengths;
    int  _numberOfFilteredLocations;
    int  _numberOfInputLocations;
    int  _recoveryTime;
    NSMutableArray * _roadClassHistograms;
    unsigned long long  _timestamp;
}

@property (nonatomic) int failureReason;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasLatitudeTruncated;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLongitudeTruncated;
@property (nonatomic) bool hasNumberOfFilteredLocations;
@property (nonatomic) bool hasNumberOfInputLocations;
@property (nonatomic) bool hasRecoveryTime;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int latitudeTruncated;
@property (nonatomic) int length;
@property (nonatomic, retain) NSMutableArray *locationTypeHistograms;
@property (nonatomic) int longitudeTruncated;
@property (nonatomic, readonly) int*majorGapLengths;
@property (nonatomic, readonly) unsigned long long majorGapLengthsCount;
@property (nonatomic) int numberOfFilteredLocations;
@property (nonatomic) int numberOfInputLocations;
@property (nonatomic) int recoveryTime;
@property (nonatomic, retain) NSMutableArray *roadClassHistograms;
@property (nonatomic) unsigned long long timestamp;

+ (Class)locationTypeHistogramType;
+ (Class)roadClassHistogramType;

- (void)addLocationTypeHistogram:(id)arg1;
- (void)addMajorGapLength:(int)arg1;
- (void)addRoadClassHistogram:(id)arg1;
- (void)clearLocationTypeHistograms;
- (void)clearMajorGapLengths;
- (void)clearRoadClassHistograms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failureReason;
- (bool)hasFailureReason;
- (bool)hasLatitudeTruncated;
- (bool)hasLength;
- (bool)hasLongitudeTruncated;
- (bool)hasNumberOfFilteredLocations;
- (bool)hasNumberOfInputLocations;
- (bool)hasRecoveryTime;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)latitudeTruncated;
- (int)length;
- (id)locationTypeHistogramAtIndex:(unsigned long long)arg1;
- (id)locationTypeHistograms;
- (unsigned long long)locationTypeHistogramsCount;
- (int)longitudeTruncated;
- (int)majorGapLengthAtIndex:(unsigned long long)arg1;
- (int*)majorGapLengths;
- (unsigned long long)majorGapLengthsCount;
- (void)mergeFrom:(id)arg1;
- (int)numberOfFilteredLocations;
- (int)numberOfInputLocations;
- (bool)readFrom:(id)arg1;
- (int)recoveryTime;
- (id)roadClassHistogramAtIndex:(unsigned long long)arg1;
- (id)roadClassHistograms;
- (unsigned long long)roadClassHistogramsCount;
- (void)setFailureReason:(int)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasLatitudeTruncated:(bool)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasLongitudeTruncated:(bool)arg1;
- (void)setHasNumberOfFilteredLocations:(bool)arg1;
- (void)setHasNumberOfInputLocations:(bool)arg1;
- (void)setHasRecoveryTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLatitudeTruncated:(int)arg1;
- (void)setLength:(int)arg1;
- (void)setLocationTypeHistograms:(id)arg1;
- (void)setLongitudeTruncated:(int)arg1;
- (void)setMajorGapLengths:(int*)arg1 count:(unsigned long long)arg2;
- (void)setNumberOfFilteredLocations:(int)arg1;
- (void)setNumberOfInputLocations:(int)arg1;
- (void)setRecoveryTime:(int)arg1;
- (void)setRoadClassHistograms:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end