/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMCancelationToken : NSObject <FMCancelable> {
    NSMutableArray * _cancelationBlocks;
    bool  _isCanceled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tokenWithCancelationBlock:(id /* block */)arg1;
+ (id)tokenWrappingCancelable:(id)arg1;

- (void).cxx_destruct;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(id /* block */)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (void)cancel;
- (id)init;
- (bool)isCanceled;
- (id)nts_cancel;

@end
