/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface LocationIndicatorExplanationView : UIView <PSHeaderFooterView> {
    UIImageView * _activeIcon;
    UILabel * _activeLabel;
    UIImageView * _geofenceIcon;
    UILabel * _geofenceLabel;
    UIImageView * _recentIcon;
    UILabel * _recentLabel;
}

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end
