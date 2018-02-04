/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
 */

@interface FIAPHistoricalDataRequest : NSObject {
    NSDate * _endDate;
    NSString * _personHandle;
    NSString * _pluginIdentifier;
    unsigned long long  _requestId;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSString *personHandle;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) unsigned long long requestId;
@property (nonatomic, retain) NSDate *startDate;

+ (id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistoricalDataRequest:(id)arg1;
- (id)personHandle;
- (id)pluginIdentifier;
- (unsigned long long)requestId;
- (void)setEndDate:(id)arg1;
- (void)setPersonHandle:(id)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (void)setRequestId:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (bool)subsetOfHistoricalDataRequest:(id)arg1;

@end
