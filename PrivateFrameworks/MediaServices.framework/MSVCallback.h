/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCallback : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;

+ (id)callbackWithBlock:(id /* block */)arg1 queue:(id)arg2;
+ (id)callbackWithSelector:(SEL)arg1 target:(id)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)invoke:(id)arg1;
- (id)queue;
- (SEL)selector;
- (void)setBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
