/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUGradient : NSObject <NSCoding, NSCopying> {
    NSMutableArray * _colorStops;
    NSLock * _lock;
    struct SUGradientPoint { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double radius; 
    }  _p0;
    struct SUGradientPoint { 
        struct CGPoint { 
            double x; 
            double y; 
        } point; 
        double radius; 
    }  _p1;
    bool  _sorted;
    long long  _type;
}

@property (readonly) NSArray *colorStopColors;
@property (readonly) NSArray *colorStopOffsets;
@property (readonly) long long gradientType;
@property (readonly) long long numberOfColorStops;
@property (readonly) struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } p0;
@property (readonly) struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } p1;

+ (id)gradientWithColor:(id)arg1;

- (void)addColorStopWithOffset:(double)arg1 color:(struct CGColor { }*)arg2;
- (id)colorStopColors;
- (id)colorStopOffsets;
- (struct CGGradient { }*)copyCGGradient;
- (struct CGShading { }*)copyShading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gradientType;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint0:(struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1 point1:(struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg2 type:(long long)arg3;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)newPatternColorWithSize:(struct CGSize { double x1; double x2; })arg1 opaque:(bool)arg2;
- (long long)numberOfColorStops;
- (struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })p0;
- (struct SUGradientPoint { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })p1;

@end
