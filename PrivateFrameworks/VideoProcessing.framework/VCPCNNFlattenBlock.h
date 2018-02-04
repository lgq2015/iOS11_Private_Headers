/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNFlattenBlock : VCPCNNBlock {
    int  _chunk;
}

- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)forward;
- (id)initWithParameters:(int)arg1;

@end
