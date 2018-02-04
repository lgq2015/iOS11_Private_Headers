/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxController : NSObject <_UISettingsKeyObserver> {
    CADisplayLink * _displayLink;
    bool  _generatingUpdates;
    CMMotionManager * _motionManager;
    NSHashTable * _observers;
    PTXParallaxReferenceFrame * _referenceFrame;
    PTXParallaxEngineSettings * _settings;
    double  _startUpdatesTimestamp;
    NSMutableSet * _suspendReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultsChanged:(id)arg1;
- (void)_onDisplayLink:(id)arg1;
- (void)_sendClearOffset;
- (void)_sendOffset:(struct CGPoint { double x1; double x2; })arg1 lockStatus:(long long)arg2 lockStrength:(double)arg3;
- (void)_setUpDisplayLink;
- (bool)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (bool)_suspended;
- (void)_tearDownDisplayLink;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithParallaxEngineSettings:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetReferenceFrame;
- (void)resume:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)start;
- (void)stop;
- (void)suspend:(id)arg1;

@end
