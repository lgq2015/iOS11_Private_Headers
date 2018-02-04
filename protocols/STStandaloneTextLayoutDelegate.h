/* made by EzioChiu.
 */

@protocol STStandaloneTextLayoutDelegate

@required

- (double)marginForTextLayout:(STStandaloneTextLayout *)arg1;
- (struct CGPoint { double x1; double x2; })positionForTextLayout:(STStandaloneTextLayout *)arg1;
- (double)widthForTextLayout:(STStandaloneTextLayout *)arg1;

@end
