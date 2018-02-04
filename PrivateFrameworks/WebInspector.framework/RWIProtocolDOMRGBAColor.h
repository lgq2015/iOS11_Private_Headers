/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolDOMRGBAColor : RWIProtocolJSONObject

@property (nonatomic) double a;
@property (nonatomic) int b;
@property (nonatomic) int g;
@property (nonatomic) int r;

- (double)a;
- (int)b;
- (int)g;
- (id)initWithR:(int)arg1 g:(int)arg2 b:(int)arg3;
- (int)r;
- (void)setA:(double)arg1;
- (void)setB:(int)arg1;
- (void)setG:(int)arg1;
- (void)setR:(int)arg1;

@end
