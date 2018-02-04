/* made by EzioChiu.
 */

@protocol NTKWellnessTimelineModelSubscriber <NSObject>

@optional

- (void)wellnessTimeLineModelCurrentEntryModelUpdated:(NTKWellnessEntryModel *)arg1;
- (void)wellnessTimeLineModelHistoricalDataWasUpdated;
- (void)wellnessTimelineModelHistorcalDataLoaded:(bool)arg1;

@end
