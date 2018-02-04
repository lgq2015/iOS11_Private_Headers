/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {
    long long  _alignment;
    long long  _axis;
    long long  _distribution;
    long long  _effectiveAxis;
    double  _smallestWidthKnownToCompress;
    double  _spacing;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__first_; 
        } __end_cap_; 
    }  _spacingAfter;
    Class  _spacingViewClass;
    NSMutableArray * _spacingViews;
    struct { 
        unsigned int delegateMinSpacing : 1; 
        unsigned int delegateMinDirectionalSpacing : 1; 
        unsigned int delegateAlignment : 1; 
    }  _stackViewFlags;
    struct _NUIGridArrangement { 
        <_NUIGridArrangementContainer> *container; 
        bool baselineRelative; 
        long long horzDist; 
        long long vertDist; 
        struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { 
            struct _NUIGridArrangementCell {} *__begin_; 
            struct _NUIGridArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { 
                struct _NUIGridArrangementCell {} *__first_; 
            } __end_cap_; 
        } cells; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__first_; 
            } __end_cap_; 
        } columns; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__first_; 
            } __end_cap_; 
        } rows; 
        struct vector<CGRect, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
                struct CGRect {} *__first_; 
            } __end_cap_; 
        } viewFrames; 
    }  _visibleArrangement;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleCount;
}

@property (nonatomic) long long alignment;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUIContainerStackViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution;
@property (nonatomic, readonly) long long effectiveAxis;
@property (readonly) unsigned long long hash;
@property (nonatomic) double spacing;
@property (nonatomic, retain) Class spacingViewClass;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_baselineViewVendForFirstBaseline:(bool)arg1;
- (struct CGSize { double x1; double x2; })_calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forLayout:(bool)arg2;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1;
- (long long)alignment;
- (id)arrangedDescription;
- (long long)axis;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (double)customSpacingAfterView:(id)arg1;
- (void)dealloc;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (long long)distribution;
- (long long)effectiveAxis;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(bool)arg1;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (bool)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateGridArrangementCells:(struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)populateGridArrangementDimension:(struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x1; struct _NUIGridArrangementDimension {} *x2; struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x_3_1_1; } x3; }*)arg1 withCells:(const struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg2 axis:(long long)arg3;
- (void)setAlignment:(long long)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDistribution:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2;
- (void)setSpacingViewClass:(Class)arg1;
- (double)spacing;
- (double)spacingAfterArrangedSubviewAtIndex:(long long)arg1;
- (Class)spacingViewClass;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
