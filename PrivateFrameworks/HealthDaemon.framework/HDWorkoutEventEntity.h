/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventEntity : HDHealthEntity

+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (bool)enumerateEventsForWorkout:(long long)arg1 withStatement:(id)arg2 error:(id*)arg3 eventHandler:(id /* block */)arg4;
+ (id)insertWorkoutEventWithWorkoutID:(id)arg1 dateInterval:(id)arg2 eventType:(long long)arg3 metadata:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (bool)insertWorkoutEventsFromWorkout:(id)arg1 workoutPersistentID:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;
+ (id)statementForEnumeratingEventsForWorkoutInDatabase:(id)arg1 error:(id*)arg2;
+ (id)workoutEventsWithWorkoutID:(id)arg1 database:(id)arg2 error:(id*)arg3;

@end
