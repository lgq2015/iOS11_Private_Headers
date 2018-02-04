/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUINavBarSpinnerManager : NSObject {
    long long  _activityIndicatorViewStyle;
    NSMutableDictionary * _savedRecords;
}

@property (nonatomic) long long activityIndicatorViewStyle;

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (long long)activityIndicatorViewStyle;
- (id)init;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(bool)arg4;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end
