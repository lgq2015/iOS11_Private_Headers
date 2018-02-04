/* made by EzioChiu.
 */

@protocol _MPCModelRadioPlaybackQueueSection <NSObject>

@required

- (MPAVItem *)AVItemAtIndex:(long long)arg1;
- (<MPAVItemQueueIdentifier> *)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (long long)removeExplicitItems;
- (ICRadioStationTrack *)trackForItemAtIndex:(long long)arg1;

@end
