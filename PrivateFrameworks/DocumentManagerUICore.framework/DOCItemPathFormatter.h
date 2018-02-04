/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCItemPathFormatter : NSObject

+ (id)pathStringFromPathComponents:(id)arg1 layoutDirection:(long long)arg2;
+ (void)pathStringOfItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)requestParentOfItem:(id)arg1 parents:(id)arg2 completionHandler:(id /* block */)arg3;

@end
