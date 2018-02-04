/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleLayout : NSObject {
    NSArray * _bubbleLocations;
    NSArray * _bubbleViews;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _radius;
    NSSet * _visibleBubbleSet;
}

@property (nonatomic, retain) NSArray *bubbleLocations;
@property (nonatomic, retain) NSArray *bubbleViews;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double radius;
@property (nonatomic, retain) NSSet *visibleBubbleSet;

- (id)bubbleLocations;
- (id)bubbleViews;
- (struct CGPoint { double x1; double x2; })center;
- (void)dealloc;
- (void)performLayout;
- (double)radius;
- (void)setBubbleLocations:(id)arg1;
- (void)setBubbleViews:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setVisibleBubbleSet:(id)arg1;
- (void)showBubble:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 atAngle:(double)arg3;
- (id)visibleBubbleSet;

@end