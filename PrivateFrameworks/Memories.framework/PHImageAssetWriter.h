/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PHImageAssetWriter : PHAssetWriter {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;

- (void).cxx_destruct;
- (id)data;
- (unsigned long long)estimatedOutputSizeWithError:(id*)arg1;
- (id)request;
- (void)setData:(id)arg1;
- (id)transfer;

@end
