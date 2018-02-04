/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection> {
    bool  _configureForListTemplate;
    UIView * _headerView;
}

@property (nonatomic) bool configureForListTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (bool)configureForListTemplate;
- (id)headerView;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 firstItemRowIndex:(long long*)arg3;
- (void)setConfigureForListTemplate:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
