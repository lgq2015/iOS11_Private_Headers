/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPaths : NSObject

+ (id)suggestionsDirectory;
+ (id)suggestionsDirectoryAfterCreatingIfNeeded:(bool)arg1;
+ (id)suggestionsDirectoryFile:(id)arg1;
+ (id)suggestionsDirectoryFile:(id)arg1 creatingSuggestionsDirectoryIfNeeded:(bool)arg2;
+ (id)suggestionsSubdirectory:(id)arg1;
+ (id)suggestionsSubdirectory:(id)arg1 creatingDirectoriesIfNeeded:(bool)arg2;

@end
