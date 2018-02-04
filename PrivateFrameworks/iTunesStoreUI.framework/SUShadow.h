/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUShadow : NSObject <NSCoding, NSCopying> {
    UIColor * _color;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _opacity;
    double  _radius;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

- (void)applyToLayer:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })offset;
- (double)opacity;
- (double)radius;
- (void)setColor:(id)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end
