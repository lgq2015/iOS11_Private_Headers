/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
 */

@interface NUViewport : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    double  _backingScaleFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } backingPosition;
@property (nonatomic, readonly) double backingScaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } backingSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGPoint { double x1; double x2; })backingPosition;
- (double)backingScaleFactor;
- (struct CGSize { double x1; double x2; })backingSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 backingScaleFactor:(double)arg2;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
