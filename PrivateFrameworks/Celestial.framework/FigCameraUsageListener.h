/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraUsageListener : NSObject <MCProfileConnectionObserver> {
    id /* block */  _changeHandler;
    bool  _isProhibited;
    struct OpaqueFigSimpleMutex { } * _isProhibitedLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithChangeHandler:(id /* block */)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end