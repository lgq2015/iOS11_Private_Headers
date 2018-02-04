/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitMessageLocation : PBCodable <NSCopying> {
    double  _accuracy;
    struct { 
        unsigned int accuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int timestamp : 1; 
        unsigned int numOfReachableBTLEAcc : 1; 
        unsigned int numOfReachableIPAcc : 1; 
    }  _has;
    double  _latitude;
    double  _longitude;
    unsigned int  _numOfReachableBTLEAcc;
    unsigned int  _numOfReachableIPAcc;
    unsigned long long  _timestamp;
}

@property (nonatomic) double accuracy;
@property (nonatomic) bool hasAccuracy;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasNumOfReachableBTLEAcc;
@property (nonatomic) bool hasNumOfReachableIPAcc;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int numOfReachableBTLEAcc;
@property (nonatomic) unsigned int numOfReachableIPAcc;
@property (nonatomic) unsigned long long timestamp;

- (double)accuracy;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccuracy;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasNumOfReachableBTLEAcc;
- (bool)hasNumOfReachableIPAcc;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numOfReachableBTLEAcc;
- (unsigned int)numOfReachableIPAcc;
- (bool)readFrom:(id)arg1;
- (void)setAccuracy:(double)arg1;
- (void)setHasAccuracy:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasNumOfReachableBTLEAcc:(bool)arg1;
- (void)setHasNumOfReachableIPAcc:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setNumOfReachableBTLEAcc:(unsigned int)arg1;
- (void)setNumOfReachableIPAcc:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
