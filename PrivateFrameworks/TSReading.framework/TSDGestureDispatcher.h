/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGestureDispatcher : NSObject <TSDGestureDelegate> {
    bool  _gestureDidFire;
    NSMutableArray * _gesturesInFlight;
    TSDInteractiveCanvasController * _interactiveCanvasController;
    TSUNoCopyDictionary * _priorityMap;
    bool  _runningTargetHandleGesture;
    NSMutableArray * _simultaneitySets;
    NSMutableArray * _targetsInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly) Class superclass;

- (void)allowSimultaneousRecognitionByRecognizers:(id)arg1;
- (void)dealloc;
- (void)didReset:(id)arg1;
- (bool)gestureActionShouldBegin:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRemovedFromView:(id)arg1;
- (void)handleGesture:(id)arg1;
- (bool)handleGesture:(id)arg1 withTarget:(id)arg2;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)interactiveCanvasController;
- (void)p_gestureNoLongerInFlight:(id)arg1;
- (id)p_getGestureTarget:(id)arg1;
- (void)prioritizeRecognizer:(id)arg1 overRecognizer:(id)arg2;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)teardown;

@end
