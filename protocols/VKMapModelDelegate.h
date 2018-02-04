/* made by EzioChiu.
 */

@protocol VKMapModelDelegate <NSObject>

@required

- (void)mapModel:(VKMapModel *)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(VKMapModel *)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { }*)arg2;
- (void)mapModel:(VKMapModel *)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(VKMapModel *)arg1 hasFailedTiles:(bool)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(VKMapModel *)arg1;
- (void)mapModelDidFailLoadingTiles:(VKMapModel *)arg1 withError:(NSError *)arg2;
- (void)mapModelDidFinishLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidStartLoadingTiles:(VKMapModel *)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(VKMapModel *)arg1;
- (void)mapModelLabelsDidLayout:(VKMapModel *)arg1;
- (void)mapModelWillBecomeFullyDrawn:(VKMapModel *)arg1;

@optional

- (void)mapModel:(VKMapModel *)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)mapModelDidReloadStylesheet:(VKMapModel *)arg1;
- (void)mapModelStylesheetDidChange:(VKMapModel *)arg1;

@end
