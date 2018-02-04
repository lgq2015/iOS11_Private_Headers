/* made by EzioChiu.
 */

@protocol PXAssetReferenceProtocol <NSObject, NSCopying>

@required

- (id)asset;
- (id)assetCollection;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })simpleIndexPath;

@end
