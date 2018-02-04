/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECScheduler : NSObject {
    id /* block */  _block;
    NSObject<OS_xpc_object> * _executionCriteria;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)forceRun;
- (id)initWithActivityIdentifier:(id)arg1 andExecutionCriteria:(id)arg2;
- (void)setBlock:(id /* block */)arg1;

@end
