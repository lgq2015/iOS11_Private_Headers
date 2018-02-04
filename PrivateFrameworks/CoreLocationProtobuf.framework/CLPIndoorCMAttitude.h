/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int magneticAccuracy : 1; 
        unsigned int magneticCalibration : 1; 
    }  _has;
    float  _magneticAccuracy;
    int  _magneticCalibration;
    CLPQuaternion * _quaternion;
    double  _timestamp;
}

@property (nonatomic) bool hasMagneticAccuracy;
@property (nonatomic) bool hasMagneticCalibration;
@property (nonatomic, readonly) bool hasQuaternion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) float magneticAccuracy;
@property (nonatomic) int magneticCalibration;
@property (nonatomic, retain) CLPQuaternion *quaternion;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsMagneticCalibration:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMagneticAccuracy;
- (bool)hasMagneticCalibration;
- (bool)hasQuaternion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)magneticAccuracy;
- (int)magneticCalibration;
- (id)magneticCalibrationAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quaternion;
- (bool)readFrom:(id)arg1;
- (void)setHasMagneticAccuracy:(bool)arg1;
- (void)setHasMagneticCalibration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMagneticAccuracy:(float)arg1;
- (void)setMagneticCalibration:(int)arg1;
- (void)setQuaternion:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
