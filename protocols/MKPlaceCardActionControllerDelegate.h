/* made by EzioChiu.
 */

@protocol MKPlaceCardActionControllerDelegate <NSObject>

@required

- (void)placeActionManager:(MKPlaceActionManager *)arg1 didSelectShareFromView:(UIView *)arg2;
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1;

@optional

- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveMarker:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenBrandCard:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(MKPlaceCardActionsViewController *)arg1;

@end
