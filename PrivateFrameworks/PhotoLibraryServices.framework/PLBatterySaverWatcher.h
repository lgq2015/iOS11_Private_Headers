/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBatterySaverWatcher : NSObject {
    NSHashTable * _delegates;
    int  _notifyBatterySaverModeToken;
}

@property (nonatomic, readonly) bool batterySaverModeEnabled;

+ (id)sharedBatterySaverWatcher;

- (void)addDelegate:(id)arg1;
- (bool)batterySaverModeEnabled;
- (void)dealloc;
- (unsigned int)registerToBatterySaverModeNotification;
- (void)removeDelegate:(id)arg1;
- (void)unregisterToBatterySaverModeNotification;

@end
