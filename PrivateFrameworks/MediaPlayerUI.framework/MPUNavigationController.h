/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNavigationController : UINavigationController {
    id /* block */  _overrideSupportedInterfaceOrientationsHandler;
    bool  _supportsStandardInterfaceOrientations;
}

@property (nonatomic, copy) id /* block */ overrideSupportedInterfaceOrientationsHandler;
@property (nonatomic) bool supportsStandardInterfaceOrientations;

- (void).cxx_destruct;
- (id /* block */)overrideSupportedInterfaceOrientationsHandler;
- (void)setOverrideSupportedInterfaceOrientationsHandler:(id /* block */)arg1;
- (void)setSupportsStandardInterfaceOrientations:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsStandardInterfaceOrientations;

@end
