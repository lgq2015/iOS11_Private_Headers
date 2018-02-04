/* made by EzioChiu.
 */

@protocol NUJSImageGeometryExport <JSExport>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (long long)orientation;
- (NUJSScale *)scale;
- (struct CGSize { double x1; double x2; })size;

@end
