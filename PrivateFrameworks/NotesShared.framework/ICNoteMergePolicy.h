/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNoteMergePolicy : NSMergePolicy

- (id)init;
- (id)initWithMergeType:(unsigned long long)arg1;
- (void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (bool)resolveConstraintConflicts:(id)arg1 error:(id*)arg2;

@end
