/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneEventQueue : BSEventQueue

- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;

@end
