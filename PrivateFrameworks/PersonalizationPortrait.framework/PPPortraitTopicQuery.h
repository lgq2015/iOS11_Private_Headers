/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPPortraitTopicQuery : NSObject <NSCopying> {
    double  _decayRate;
    unsigned long long  _deviceFilter;
    NSSet * _excludingSourceBundleIds;
    NSDate * _fromDate;
    unsigned long long  _limit;
    NSSet * _matchingSourceBundleIds;
    NSString * _matchingTopicId;
    bool  _overrideDecayRate;
    NSDate * _scoringDate;
    NSDate * _toDate;
}

@property (nonatomic) double decayRate;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic, retain) NSSet *excludingSourceBundleIds;
@property (nonatomic, retain) NSDate *fromDate;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, retain) NSSet *matchingSourceBundleIds;
@property (nonatomic, copy) NSString *matchingTopicId;
@property (nonatomic) bool overrideDecayRate;
@property (nonatomic, retain) NSDate *scoringDate;
@property (nonatomic, retain) NSDate *toDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decayRate;
- (unsigned long long)deviceFilter;
- (id)excludingSourceBundleIds;
- (id)fromDate;
- (id)init;
- (unsigned long long)limit;
- (id)matchingSourceBundleIds;
- (id)matchingTopicId;
- (bool)overrideDecayRate;
- (id)scoringDate;
- (void)setDecayRate:(double)arg1;
- (void)setDeviceFilter:(unsigned long long)arg1;
- (void)setExcludingSourceBundleIds:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMatchingSourceBundleIds:(id)arg1;
- (void)setMatchingTopicId:(id)arg1;
- (void)setOverrideDecayRate:(bool)arg1;
- (void)setScoringDate:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
