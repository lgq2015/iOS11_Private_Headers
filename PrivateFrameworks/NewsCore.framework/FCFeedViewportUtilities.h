/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportUtilities : NSObject

+ (id)_externalGroupIDFromGroup:(id)arg1;
+ (void)_fixPersistenceGapIdentifiersIn:(id)arg1 internalElements:(id)arg2 oldViewport:(id)arg3;
+ (void)_replaceDeflatedElementsWithPersistenceGapsIn:(id)arg1;
+ (id)diffWithNewExternalElements:(id)arg1 newInternalElements:(id)arg2 modifiedInternalGroups:(id)arg3 expandedGap:(id)arg4 oldViewport:(id)arg5;
+ (id)externalElementsFromInternalElements:(id)arg1 oldViewport:(id)arg2 feedDescriptor:(id)arg3;

@end
