/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing> {
    struct { 
        unsigned int delegateHorizontal : 1; 
        unsigned int delegateVertical : 1; 
    }  _boxFlags;
    long long  _horizontalAlignment;
    long long  _verticalAlignment;
    struct _NUIBoxArrangement { 
        <_NUIBoxArrangementContainer> *container; 
        bool baselineRelative; 
        long long horzDist; 
        long long vertDist; 
        struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> > { 
            struct _NUIBoxArrangementCell {} *__begin_; 
            struct _NUIBoxArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> > { 
                struct _NUIBoxArrangementCell {} *__first_; 
            } __end_cap_; 
        } cells; 
        struct vector<CGRect, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
                struct CGRect {} *__first_; 
            } __end_cap_; 
        } viewFrames; 
    }  _visibleArrangement;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUIContainerBoxViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_effectiveHorizontalAlignmentForArrangedSubview:(id)arg1;
- (long long)_effectiveVerticalAlignmentForArrangedSubview:(id)arg1;
- (id)arrangedDescription;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (long long)horizontalAlignment;
- (id)initWithArrangedSubviews:(id)arg1;
- (bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(bool)arg1;
- (bool)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateBoxArrangementCells:(struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> > { struct _NUIBoxArrangementCell {} *x1; struct _NUIBoxArrangementCell {} *x2; struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> > { struct _NUIBoxArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)verticalAlignment;

@end
