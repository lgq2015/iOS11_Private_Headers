/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
 */

@interface WebAppViewController : UIViewController {
    bool  _setupRootViewColor;
    unsigned long long  _statusBarStyle;
}

@property (nonatomic) unsigned long long statusBarStyle;

- (long long)preferredStatusBarStyle;
- (void)setStatusBarStyle:(unsigned long long)arg1;
- (unsigned long long)statusBarStyle;

@end
