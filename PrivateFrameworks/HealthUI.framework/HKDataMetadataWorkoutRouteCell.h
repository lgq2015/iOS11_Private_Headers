/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell {
    UIActivityIndicatorView * _activityIndicator;
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _routeImageView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UIImageView *routeImageView;

- (void).cxx_destruct;
- (id)activityIndicator;
- (id)heightConstraint;
- (id)init;
- (id)routeImageView;
- (void)setActivityIndicator:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setRouteImage:(id)arg1;
- (void)setRouteImageView:(id)arg1;
- (void)setupConstraints;

@end
