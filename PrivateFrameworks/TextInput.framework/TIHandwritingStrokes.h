/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    bool  _continuePreviousStroke;
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__begin_; 
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > *, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > > { 
            struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > {} *__first_; 
        } __end_cap_; 
    }  _strokes;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)endStroke;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfStrokes;
- (struct CGPoint { double x1; double x2; })pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfPoints;

@end