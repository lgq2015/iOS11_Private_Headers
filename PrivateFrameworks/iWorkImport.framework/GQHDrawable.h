/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHDrawable : NSObject <GQDrawablesGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)aboutToGenerateDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)beginDrawables:(id)arg1;
+ (Class)beginTable:(id)arg1;
+ (void)doneGeneratingDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)endDrawables:(id)arg1;
+ (int)handleDrawable:(id)arg1 state:(id)arg2;
+ (int)handleFloatingDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)handleInlineDrawable:(id)arg1 htmlState:(id)arg2;

@end
