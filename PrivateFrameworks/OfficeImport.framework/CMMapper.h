/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMMapper : NSObject <CMMapperRootArchiver> {
    CMMapper * mParent;
    CMMapper * mRoot;
}

@property (readonly) CMMapper *parent;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1 toNode:(id)arg2 value:(id)arg3;
- (void)addStyle:(id)arg1 withName:(id)arg2;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2;
- (void)addStyleUsingGlobalCacheTo:(id)arg1 style:(id)arg2 embedStyle:(bool)arg3;
- (id)archiver;
- (void)finishMappingWithState:(id)arg1;
- (id)init;
- (id)initWithParent:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (void)mapStylesheetAt:(id)arg1 stylesheet:(id)arg2;
- (id)parent;
- (id)root;
- (void)startMappingWithState:(id)arg1;

@end
