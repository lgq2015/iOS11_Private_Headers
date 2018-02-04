/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSchemaRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    struct NSMutableDictionary { Class x1; } * _schemas;
    struct NSMutableDictionary { Class x1; } * _versions;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2;
- (id)_latestVersionWithOriginalIdentifier:(id)arg1;
- (void)_registerBuiltInSchemas;
- (bool)_registerSchema:(id)arg1 error:(out id*)arg2;
- (bool)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id*)arg3;
- (id)_schemaWithIdentifier:(id)arg1;
- (id)init;
- (id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2;
- (bool)registerSchema:(id)arg1 error:(out id*)arg2;
- (bool)registerSchemas:(id)arg1 error:(out id*)arg2;
- (id)schemaWithIdentifier:(id)arg1;
- (id)versionsCompatibleWithIdentifier:(id)arg1;

@end
