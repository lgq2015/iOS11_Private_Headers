/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPDropCapBackgroundAdornment : NSObject <TSWPLineFragmentAdornment> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    TSUColor * _color;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackground;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawAdornmentForFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; double x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; double x_9_1_6; double x_9_1_7; double x_9_1_8; } x9; struct TSWPListLabel {} *x10; id x11; void x12; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x13; BOOL x14; void*x15; out const void*x16; void*x17; unsigned short x18; void*x19; void*x20; unsigned long x21; int x22; in void*x23; void*x24; void*x25; float x26; void*x27; void*x28; short x29; void*x30; double x31; SEL x32; SEL x33; void*x34; void*x35; void*x36; SEL x37; SEL x38; void*x39; long x40; long x41; out BOOL x42; void*x43; void*x44; out const void*x45; void*x46; unsigned short x47; }*)arg1 inContext:(struct CGContext { }*)arg2 withFlags:(unsigned int)arg3 state:(const struct TSWPDrawingState { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; id x3; unsigned long long x4; struct CGColor {} *x5; double x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; struct TSWPRangeVector { struct _NSRange {} *x_14_1_1; struct _NSRange {} *x_14_1_2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_2_1; } x_14_1_3; } x14; struct TSWPRangeVector { struct _NSRange {} *x_15_1_1; struct _NSRange {} *x_15_1_2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_2_1; } x_15_1_3; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; struct TSWPRangeVector {} *x17; struct TSWPRangeVector {} *x18; struct _NSRange { unsigned long long x_19_1_1; unsigned long long x_19_1_2; } x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; unsigned long long x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; }*)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)initWithColor:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)isBackground;

@end
