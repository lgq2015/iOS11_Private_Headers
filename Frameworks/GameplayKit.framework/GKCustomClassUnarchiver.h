/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate> {
    NSMutableDictionary * _cache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentAppModuleName;
- (id)_findValidClassName:(id)arg1;
- (id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;

@end
