/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMigrator : NSObject {
    SSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)performMigration:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;

@end
