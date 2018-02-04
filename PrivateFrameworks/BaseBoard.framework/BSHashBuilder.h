/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSHashBuilder : NSObject {
    unsigned long long  _hash;
}

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)builder;

- (id)appendArray:(id)arg1;
- (id)appendBool:(bool)arg1;
- (id)appendCGFloat:(double)arg1;
- (id)appendCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)appendCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)appendCGSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appendClass:(Class)arg1;
- (id)appendDouble:(double)arg1;
- (id)appendFloat:(float)arg1;
- (id)appendHashingBlocks:(id /* block */)arg1;
- (id)appendInteger:(long long)arg1;
- (id)appendObject:(id)arg1;
- (id)appendPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)appendPointer:(void*)arg1;
- (id)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)appendSize:(struct CGSize { double x1; double x2; })arg1;
- (id)appendSizeT:(unsigned long long)arg1;
- (id)appendString:(id)arg1;
- (id)appendUnsignedInteger:(unsigned long long)arg1;
- (unsigned long long)hash;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_appendCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
