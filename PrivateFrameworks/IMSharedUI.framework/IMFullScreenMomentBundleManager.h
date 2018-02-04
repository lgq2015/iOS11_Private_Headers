/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

@interface IMFullScreenMomentBundleManager : NSObject {
    NSMutableDictionary * _fullScreenMomentBundles;
}

@property (nonatomic, readonly) NSDictionary *fullScreenMomentBundles;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadFSMBundlesAtPath:(id)arg1 intoDictionary:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)fullScreenMomentBundles;
- (id)fullScreenMomentForIdentifier:(id)arg1;
- (bool)hasFullScreenMomentForIdentifier:(id)arg1;
- (id)init;

@end
