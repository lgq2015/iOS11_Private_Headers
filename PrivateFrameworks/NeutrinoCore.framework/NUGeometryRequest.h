/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGeometryRequest : NURenderRequest {
    <NUScalePolicy> * _scalePolicy;
}

@property (retain) <NUScalePolicy> *scalePolicy;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)scalePolicy;
- (void)setScalePolicy:(id)arg1;
- (void)submit:(id /* block */)arg1;

@end
