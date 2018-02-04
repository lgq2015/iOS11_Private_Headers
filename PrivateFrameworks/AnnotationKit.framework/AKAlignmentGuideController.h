/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKAlignmentGuideController : NSObject {
    bool  _exifHasFlippedAxes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint { double x1; double x2; } * _otherAnnotationCenters;
    unsigned long long  _otherAnnotationCentersCount;
    AKPageController * _pageController;
    double  _screenToModelScaleFactor;
}

@property bool exifHasFlippedAxes;
@property AKPageController *pageController;
@property double screenToModelScaleFactor;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)exifHasFlippedAxes;
- (struct CGPoint { double x1; double x2; })guideAlignedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 orRecognizer:(id)arg3;
- (id)initWithPageController:(id)arg1;
- (id)pageController;
- (double)screenToModelScaleFactor;
- (void)setExifHasFlippedAxes:(bool)arg1;
- (void)setPageController:(id)arg1;
- (void)setScreenToModelScaleFactor:(double)arg1;

@end
