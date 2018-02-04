/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableBorderSides : SXJSONObject {
    SXUnitConverter * _unitConverter;
}

@property (nonatomic, readonly) SXDataTableBorder *bottom;
@property (nonatomic, readonly) SXDataTableBorder *left;
@property (nonatomic, readonly) SXDataTableBorder *right;
@property (nonatomic, readonly) SXDataTableBorder *top;
@property (nonatomic, retain) SXUnitConverter *unitConverter;

- (void).cxx_destruct;
- (id)borderForValue:(id)arg1;
- (id)bottomWithValue:(id)arg1 withType:(int)arg2;
- (id)leftWithValue:(id)arg1 withType:(int)arg2;
- (id)rightWithValue:(id)arg1 withType:(int)arg2;
- (void)setUnitConverter:(id)arg1;
- (id)topWithValue:(id)arg1 withType:(int)arg2;
- (id)unitConverter;

@end
