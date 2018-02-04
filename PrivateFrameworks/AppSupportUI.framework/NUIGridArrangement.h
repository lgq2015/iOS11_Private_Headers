/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer> {
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
    }  _arrangement;
    <NUIArrangementContainer> * _container;
    <NUIGridArrangementDataSource> * _dataSource;
    struct { 
        unsigned int delegateWidth : 1; 
        unsigned int delegateHeight : 1; 
    }  _flags;
    double  _scale;
}

@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic, readonly) <NUIArrangementContainer> *container;
@property (nonatomic, readonly) <NUIGridArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalDistribution;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalDistribution;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cacheDisplayScaleIfNeeded;
- (id)container;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)horizontalDistribution;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;
- (bool)isBaselineRelativeArrangement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })layoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)populateGridArrangementCells:(struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)populateGridArrangementDimension:(struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x1; struct _NUIGridArrangementDimension {} *x2; struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x_3_1_1; } x3; }*)arg1 withCells:(const struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg2 axis:(long long)arg3;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (void)positionItemsInColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 block:(id /* block */)arg4;
- (void)reloadData;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setHorizontalDistribution:(long long)arg1;
- (void)setVerticalDistribution:(long long)arg1;
- (bool)supportsAsynchronousMeasurement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionFrameForItemsInColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)verticalDistribution;

@end
