/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAPingResults : NSObject <NSSecureCoding> {
    NSMutableDictionary * _devices;
    NSMutableDictionary * _errorsMap;
    double  _pingAvg;
    NSMutableDictionary * _resultsMap;
}

@property (retain) NSMutableDictionary *devices;
@property (retain) NSMutableDictionary *errorsMap;
@property double pingAvg;
@property (retain) NSMutableDictionary *resultsMap;

+ (id)sharedFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDevice:(id)arg1;
- (void)addKeysForDevice:(id)arg1;
- (double)averagePingTime;
- (void)clear;
- (id)copy;
- (id)dateDeviceLastSeen:(id)arg1;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)errorsMap;
- (void)incrementResultForStatus:(long long)arg1 andDevice:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)pingAvg;
- (id)resultCountsForDevice:(id)arg1;
- (id)resultsMap;
- (id)seenDevices;
- (void)setDevices:(id)arg1;
- (void)setErrorsMap:(id)arg1;
- (void)setPingAvg:(double)arg1;
- (void)setResultsMap:(id)arg1;
- (long long)statusForDevice:(id)arg1;
- (id)statusStringForResultStatus:(long long)arg1;
- (id)toDictionary;
- (void)updateDevice:(id)arg1 withError:(id)arg2;
- (void)updateDevice:(id)arg1 withStatus:(long long)arg2;
- (void)updatePingAverageWithInterval:(double)arg1;

@end
