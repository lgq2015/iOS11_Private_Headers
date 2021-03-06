/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionManager : NSObject {
    NSMutableDictionary * _extensions;
    NSMutableDictionary * _killTimers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_killExtensionWithBundleIdentifier:(id)arg1;
- (void)_manageExtension:(id)arg1 requestIdentifier:(id)arg2;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)arg1;
- (void)fetchExtensionForIntent:(id)arg1 extensionInputItems:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)killExtension:(id)arg1 requestIdentifier:(id)arg2 afterTimeout:(double)arg3;

@end
