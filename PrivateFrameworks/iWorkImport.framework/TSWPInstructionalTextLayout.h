/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPInstructionalTextLayout : TSWPLayout

@property (nonatomic, retain) TSWPStorage *storage;

- (id)initWithInfo:(id)arg1 storage:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)isInstructional;
- (void)setStorage:(id)arg1;

@end
