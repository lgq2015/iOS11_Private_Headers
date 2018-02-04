/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNavigationController : SKUIScrollingTabNavigationController {
    unsigned long long  _searchOptions;
}

@property (nonatomic) unsigned long long searchOptions;

+ (bool)automaticallyInstallAccountBarButtonItem;
+ (bool)automaticallyInstallSearchBarButtonItem;

- (void)_installBarButtonsOnViewController:(id)arg1 isRootViewController:(bool)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)music_reportingFeatureName;
- (id)music_reportingRecommendationData;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;

@end
