/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectImportExportUtils : NSObject

+ (bool)doesProjectFileExistForProject:(id)arg1;
+ (id)exportPathForProject:(id)arg1;
+ (unsigned int)getTrailingCount:(id)arg1 delim:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
+ (id)incrementTrailingCount:(id)arg1 delim:(id)arg2;
+ (bool)isValidProjectName:(id)arg1;
+ (id)makeUniquePath:(id)arg1 delimiter:(id)arg2;
+ (void)reconnectSharedMediaToProject:(id)arg1 usingDatemap:(id)arg2;

@end
