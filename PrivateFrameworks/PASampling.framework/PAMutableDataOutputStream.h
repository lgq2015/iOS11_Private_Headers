/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAMutableDataOutputStream : PAOutputStream {
    NSMutableData * _outputData;
}

@property (nonatomic, readonly) NSMutableData *outputData;

- (void).cxx_destruct;
- (id)initWithMutableData:(id)arg1;
- (id)outputData;
- (int)printWithFormat:(const char *)arg1;

@end
