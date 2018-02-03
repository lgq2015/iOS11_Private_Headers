/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectFocusEventProvider : _UIMotionEffectEventProvider {
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusPosition;
    bool  _isGeneratingEvents;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastReportedPosition;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } focusPosition;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (id)currentEvent;
- (struct CGPoint { double x1; double x2; })focusPosition;
- (id)init;
- (void)setFocusPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (bool)wantsSynchronizedUpdates;

@end