/* made by EzioChiu.
 */

@protocol KonaClipMiroAutoEditAdditions <NSObject>

@required

- (double)autoEditLongestDurationWithBlueprint:(MiroBlueprint *)arg1;
- (double)autoEditShortestDurationWithBlueprint:(MiroBlueprint *)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(MiroBlueprint *)arg1;

@end
