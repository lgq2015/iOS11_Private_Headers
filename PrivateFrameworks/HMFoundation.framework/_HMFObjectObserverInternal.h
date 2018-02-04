/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFObjectObserverInternal : HMFObject {
    id /* block */  _deallocationBlock;
}

@property (nonatomic, copy) id /* block */ deallocationBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)deallocationBlock;
- (void)setDeallocationBlock:(id /* block */)arg1;

@end
