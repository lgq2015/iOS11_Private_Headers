/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTEvent : NSObject <NSSecureCoding, RTTaggableLocation> {
    NSDate * _endDate;
    NSUUID * _identifier;
    NSUUID * _locationIdentifier;
    NSUUID * _microLocationIdentifier;
    long long  _source;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSUUID *locationIdentifier;
@property (nonatomic, retain) NSUUID *microLocationIdentifier;
@property (nonatomic) long long source;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4;
- (id)locationIdentifier;
- (id)microLocationIdentifier;
- (void)setEndDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocationIdentifier:(id)arg1;
- (void)setMicroLocationIdentifier:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (long long)source;
- (id)startDate;
- (void)tagWithLocationOfInterest:(id)arg1;
- (void)tagWithMicroLocation:(id)arg1;
- (bool)taggedWithLocationOfInterest;
- (bool)taggedWithMicroLocation;

@end
