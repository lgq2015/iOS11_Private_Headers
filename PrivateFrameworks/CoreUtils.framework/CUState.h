/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUState : NSObject {
    id /* block */  _eventHandler;
    unsigned long long  _index;
    NSPointerArray * _lcaMap;
    NSString * _name;
    CUState * _parent;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)eventHandler;
- (id)init;
- (id)initWithName:(id)arg1 parent:(id)arg2;
- (void)invalidate;
- (id)name;
- (void)setEventHandler:(id /* block */)arg1;

@end
