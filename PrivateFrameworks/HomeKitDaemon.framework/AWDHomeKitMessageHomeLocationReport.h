/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numIterationToConverge : 1; 
    }  _has;
    AWDHomeKitMessageLocation * _nearestLOI;
    unsigned int  _numIterationToConverge;
    NSMutableArray * _rawLocations;
    AWDHomeKitMessageLocation * _selectedHomeLocation;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasNearestLOI;
@property (nonatomic) bool hasNumIterationToConverge;
@property (nonatomic, readonly) bool hasSelectedHomeLocation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDHomeKitMessageLocation *nearestLOI;
@property (nonatomic) unsigned int numIterationToConverge;
@property (nonatomic, retain) NSMutableArray *rawLocations;
@property (nonatomic, retain) AWDHomeKitMessageLocation *selectedHomeLocation;
@property (nonatomic) unsigned long long timestamp;

+ (Class)rawLocationsType;

- (void).cxx_destruct;
- (void)addRawLocations:(id)arg1;
- (void)clearRawLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNearestLOI;
- (bool)hasNumIterationToConverge;
- (bool)hasSelectedHomeLocation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nearestLOI;
- (unsigned int)numIterationToConverge;
- (id)rawLocations;
- (id)rawLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rawLocationsCount;
- (bool)readFrom:(id)arg1;
- (id)selectedHomeLocation;
- (void)setHasNumIterationToConverge:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNearestLOI:(id)arg1;
- (void)setNumIterationToConverge:(unsigned int)arg1;
- (void)setRawLocations:(id)arg1;
- (void)setSelectedHomeLocation:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
