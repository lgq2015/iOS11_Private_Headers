/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPromise : NSObject {
    FCPromiseSeal * _seal;
}

@property (nonatomic, retain) FCPromiseSeal *seal;

+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3;
+ (id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3;
+ (id)asDelay:(double)arg1 withError:(id)arg2;
+ (id)asDelay:(double)arg1 withValue:(id)arg2;
+ (id)asVoid;
+ (id)asVoid:(id)arg1;
+ (id)firstly:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)always:(id /* block */)arg1;
- (id)alwaysOn:(id)arg1 always:(id /* block */)arg2;
- (void)dealloc;
- (id)error:(id /* block */)arg1;
- (id)errorOn:(id)arg1 error:(id /* block */)arg2;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithResolver:(id /* block */)arg1;
- (id)initWithValue:(id)arg1;
- (id)seal;
- (void)setSeal:(id)arg1;
- (id)then:(id /* block */)arg1;
- (id)thenOn:(id)arg1 then:(id /* block */)arg2;

@end
