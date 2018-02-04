/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKUndoSwipeGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startCentroid;
    bool  _startedSwipe;
    bool  _swipeRight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _swipeStartCentroid;
    unsigned long long  _touchCount;
}

@property (nonatomic) bool swipeRight;

- (void)reset;
- (void)setSwipeRight:(bool)arg1;
- (bool)swipeRight;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
