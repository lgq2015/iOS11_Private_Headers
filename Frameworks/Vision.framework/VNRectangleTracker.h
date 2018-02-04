/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRectangleTracker : VNTracker {
    NSMutableDictionary * _cornerTrackersImpl;
    NSObject<OS_dispatch_queue> * _rectangleTrackingProcessingQueue;
}

@property (readonly) bool isTracking;

+ (id)_trackingRectAroundPoint:(struct CGPoint { double x1; double x2; })arg1 trackingRectSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)trackedCorners;

- (void).cxx_destruct;
- (id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id*)arg2;
- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)isTracking;
- (bool)reset:(id*)arg1;
- (id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3;
- (id)trackInFrame:(id)arg1 error:(id*)arg2;

@end
