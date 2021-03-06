/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNavigationBar : SKUIScrollingTabNavigationBar {
    UINavigationController * _musicNavigationController;
}

@property (nonatomic) UINavigationController *musicNavigationController;

- (void).cxx_destruct;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (id)musicNavigationController;
- (void)setMusicNavigationController:(id)arg1;

@end
