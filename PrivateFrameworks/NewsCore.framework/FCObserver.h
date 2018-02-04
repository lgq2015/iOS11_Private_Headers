/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCObserver : NSObject <FCDisposable> {
    id  _keepAliveObject;
    id /* block */  _observerBlock;
    unsigned long long  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id keepAliveObject;
@property (nonatomic, copy) id /* block */ observerBlock;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long token;

- (void).cxx_destruct;
- (void)dispose;
- (void)disposeOn:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithToken:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)keepAliveObject;
- (id /* block */)observerBlock;
- (void)setKeepAliveObject:(id)arg1;
- (void)setObserverBlock:(id /* block */)arg1;
- (void)setToken:(unsigned long long)arg1;
- (unsigned long long)token;

@end