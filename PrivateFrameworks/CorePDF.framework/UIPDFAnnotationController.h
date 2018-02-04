/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {
    bool  _allowEditing;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedMarginNoteSize;
    UIPDFMarkupAnnotation * _currentAnnotation;
    UIColor * _currentColor;
    <NSObject><UIPDFAnnotationControllerDelegate> * _delegate;
    CALayer * _drawingSurface;
    struct { 
        long long location; 
        long long length; 
    }  _initialRange;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _moving;
    UIPDFPageView * _pageView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    bool  _tracking;
    bool  makeUnderlineAnnotation;
}

@property (nonatomic) bool allowEditing;
@property (nonatomic, retain) UIPDFAnnotation *currentAnnotation;
@property (nonatomic) UIColor *currentColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NSObject><UIPDFAnnotationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CALayer *drawingSurface;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool makeUnderlineAnnotation;
@property (nonatomic, readonly) UIPDFPageView *pageView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tracking;

+ (id)newAnnotation:(struct CGPDFDictionary { }*)arg1 type:(const char *)arg2;
+ (struct CGImage { }*)newMaskImage:(struct CGPDFPage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (bool)pageHasAnnotations:(id)arg1;

- (void)_addAnnotationViewFor:(id)arg1;
- (void)_addLinkAnnotationViewFor:(id)arg1;
- (void)_addRecognizers:(id)arg1;
- (void)_initialRange:(struct CGPoint { double x1; double x2; })arg1;
- (id)_linkAnnotationViewAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)addAnnotation:(id)arg1;
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;
- (void)addLinkAnnotationViews;
- (bool)allowEditing;
- (id)annotatePageSelection;
- (id)annotationAt:(struct CGPoint { double x1; double x2; })arg1;
- (bool)annotationBriefPressRecognized:(id)arg1;
- (bool)annotationLongPressRecognized:(id)arg1;
- (bool)annotationSingleTapRecognized:(id)arg1;
- (void)annotationTapRecognized:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSurfaceLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSurfaceLayer:(id)arg2;
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;
- (id)currentAnnotation;
- (id)currentColor;
- (void)dealloc;
- (id)delegate;
- (void)didEndTrackingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (id)drawingSurface;
- (void)endTrackingAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hostViewDidScroll;
- (id)init;
- (id)initWithPageView:(id)arg1;
- (bool)intersects:(struct CGPDFSelection { }*)arg1 with:(struct CGPDFSelection { }*)arg2;
- (bool)isLinkAnnotationAt:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isSelection:(struct CGPDFSelection { }*)arg1 equalTo:(struct CGPDFSelection { }*)arg2;
- (void)layoutAnnotationViews:(id)arg1;
- (id)linkAnnotationAt:(struct CGPoint { double x1; double x2; })arg1;
- (bool)linkAnnotationShouldBegin:(id)arg1;
- (void)linkPressRecognized:(id)arg1;
- (void)lock;
- (bool)madeInstantAnnotation;
- (bool)makeUnderlineAnnotation;
- (id)marginNoteImage:(id)arg1;
- (struct CGSize { double x1; double x2; })marginNoteImageSize;
- (void)mergeSelectionOfAnnotation:(id)arg1;
- (struct CGImage { }*)newHighlightMaskImageFor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pageView;
- (void)resetBeingPressedForRecognizer:(id)arg1 withDelegate:(id)arg2 withAnnotation:(id)arg3;
- (void)setAllowEditing:(bool)arg1;
- (void)setCurrentAnnotation:(id)arg1;
- (void)setCurrentColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingSurface:(id)arg1;
- (void)setMakeUnderlineAnnotation:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setSurfacePosition:(id)arg1;
- (void)setView:(id)arg1;
- (void)startTracking:(struct CGPoint { double x1; double x2; })arg1;
- (bool)trackMoved:(struct CGPoint { double x1; double x2; })arg1;
- (bool)tracking;
- (void)tracking:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGImage { }*)underlineImageFor:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)unlock;
- (bool)willDoSomethingWithTap:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willHandleTouchGestureAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)willTrackAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end