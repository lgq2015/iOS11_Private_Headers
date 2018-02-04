/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIContainerView : UIView {
    NSMutableArray * _arrangedSubviews;
    long long  _asynchronousMeasurement;
    bool  _baselineRelativeArrangement;
    struct nui_size_cache { 
        struct __tree<std::__1::__value_type<CGSize, CGSize>, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true>, std::__1::allocator<std::__1::__value_type<CGSize, CGSize> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<CGSize, CGSize>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<CGSize, std::__1::__value_type<CGSize, CGSize>, std::__1::less<CGSize>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _cachedIntrinsicSizes;
    struct { 
        unsigned int hiddenArrangedSubviewCount : 16; 
        unsigned int inBatch : 1; 
        unsigned int delayState : 2; 
        unsigned int inLayoutPass : 2; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int delegateDidInvalidateIntrinsicContentSize : 1; 
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1; 
        unsigned int delegateLayoutFrameForArrangedSubview : 1; 
        unsigned int delegateWillMeasureFitting : 1; 
        unsigned int delegateDidLayout : 1; 
    }  _containerFlags;
    <NUIContainerViewDelegate> * _delegate;
    bool  _layoutMarginsRelativeArrangement;
    double  _preferredMaxLayoutWidth;
    NSArray * _visibleArrangedSubviews;
}

@property (nonatomic, copy) NSArray *arrangedSubviews;
@property (nonatomic) long long asynchronousMeasurement;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic) <NUIContainerViewDelegate> *delegate;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (nonatomic, readonly) NSArray *visibleArrangedSubviews;

+ (void)initialize;
+ (bool)isDebugBoundingBoxesEnabled;
+ (Class)layerClass;
+ (bool)requiresConstraintBasedLayout;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addAsSubviewIfNeeded:(id)arg1;
- (void)_beginObservingSubviewVisibility:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)_endObservingSubviewVisibility:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (bool)_verifyInternalConsistencyWarningOnly:(bool)arg1;
- (void)addArrangedSubview:(id)arg1;
- (id)arrangedDescription;
- (id)arrangedSubviews;
- (void)assertNotInLayoutPass:(bool)arg1;
- (long long)asynchronousMeasurement;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveLayoutMargins;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)invalidateIntrinsicContentSize;
- (bool)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(bool)arg1;
- (bool)isBaselineRelativeArrangement;
- (bool)isInBatchUpdate;
- (bool)isInLayoutPass;
- (bool)isLayoutMarginsRelativeArrangement;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (bool)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)removeArrangedSubview:(id)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAsynchronousMeasurement:(long long)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setNeedsLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsAsynchronousMeasurement;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (id)visibleArrangedSubviews;

@end
