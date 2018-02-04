/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCTFrame : NSObject {
    bool  _allowTruncation;
    const struct __CTFrame { } * _frame;
    PXCTFramesetter * _framesetter;
    NSArray * _lines;
    unsigned long long  _maximumLineCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    bool  _prepared;
    bool  _truncated;
}

@property (nonatomic, readonly) bool allowTruncation;
@property (nonatomic, readonly) const struct __CTFrame { }*frame;
@property (nonatomic, readonly) PXCTFramesetter *framesetter;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned long long maximumLineCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;
@property (getter=isTruncated, nonatomic, readonly) bool truncated;

- (void).cxx_destruct;
- (bool)_truncateLine:(inout const struct __CTLine {}**)arg1 withOrigin:(inout struct CGPoint { double x1; double x2; }*)arg2 referenceAttributedString:(inout id*)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)allowTruncation;
- (void)dealloc;
- (const struct __CTFrame { }*)frame;
- (id)framesetter;
- (id)init;
- (id)initWithFrame:(struct __CTFrame { }*)arg1 maximumLineCount:(unsigned long long)arg2 allowTruncation:(bool)arg3 framesetter:(id)arg4;
- (bool)isTruncated;
- (id)lines;
- (unsigned long long)maximumLineCount;
- (struct CGPoint { double x1; double x2; })origin;
- (void)prepare;

@end
