/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeProgressView : UIView {
    UIImageView * _appleLogo;
    double  _currentProgress;
    unsigned long long  _style;
    unsigned long long  _version;
}

@property (nonatomic, retain) UIImageView *appleLogo;
@property (nonatomic) double currentProgress;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_size;
- (double)_tickLength;
- (id)appleLogo;
- (double)currentProgress;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setAppleLogo:(id)arg1;
- (void)setCurrentProgress:(double)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (unsigned long long)version;

@end
