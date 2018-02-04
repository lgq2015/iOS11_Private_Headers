/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDebugStateDumpManager : NSObject {
    NSMutableDictionary * _stateDumpHandlersByName;
    NSObject<OS_dispatch_queue> * _stateHandlerQueue;
}

@property (nonatomic, retain) NSMutableDictionary *stateDumpHandlersByName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateHandlerQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)performStateDump:(bool)arg1;
- (id)registerStateDumpHandler:(id /* block */)arg1 withName:(id)arg2;
- (void)setStateDumpHandlersByName:(id)arg1;
- (void)setStateHandlerQueue:(id)arg1;
- (id)stateDumpHandlersByName;
- (id)stateHandlerQueue;

@end
