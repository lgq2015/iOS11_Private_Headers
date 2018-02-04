/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceCoreLocationPredictedApplication : RTSource <NSCopying, NSSecureCoding> {
    NSNumber * _adamId;
    NSString * _developer;
    double  _distance;
    NSDate * _endDate;
    NSData * _icon;
    NSUUID * _identifier;
    long long  _installationState;
    CLLocation * _location;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSNumber *adamId;
@property (nonatomic, retain) NSString *developer;
@property (nonatomic) double distance;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSData *icon;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) long long installationState;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)developer;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 developer:(id)arg2 adamId:(id)arg3 icon:(id)arg4 installationState:(long long)arg5 location:(id)arg6 distance:(double)arg7 startDate:(id)arg8 endDate:(id)arg9;
- (long long)installationState;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)setAdamId:(id)arg1;
- (void)setDeveloper:(id)arg1;
- (void)setDistance:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstallationState:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (bool)validAtLocation:(id)arg1;
- (bool)validOnDate:(id)arg1;

@end
