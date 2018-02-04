/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoScroller : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  __autoscrollDirection;
    double  __lastUpdateTimestamp;
    double  __margin;
    double  __maximumSpeed;
    bool  __repeating;
    <PXAutoScrollerDelegate> * _delegate;
    struct { 
        bool didAutoscrollWithTimestamp; 
    }  _delegateRespondsTo;
    struct NSObject { Class x1; } * _scrollView;
}

@property (setter=_setAutoscrollDirection:, nonatomic) struct CGPoint { double x1; double x2; } _autoscrollDirection;
@property (setter=_setLastUpdateTimestamp:, nonatomic) double _lastUpdateTimestamp;
@property (nonatomic, readonly) double _margin;
@property (nonatomic, readonly) double _maximumSpeed;
@property (getter=_isRepeating, setter=_setRepeating:, nonatomic) bool _repeating;
@property (nonatomic) <PXAutoScrollerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<PXAnonymousScrollView> *scrollView;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_autoscrollDirection;
- (bool)_isRepeating;
- (double)_lastUpdateTimestamp;
- (double)_margin;
- (double)_maximumSpeed;
- (void)_setAutoscrollDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLastUpdateTimestamp:(double)arg1;
- (void)_setRepeating:(bool)arg1;
- (bool)autoscrollWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)delegate;
- (id)init;
- (id)initWithTargetScrollView:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)scrollView;
- (void)setDelegate:(id)arg1;
- (void)startRepeating;
- (void)stop;
- (void)stopRepeating;
- (void)updateWithTimestamp:(double)arg1;
- (void)updateWithUserInteractionLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForScrollView:(struct NSObject { Class x1; }*)arg1;

@end
