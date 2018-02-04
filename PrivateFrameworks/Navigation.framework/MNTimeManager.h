/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeManager : NSObject {
    <MNTimeProvider> * _provider;
    MNObserverHashTable * _timeManagerObservers;
}

@property (nonatomic, retain) <MNTimeProvider> *provider;

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_resetToDefaultProvider;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)provider;
- (void)removeObserver:(id)arg1;
- (void)setProvider:(id)arg1;

@end
