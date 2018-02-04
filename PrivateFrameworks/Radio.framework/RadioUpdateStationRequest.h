/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioUpdateStationRequest : RadioSyncRequest {
    NSString * _name;
    NSArray * _seeds;
    long long  _songMixType;
    RadioStation * _station;
    NSString * _stationDescription;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *seeds;
@property (nonatomic) long long songMixType;
@property (nonatomic, copy) NSString *stationDescription;

- (void).cxx_destruct;
- (id)_updatedStationDictionary;
- (id)changeList;
- (id)init;
- (id)initWithStation:(id)arg1;
- (id)name;
- (id)seeds;
- (void)setName:(id)arg1;
- (void)setSeeds:(id)arg1;
- (void)setSongMixType:(long long)arg1;
- (void)setStationDescription:(id)arg1;
- (long long)songMixType;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (id)stationDescription;

@end
