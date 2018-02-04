/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeDepthMap : NSObject {
    NSArray * _depthsOfSlideNodes;
    NSArray * _slideNodes;
}

@property (nonatomic, readonly) NSArray *depthsOfSlideNodes;
@property (nonatomic, readonly) NSArray *slideNodes;

- (void).cxx_destruct;
- (id)depthsOfSlideNodes;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(id /* block */)arg1;
- (id)initWithSlideNodes:(id)arg1 depths:(id)arg2;
- (id)slideNodes;

@end
