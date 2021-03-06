/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKZipArchiver : NSObject

+ (void)associateBOMCopier:(struct _BOMCopier { }*)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier { }*)arg1;
+ (void)noteBOMCopier:(struct _BOMCopier { }*)arg1 succeeded:(bool)arg2;

- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)zippedDataForURL:(id)arg1;

@end
