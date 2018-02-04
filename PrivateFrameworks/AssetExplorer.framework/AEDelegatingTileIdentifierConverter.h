/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEDelegatingTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {
    <PXTileIdentifierConverter> * __wrappedConverter;
}

@property (nonatomic, readonly) <PXTileIdentifierConverter> *_wrappedConverter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_wrappedConverter;
- (id)initWithWrappedConverter:(id)arg1;
- (bool)transformTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 group:(unsigned long long*)arg2;

@end
