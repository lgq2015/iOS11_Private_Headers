/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowMapPointRequest : AFSiriRequest {
    NSString * _extSessionGuid;
    NSDate * _extSessionGuidCreatedTimestamp;
    bool  _isCurrentLocation;
    NSData * _placeData;
}

@property (nonatomic) bool isCurrentLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPlaceData:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentLocation;
- (id)mapPointData;
- (void)setIsCurrentLocation:(bool)arg1;

@end
