/* made by EzioChiu.
 */

@protocol AXGroupable <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (AXElementGroup *)highestAncestorGroup;
- (bool)isGroup;
- (AXElementGroup *)keyboardContainer;
- (AXElementGroup *)parentGroup;
- (void)setParentGroup:(AXElementGroup *)arg1;

@end
