/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageLibraryMigrator : NSObject {
    bool  _needsRebuildMessageInfoIndex;
    bool  _needsRebuildTriggers;
    int  _needsSpotlightReindex;
}

- (bool)migrateWithSQLiteConnection:(id)arg1;
- (bool)needsRebuildMessageInfoIndex;
- (bool)needsRebuildTriggers;
- (void)noteNeedsRebuildTriggers;
- (void)noteNeedsSpotlightReindex;
- (void)noteRebuildMessageInfoIndex;
- (void)performSpotlightReindexIfNeededWithHandler:(id /* block */)arg1;
- (void)resetTTRPromptAndForceReindex;

@end
