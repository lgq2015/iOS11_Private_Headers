/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAnnotationEventHandler : NSObject {
    AKAnnotation * _annotation;
    bool  _draggingHorizontalOnly;
    bool  _draggingVerticalOnly;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDraggedPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialOtherPoint;
    unsigned long long  _initiallyDraggedArea;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPositionInModel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPositionInWindow;
    AKPageController * _pageController;
}

@property (retain) AKAnnotation *annotation;
@property bool draggingHorizontalOnly;
@property bool draggingVerticalOnly;
@property struct CGPoint { double x1; double x2; } initialCenter;
@property struct CGPoint { double x1; double x2; } initialDraggedPoint;
@property struct CGPoint { double x1; double x2; } initialOtherPoint;
@property unsigned long long initiallyDraggedArea;
@property struct CGPoint { double x1; double x2; } lastPositionInModel;
@property struct CGPoint { double x1; double x2; } lastPositionInWindow;
@property AKPageController *pageController;

+ (Class)_handlerClassForPlatformForAnnotation:(id)arg1;
+ (bool)allowsDragging;
+ (bool)allowsDraggingOfAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })annotationRectangleForDraggingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAnnotation:(id)arg2 onPageController:(id)arg3 withOriginalCenter:(struct CGPoint { double x1; double x2; })arg4;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)arg1 withPageController:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2;
- (bool)alwaysLockAspectRatio;
- (id)annotation;
- (bool)canLockAspectRatio;
- (bool)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (bool)draggingHorizontalOnly;
- (bool)draggingVerticalOnly;
- (bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)getInitialDraggedPoint:(struct CGPoint { double x1; double x2; }*)arg1 otherPoint:(struct CGPoint { double x1; double x2; }*)arg2 center:(struct CGPoint { double x1; double x2; }*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (struct CGPoint { double x1; double x2; })initialCenter;
- (struct CGPoint { double x1; double x2; })initialDraggedPoint;
- (struct CGPoint { double x1; double x2; })initialOtherPoint;
- (unsigned long long)initiallyDraggedArea;
- (struct CGPoint { double x1; double x2; })lastPositionInModel;
- (struct CGPoint { double x1; double x2; })lastPositionInWindow;
- (bool)lockAspectRatioByDefault;
- (struct CGPoint { double x1; double x2; })modelPointFromPointInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (double)naturalAspectRatioForAnnotation;
- (struct CGSize { double x1; double x2; })naturalSizeForAnnotation;
- (id)pageController;
- (void)setAnnotation:(id)arg1;
- (void)setDraggingHorizontalOnly:(bool)arg1;
- (void)setDraggingVerticalOnly:(bool)arg1;
- (void)setInitialCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialDraggedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialOtherPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitiallyDraggedArea:(unsigned long long)arg1;
- (void)setLastPositionInModel:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastPositionInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPageController:(id)arg1;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2;

@end
