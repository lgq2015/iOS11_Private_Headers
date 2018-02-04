/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener> {
    bool  _isDisplayingMedia;
    double  _maximumVisibleY;
    SXMediaExposureEvent * _mediaExposureEvent;
    double  _minimumVisibleY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisplayingMedia;
@property (nonatomic) double maximumVisibleY;
@property (nonatomic, retain) SXMediaExposureEvent *mediaExposureEvent;
@property (nonatomic) double minimumVisibleY;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

- (void).cxx_destruct;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (void)calculateVisibleBounds;
- (void)createMediaExposureEventIfNeeded;
- (void)finishMediaExposureEventIfNeeded;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (bool)isDisplayingMedia;
- (double)maximumVisibleY;
- (id)mediaEventForClass:(Class)arg1;
- (id)mediaExposureEvent;
- (double)minimumVisibleY;
- (void)setIsDisplayingMedia:(bool)arg1;
- (void)setMaximumVisibleY:(double)arg1;
- (void)setMediaExposureEvent:(id)arg1;
- (void)setMinimumVisibleY:(double)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)submitEvents;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (void)visibleBoundsChanged;
- (void)willSubmitMediaExposureEvent:(id)arg1;

@end
