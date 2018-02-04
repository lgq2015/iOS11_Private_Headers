/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHBottomUpSubstroke : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _coalescedCenter;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { 
            struct CGPoint {} *__first_; 
        } __end_cap_; 
    }  _convexHull;
    double  _curvature;
    double  _endTimestamp;
    long long  _originalWritingDirectionIndex;
    double  _startTimestamp;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _strokeDeviation;
    <CHStrokeIdentifier> * _strokeIdentifier;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _writingOrientation;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } coalescedCenter;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<CGPoint' */ struct  convexHull; /* unknown property attribute:  std::__1::allocator<CGPoint> >=^{CGPoint}}} */
@property (nonatomic, readonly) double curvature;
@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic) long long originalWritingDirectionIndex;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic) struct CGVector { double x1; double x2; } strokeDeviation;
@property (nonatomic, readonly, retain) <CHStrokeIdentifier> *strokeIdentifier;
@property (nonatomic) struct CGVector { double x1; double x2; } writingOrientation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGPoint { double x1; double x2; })coalescedCenter;
- (struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; })convexHull;
- (double)curvature;
- (void)dealloc;
- (double)endTimestamp;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; })arg5 curvature:(double)arg6;
- (long long)originalWritingDirectionIndex;
- (void)setCoalescedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalWritingDirectionIndex:(long long)arg1;
- (void)setStrokeDeviation:(struct CGVector { double x1; double x2; })arg1;
- (void)setWritingOrientation:(struct CGVector { double x1; double x2; })arg1;
- (double)startTimestamp;
- (struct CGVector { double x1; double x2; })strokeDeviation;
- (id)strokeIdentifier;
- (struct CGVector { double x1; double x2; })writingOrientation;

@end
