/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface APGraphLayer : CALayer {
    struct __CTFont { } * _Font;
    struct CGPoint { double x1; double x2; } * _Lines;
    int  _MaxLength;
    float * _Maxes;
    float * _Mins;
    int  _NumGraphs;
    int * _NumValues;
    int * _StartIndex;
    struct __CFDictionary { } * _TextAttributes;
    float ** _Values;
}

+ (struct CGColor { }*)copyGraphColorWithIndex:(int)arg1;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)setUpGraphs:(int)arg1;
- (void)updateValue:(int)arg1 value:(float)arg2;

@end
