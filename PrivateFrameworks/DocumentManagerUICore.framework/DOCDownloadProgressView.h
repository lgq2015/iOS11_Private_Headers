/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCDownloadProgressView : UIView {
    DOCDownloadCircleView * _emptyLineCircleView;
    double  _emptyLineWidth;
    double  _endAngle;
    DOCDownloadCircleView * _filledLineCircleView;
    double  _filledLineWidth;
    double  _progress;
    double  _startAngle;
}

@property (nonatomic) DOCDownloadCircleView *emptyLineCircleView;
@property (nonatomic) double emptyLineWidth;
@property (nonatomic) double endAngle;
@property (nonatomic) DOCDownloadCircleView *filledLineCircleView;
@property (nonatomic) double filledLineWidth;
@property (nonatomic) double progress;
@property (nonatomic) double startAngle;

- (void).cxx_destruct;
- (id)emptyLineCircleView;
- (double)emptyLineWidth;
- (double)endAngle;
- (id)filledLineCircleView;
- (double)filledLineWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)progress;
- (void)setEmptyLineCircleView:(id)arg1;
- (void)setEmptyLineWidth:(double)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setFilledLineCircleView:(id)arg1;
- (void)setFilledLineWidth:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setStartAngle:(double)arg1;
- (void)setupCircleProgressView;
- (double)startAngle;

@end
