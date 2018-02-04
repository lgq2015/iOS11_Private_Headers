/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTVisit : NSObject <NSCopying, NSSecureCoding> {
    long long  _dataPointCount;
    NSDate * _date;
    NSDate * _entry;
    NSDate * _exit;
    RTLocation * _location;
    NSUUID * _locationOfInterestIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) long long dataPointCount;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *entry;
@property (nonatomic, readonly, copy) NSDate *exit;
@property (nonatomic, readonly, copy) RTLocation *location;
@property (nonatomic, readonly, copy) NSUUID *locationOfInterestIdentifier;
@property (nonatomic, readonly) long long type;

+ (id)stringFromVisitIncidentType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)visitIncidentFromDefaultsDictionary:(id)arg1;
+ (long long)visitIncidentTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataPointCount;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entry;
- (id)exit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 locationOfInterestIdentifier:(id)arg6;
- (id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 locationOfInterestIdentifier:(id)arg6 dataPointCount:(long long)arg7;
- (id)initWithType:(long long)arg1 location:(id)arg2 entry:(id)arg3 exit:(id)arg4 locationOfInterestIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVisit:(id)arg1;
- (id)location;
- (id)locationOfInterestIdentifier;
- (long long)type;

@end
