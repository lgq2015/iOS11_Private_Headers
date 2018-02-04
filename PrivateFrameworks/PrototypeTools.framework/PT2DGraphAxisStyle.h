/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphAxisStyle : NSObject {
    UIColor * _color;
    UIColor * _gridlineColor;
    unsigned long long  _gridlineCount;
    double  _hashmarkInterval;
    double  _lineWidth;
    bool  _showsGridlines;
    bool  _showsHashmarks;
    bool  _showsTitle;
    NSString * _title;
    UIColor * _titleColor;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIColor *gridlineColor;
@property (nonatomic) unsigned long long gridlineCount;
@property (nonatomic) double hashmarkInterval;
@property (nonatomic) double lineWidth;
@property (nonatomic) bool showsGridlines;
@property (nonatomic) bool showsHashmarks;
@property (nonatomic) bool showsTitle;
@property (nonatomic) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (void).cxx_destruct;
- (id)color;
- (id)gridlineColor;
- (unsigned long long)gridlineCount;
- (double)hashmarkInterval;
- (id)init;
- (double)lineWidth;
- (void)setColor:(id)arg1;
- (void)setGridlineColor:(id)arg1;
- (void)setGridlineCount:(unsigned long long)arg1;
- (void)setHashmarkInterval:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setShowsGridlines:(bool)arg1;
- (void)setShowsHashmarks:(bool)arg1;
- (void)setShowsTitle:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (bool)showsGridlines;
- (bool)showsHashmarks;
- (bool)showsTitle;
- (id)title;
- (id)titleColor;

@end
