/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection {
    HKDataMetadataWorkoutRouteCell * _cell;
    HKRouteMapGenerator * _generator;
    HKLocationFetcher * _locationFetcher;
    HKLocationReadings * _locationReadings;
}

@property (nonatomic, retain) HKDataMetadataWorkoutRouteCell *cell;
@property (nonatomic, retain) HKRouteMapGenerator *generator;
@property (nonatomic, retain) HKLocationFetcher *locationFetcher;
@property (nonatomic, readonly) HKLocationReadings *locationReadings;

- (void).cxx_destruct;
- (void)_generateRouteImage;
- (id)cell;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)generator;
- (id)initWithLocationReadings:(id)arg1;
- (id)locationFetcher;
- (id)locationReadings;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(bool)arg3;
- (void)setCell:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setLocationFetcher:(id)arg1;

@end
