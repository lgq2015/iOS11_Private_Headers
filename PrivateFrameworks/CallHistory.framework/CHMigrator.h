/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHMigrator : NSObject {
    CallDBMigrator * _migrator;
}

- (void).cxx_destruct;
- (id)init;
- (void)migrate:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;

@end
