/* made by EzioChiu.
 */

@protocol PXTileIdentifierConverter <NSObject>

@required

- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@optional

- (bool)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1;

@end
