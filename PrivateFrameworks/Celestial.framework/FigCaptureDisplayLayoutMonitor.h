/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureDisplayLayoutMonitor : NSObject {
    struct OpaqueFigSimpleMutex { } * _appsLock;
    NSMutableArray * _fullScreenApps;
    int  _globalLayoutState;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSMutableArray * _layoutObservers;
    struct OpaqueFigSimpleMutex { } * _layoutObserversLock;
    NSMutableArray * _nonFullScreenApps;
}

+ (int)_openFrontBoardServicesFramework;
+ (id)sharedDisplayLayoutMonitor;

- (void)_updateCurrentLayout:(id)arg1;
- (void)_updateObserversWithForegroundApps:(id)arg1 layoutState:(int)arg2;
- (void)addLayoutObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeLayoutObserver:(id)arg1;

@end