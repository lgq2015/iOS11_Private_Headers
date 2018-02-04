/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASymbolHandleWithKernelBool : NSObject {
    bool  _isKernel;
    PASymbolHandle * _symbolHandle;
}

@property bool isKernel;
@property (retain) PASymbolHandle *symbolHandle;

- (void).cxx_destruct;
- (bool)isKernel;
- (void)setIsKernel:(bool)arg1;
- (void)setSymbolHandle:(id)arg1;
- (id)symbolHandle;

@end
