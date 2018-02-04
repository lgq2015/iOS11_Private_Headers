/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADRemoteActionViewController : _UIRemoteViewController {
    bool  _hasBeenDismissed;
    unsigned long long  _remoteSupportedInterfaceOrientations;
    NSString * _vendedClass;
}

@property (nonatomic) bool hasBeenDismissed;
@property (nonatomic) unsigned long long remoteSupportedInterfaceOrientations;
@property (nonatomic, copy) NSString *vendedClass;

+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (bool)hasBeenDismissed;
- (unsigned long long)remoteSupportedInterfaceOrientations;
- (void)setHasBeenDismissed:(bool)arg1;
- (void)setRemoteSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setVendedClass:(id)arg1;
- (void)updateInterfaceOrientationIfNeeded;
- (id)vendedClass;

@end
