/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDBatterySaver : NSObject <_CDBatterySaverProtocol> {
    NSXPCConnection * _connection;
}

+ (id)batterySaver;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)getPowerMode;
- (id)init;
- (long long)setMode:(long long)arg1;
- (bool)setPowerMode:(long long)arg1 error:(id*)arg2;
- (bool)setPowerMode:(long long)arg1 fromSource:(id)arg2;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setPowerMode:(long long)arg1 withCompletion:(id /* block */)arg2;

@end
