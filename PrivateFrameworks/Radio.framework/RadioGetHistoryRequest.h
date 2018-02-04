/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetHistoryRequest : RadioRequest {
    NSNumber * _accountUniqueIdentifier;
    bool  _aggregateSessions;
    bool  _fetchForAccount;
    bool  _includesAds;
    unsigned long long  _maxNumberOfTracks;
    NSArray * _playActivityEvents;
    RadioPlayEventCollection * _playEventCollection;
    SSURLConnectionRequest * _request;
    bool  _shouldProcessCategories;
    NSString * _stationHash;
    long long  _stationID;
}

@property (nonatomic, readonly, copy) NSNumber *accountUniqueIdentifier;
@property (nonatomic) bool aggregateSessions;
@property (nonatomic) bool fetchForAccount;
@property (nonatomic) bool includesAds;
@property (nonatomic) unsigned long long maxNumberOfTracks;
@property (nonatomic, copy) NSArray *playActivityEvents;
@property (nonatomic, copy) RadioPlayEventCollection *playEventCollection;
@property (nonatomic) bool shouldProcessCategories;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;

- (void).cxx_destruct;
- (id)_newHistoryCategoryWithDictionary:(id)arg1;
- (id)_newHistoryItemWithDictionary:(id)arg1;
- (id)accountUniqueIdentifier;
- (bool)aggregateSessions;
- (void)cancel;
- (bool)fetchForAccount;
- (bool)includesAds;
- (id)init;
- (unsigned long long)maxNumberOfTracks;
- (id)playActivityEvents;
- (id)playEventCollection;
- (void)setAggregateSessions:(bool)arg1;
- (void)setFetchForAccount:(bool)arg1;
- (void)setIncludesAds:(bool)arg1;
- (void)setMaxNumberOfTracks:(unsigned long long)arg1;
- (void)setPlayActivityEvents:(id)arg1;
- (void)setPlayEventCollection:(id)arg1;
- (void)setShouldProcessCategories:(bool)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (bool)shouldProcessCategories;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithHistoryCompletionHandler:(id /* block */)arg1;
- (id)stationHash;
- (long long)stationID;

@end
