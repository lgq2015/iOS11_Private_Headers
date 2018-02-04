/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    bool  _allowHighlighting;
    bool  _allowSelection;
    bool  _allowTwoFingerSelection;
    bool  _animateSetFrame;
    UIPDFAnnotationController * _annotationController;
    UIImage * _backgroundImage;
    bool  _backgroundIsFullResolution;
    bool  _backgroundIsScheduled;
    unsigned long long  _backgroundScheduleCount;
    CALayer * _backingLayer;
    UIColor * _backingLayerColor;
    bool  _boundsChanged;
    double  _cachedScale;
    UIPDFPageContentDelegate * _contentDelegate;
    CALayer * _contentLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropBox;
    <NSObject><UIPDFPageViewDelegate> * _delegate;
    UIPDFDocument * _document;
    CALayer * _effectsLayer;
    bool  _enableLightMemoryFootprint;
    struct CGColor { } * _highLightColor;
    NSMutableArray * _highlights;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _margin;
    UIPDFPage * _page;
    unsigned long long  _pageIndex;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _pageToViewTransform;
    bool  _scalePageOnDraw;
    UIPDFSearchHighlightsController * _searchHighlightController;
    NSMutableArray * _searchHiglightLayers;
    UIPDFSelectionController * _selectionController;
    bool  _showActivityIndicator;
    bool  _showLinkAnnotationUnderline;
    bool  _showTextAnnotations;
    UIPDFViewTouchHandler * _touchHandler;
    bool  _useBackingLayer;
    bool  _useTiledContent;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _viewToPageTransform;
    bool  showAnnotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  zoomRect;
}

@property (nonatomic) bool allowHighlighting;
@property (nonatomic) bool allowMenu;
@property (nonatomic) bool allowSelection;
@property (nonatomic) bool allowTwoFingerSelection;
@property (nonatomic) bool animateSetFrame;
@property (nonatomic, readonly) UIPDFAnnotationController *annotationController;
@property (retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIColor *backingLayerColor;
@property (nonatomic, readonly) CALayer *contentLayer;
@property (nonatomic) <NSObject><UIPDFPageViewDelegate> *delegate;
@property (readonly, retain) UIPDFDocument *document;
@property (nonatomic, readonly) CALayer *effectsLayer;
@property (readonly) struct CGColor { }*highLightColor;
@property (nonatomic) double margin;
@property UIPDFPage *page;
@property (readonly) unsigned long long pageIndex;
@property UIPDFSelectionController *selectionController;
@property (nonatomic) bool showActivityIndicator;
@property (nonatomic) bool showAnnotations;
@property (nonatomic) bool showLinkAnnotationUnderline;
@property (nonatomic) bool showTextAnnotations;
@property (nonatomic) bool useBackingLayer;

- (struct CGPDFDictionary { }*)_annotForPoint:(struct CGPoint { double x1; double x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)addLayers:(bool)arg1;
- (void)addPage:(id)arg1;
- (void)addWidgetToSelection;
- (bool)allowHighlighting;
- (bool)allowMenu;
- (bool)allowSelection;
- (bool)allowTwoFingerSelection;
- (bool)animateSetFrame;
- (id)annotationController;
- (id)backgroundImage;
- (id)backingLayerColor;
- (void)clearSearchHighlights;
- (void)clearSelection;
- (id)contentLayer;
- (struct CGPoint { double x1; double x2; })convertPointFromPDFPageSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToPDFPageSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromPDFPageSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToPDFPageSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)createBackingLayer;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)didScroll:(id)arg1;
- (void)displayContent;
- (id)document;
- (void)doubleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawAnnotations:(struct CGContext { }*)arg1;
- (id)effectsLayer;
- (void)enableLightMemoryFootprint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fitWidth:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atVertical:(double)arg2;
- (bool)hasSearchHighlights;
- (void)hideSelection;
- (struct CGColor { }*)highLightColor;
- (void)highlightSearchSelection:(id)arg1 animated:(bool)arg2;
- (void)ignoreTouches:(bool)arg1;
- (id)init;
- (id)initWithPage:(id)arg1;
- (id)initWithPage:(id)arg1 tiledContent:(bool)arg2;
- (id)initWithPageLimitedMemory:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTextEffects;
- (double)margin;
- (id)page;
- (unsigned long long)pageIndex;
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectangleOfInterestAt:(struct CGPoint { double x1; double x2; })arg1 kind:(int*)arg2;
- (void)removeBackingLayer;
- (void)scheduleBackgroundImage;
- (id)searchHighlightSelectionAt:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionController;
- (void)setAllowHighlighting:(bool)arg1;
- (void)setAllowMenu:(bool)arg1;
- (void)setAllowSelection:(bool)arg1;
- (void)setAllowTwoFingerSelection:(bool)arg1;
- (void)setAnimateSetFrame:(bool)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackingLayerColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingSurfaceLayer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMargin:(double)arg1;
- (void)setNeedsDisplay;
- (void)setPage:(id)arg1;
- (void)setSelectionController:(id)arg1;
- (void)setSelectionNeedsDisplay;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowAnnotations:(bool)arg1;
- (void)setShowLinkAnnotationUnderline:(bool)arg1;
- (void)setShowTextAnnotations:(bool)arg1;
- (void)setTransforms;
- (void)setUseBackingLayer:(bool)arg1;
- (bool)showActivityIndicator;
- (bool)showAnnotations;
- (void)showContent;
- (bool)showLinkAnnotationUnderline;
- (void)showSelection;
- (bool)showTextAnnotations;
- (void)singleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stopActivityIndicator;
- (void)suspendInstantTouchHighlighting;
- (void)twoFingerDoubleTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (bool)useBackingLayer;
- (void)viewDidZoom:(id)arg1;
- (bool)willDoSomethingWithTap:(struct CGPoint { double x1; double x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
