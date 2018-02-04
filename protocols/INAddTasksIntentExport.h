/* made by EzioChiu.
 */

@protocol INAddTasksIntentExport <NSObject, JSExport>

@required

- (id)init;
- (void)setSpatialEventTrigger:(INSpatialEventTrigger *)arg1;
- (void)setTargetTaskList:(INTaskList *)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1;
- (INSpatialEventTrigger *)spatialEventTrigger;
- (INTaskList *)targetTaskList;
- (NSArray *)taskTitles;
- (INTemporalEventTrigger *)temporalEventTrigger;

@end
