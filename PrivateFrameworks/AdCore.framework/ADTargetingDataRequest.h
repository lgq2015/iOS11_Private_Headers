/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADTargetingDataRequest : PBRequest <NSCopying> {
    double  _clientClockTime;
    NSString * _dPIDString;
    struct { 
        unsigned int clientClockTime : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int limitAdTracking : 1; 
    }  _has;
    float  _horizontalAccuracy;
    NSString * _iAdIDString;
    float  _latitude;
    bool  _limitAdTracking;
    float  _longitude;
    NSString * _toroIDString;
    NSString * _userTargeting;
}

@property (nonatomic) double clientClockTime;
@property (nonatomic, retain) NSString *dPIDString;
@property (nonatomic) bool hasClientClockTime;
@property (nonatomic, readonly) bool hasDPIDString;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic, readonly) bool hasIAdIDString;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLimitAdTracking;
@property (nonatomic) bool hasLongitude;
@property (nonatomic, readonly) bool hasToroIDString;
@property (nonatomic, readonly) bool hasUserTargeting;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic, retain) NSString *iAdIDString;
@property (nonatomic) float latitude;
@property (nonatomic) bool limitAdTracking;
@property (nonatomic) float longitude;
@property (nonatomic, retain) NSString *toroIDString;
@property (nonatomic, retain) NSString *userTargeting;

+ (id)options;

- (void).cxx_destruct;
- (double)clientClockTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPIDString;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientClockTime;
- (bool)hasDPIDString;
- (bool)hasHorizontalAccuracy;
- (bool)hasIAdIDString;
- (bool)hasLatitude;
- (bool)hasLimitAdTracking;
- (bool)hasLongitude;
- (bool)hasToroIDString;
- (bool)hasUserTargeting;
- (unsigned long long)hash;
- (float)horizontalAccuracy;
- (id)iAdIDString;
- (bool)isEqual:(id)arg1;
- (float)latitude;
- (bool)limitAdTracking;
- (float)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientClockTime:(double)arg1;
- (void)setDPIDString:(id)arg1;
- (void)setHasClientClockTime:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLimitAdTracking:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHorizontalAccuracy:(float)arg1;
- (void)setIAdIDString:(id)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLimitAdTracking:(bool)arg1;
- (void)setLongitude:(float)arg1;
- (void)setToroIDString:(id)arg1;
- (void)setUserTargeting:(id)arg1;
- (id)toroIDString;
- (id)userTargeting;
- (void)writeTo:(id)arg1;

@end
