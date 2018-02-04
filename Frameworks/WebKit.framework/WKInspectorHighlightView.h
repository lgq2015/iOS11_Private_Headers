/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKInspectorHighlightView : UIView {
    NSMutableArray * _layers;
}

- (void)_createLayers:(unsigned long long)arg1;
- (void)_layoutForNodeHighlight:(const struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1 offset:(unsigned int)arg2;
- (void)_layoutForNodeListHighlight:(const struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1;
- (void)_layoutForRectsHighlight:(const struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1;
- (void)_removeAllLayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)update:(const struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1;

@end
