/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectImportExport : NSObject {
    NSMutableArray * _exportedProjectList;
}

@property (retain) NSMutableArray *exportedProjectList;

+ (id)sharedInstance;

- (void)deleteExportedProject:(id)arg1;
- (void)deleteExportedProjectWithName:(id)arg1;
- (id)exportedProjectList;
- (bool)haveExportedProjectNamed:(id)arg1;
- (id)init;
- (void)refreshExportedProjectFileList;
- (void)setExportedProjectList:(id)arg1;
- (void)undeleteExportedProject:(id)arg1;

@end
