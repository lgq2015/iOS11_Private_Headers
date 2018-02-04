/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKAppInstaller : NSObject {
    NSObject<OS_dispatch_queue> * _installQueue;
    NSMutableSet * _installSessions;
}

+ (id)defaultAppInstaller;

- (void).cxx_destruct;
- (id)init;
- (void)installAppForInstallable:(id)arg1 offer:(id)arg2 progressHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)installAppForInstallable:(id)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;

@end