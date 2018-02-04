/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNVisitorHelper : NSObject

+ (id)commandsForSynchronizingPlaceholdersForSlide:(id)arg1 oldMasterSlidePropertySource:(id)arg2 newMasterSlidePropertySource:(id)arg3 alwaysMatchNewMaster:(bool)arg4 outNewZOrderArray:(id)arg5 outPlaceholdersForTags:(id)arg6;
+ (bool)info:(id)arg1 hasSamePlaceholderTypeAsInfo:(id)arg2;
+ (id)infoInMasterSlidePropertySource:(id)arg1 correspondingToInfo:(id)arg2 inAbstractSlidePropertySource:(id)arg3;
+ (bool)infoIsPlaceholder:(id)arg1 inAbstractSlidePropertySource:(id)arg2;
+ (id)infoOnSlide:(id)arg1 correspondingToInfo:(id)arg2 inMasterPropertySource:(id)arg3;
+ (id)tagForInfo:(id)arg1 inAbstractSlidePropertySource:(id)arg2;

@end
