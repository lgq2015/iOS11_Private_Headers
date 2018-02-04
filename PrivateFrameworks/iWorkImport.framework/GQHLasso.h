/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHLasso : NSObject <GQLassoGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)beginDocument:(id)arg1 state:(id)arg2;
+ (int)beginWorkspace:(const char *)arg1 state:(id)arg2;
+ (Class)beginWorkspacePage:(id)arg1 state:(id)arg2;
+ (int)endDocument:(id)arg1 state:(id)arg2;
+ (int)endWorkspace:(id)arg1;
+ (int)handleDrawableZOrder:(const char *)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)handleWorkspaceStyle:(id)arg1 state:(id)arg2;

@end
