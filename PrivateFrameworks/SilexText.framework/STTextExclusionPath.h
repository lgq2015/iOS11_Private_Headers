/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextExclusionPath : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _actualPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    id /* block */  _completionBlock;
    NSString * _componentIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    bool  _fullBleed;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    int  _lineVerticalAlignment;
    id /* block */  _minYBlock;
    double  _padding;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    id /* block */  _startBlock;
    int  _type;
    double  _verticalAlignmentFactor;
    STTextExclusionPathWrapper * _wrapper;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } actualPosition;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *componentIdentifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } exclusionRect;
@property (nonatomic) bool fullBleed;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) int lineVerticalAlignment;
@property (nonatomic, copy) id /* block */ minYBlock;
@property (nonatomic) double padding;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) id /* block */ startBlock;
@property (nonatomic, readonly) int type;
@property (nonatomic) double verticalAlignmentFactor;
@property (nonatomic, readonly) <TSDWrappable> *wrappable;
@property (nonatomic, readonly) STTextExclusionPathWrapper *wrapper;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })actualPosition;
- (void)adjustYPositionWithCurrentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)callCompletionBlock;
- (void)callStartBlock;
- (id /* block */)completionBlock;
- (id)componentIdentifier;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exclusionRect;
- (bool)fullBleed;
- (id)initWithTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 position:(struct CGPoint { double x1; double x2; })arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (int)lineVerticalAlignment;
- (id /* block */)minYBlock;
- (double)padding;
- (id)path;
- (struct CGPoint { double x1; double x2; })position;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setActualPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setComponentIdentifier:(id)arg1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullBleed:(bool)arg1;
- (void)setLineVerticalAlignment:(int)arg1;
- (void)setMinYBlock:(id /* block */)arg1;
- (void)setPadding:(double)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStartBlock:(id /* block */)arg1;
- (void)setVerticalAlignmentFactor:(double)arg1;
- (id /* block */)startBlock;
- (int)type;
- (double)verticalAlignmentFactor;
- (id)wrappable;
- (id)wrapper;

@end
