/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXClippingView : UIView {
    unsigned long long  _clippingMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIView * _contentView;
}

@property (nonatomic) unsigned long long clippingMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) SXClippingLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (unsigned long long)clippingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)initWithContentView:(id)arg1;
- (void)setClippingMode:(unsigned long long)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
