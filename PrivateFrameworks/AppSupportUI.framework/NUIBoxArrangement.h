/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer> {
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
    }  _arrangement;
    <NUIArrangementContainer> * _container;
    <NUIBoxArrangementDataSource> * _dataSource;
    double  _scale;
}

@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic, readonly) <NUIArrangementContainer> *container;
@property (nonatomic, readonly) <NUIBoxArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cacheDisplayScaleIfNeeded;
- (id)container;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;
- (bool)isBaselineRelativeArrangement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })layoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)populateBoxArrangementCells:(struct vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> > { struct _NUIBoxArrangementCell {} *x1; struct _NUIBoxArrangementCell {} *x2; struct __compressed_pair<_NUIBoxArrangementCell *, std::__1::allocator<_NUIBoxArrangementCell> > { struct _NUIBoxArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (void)reloadData;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (bool)supportsAsynchronousMeasurement;

@end
